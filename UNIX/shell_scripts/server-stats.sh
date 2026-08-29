#!/bin/bash

if [ $# -gt 0 ] ; then 
        echo "Invalid syntax!"
        echo "The valid syntax is ./$(basename $0)"
    exit 1
fi

function memory_util() {
    FREE_MEM=$(free -m | awk '/Mem/ {print $4}')
    BUFF_CACHE_MEM=$(free -m | awk '/Mem/ {print $6}')
    YIELD_MEM=$((FREE_MEM + BUFF_CACHE_MEM))

    TOTAL_MEM=$(free -m | awk '/Mem/ {print $2}')
    AVAILABLE_MEM=$(free -m | awk '/Mem/ {print $7}')

    GENERAL_USED_MEM=$((TOTAL_MEM - AVAILABLE_MEM))
    MEM_USAGE_PERCENTAGE=$(bc <<< "scale=2; $GENERAL_USED_MEM * 100 / $TOTAL_MEM")

    echo -e "........................................\n\033[31mMEMORY UTILIZATION\033[0m\n"
    echo -e "Total Memory\t\t: $TOTAL_MEM MB"
    echo -e "Available Memory\t: $AVAILABLE_MEM MB"
    echo -e "Buffer+Cache Memory\t: $BUFF_CACHE_MEM MB"
    echo -e "Free Memory\t\t: $FREE_MEM MB"
    echo -e "Memory Usage Percentage\t: $MEM_USAGE_PERCENTAGE %"

    if [ $AVAILABLE_MEM -lt 100 -o $YIELD_MEM -lt 100 ] ; then
        echo "Available Memory or the free and buffer+cache Memory is too low!"
        echo "Unhealthy Memory!"
    elif dmesg 2>/dev/null  | grep -q "oom-killer" ; then
        echo "System is critically low on memory!"
    else
        echo -e "\n\033[31mMEMORY OK\033[0m\n........................................"
    fi
}

function cpu_util() {
    CORES=$(nproc)
    LOAD_AVERAGE=$(uptime | awk -F'load average: ' '{print $2}' | cut -d',' -f3 | xargs)
    LOAD_PERCENT=$(bc <<< "scale=0; $LOAD_AVERAGE *100")

    echo -e "\n\033[31mCPU UTILIZATION\033[0m\n"
    echo -e "Number of Cores\t:$CORES\n"

    echo -e "Total CPU Load Average for the past 15 minutes\t:$LOAD_AVERAGE"
    echo -e "CPU Load %\t\t\t\t\t:$LOAD_PERCENT"
    echo -e "\nThe load average reading takes into account all the core(s) present in the system"

    if [[ $(echo "if (${LOAD_AVERAGE} == ${CORES}) 1 else 0 " | bc) -eq 1 ]] ; then
        echo "Load average not ideal."
    elif [[ $(echo "if (${LOAD_AVERAGE} > ${CORES}) 1 else 0 " | bc) -eq 1 ]] ; then
        echo "Critical! Load average is too high!"
    else
        echo -e "\nCPU LOAD OK"
    fi

    IDLE=$(top -b -n2 | awk '/Cpu/ {print $8}' | tail -1)
    CPU_USAGE_PERCENT=$(bc <<<"scale=2; 100 - $IDLE/$CORES")

    echo -e "\n\033[31mCPU Usage %\t:$CPU_USAGE_PERCENT\033[0m\n........................................"
}

function disk_util() {
    ROOT_DISK_USED=$(df -h / | awk 'NR==2 {gsub("%", "", $5); print $5}')
    ROOT_DISK_AVAILABLE=$((100 - ROOT_DISK_USED))

    HOME_DISK_USED=$(df -h /home | awk 'NR==2 {gsub("%", "", $5); print $5}')
    HOME_DISK_AVAILABLE=$((100 - HOME_DISK_USED))

    echo -e "\n\033[31mDISK UTILIZATION\033[0m\n"
    echo -e "Root(/) Used\t\t:$ROOT_DISK_USED%"
    echo -e "Root(/) Available\t:$ROOT_DISK_AVAILABLE%\n"

    echo -e "Home(/home) Used\t:$HOME_DISK_USED%"
    echo -e "Home(/home) Available\t:$HOME_DISK_AVAILABLE%"

    if [ "$ROOT_DISK_USED" -ge 95 ] || [ "$HOME_DISK_USED" -ge 95 ]; then
        echo -e "\nDisk is almost full! Free up some space!"
    else
        echo -e "\n\033[31mDISK OK\033[0m\n"
    fi
}


function main() {
    memory_util
    cpu_util
    disk_util
}
main