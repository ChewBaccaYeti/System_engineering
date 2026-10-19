#include <stdio.h>

// volatiles is for hardware value manipulations, such as registers or memory-mappers, shared memory between diff threads, signals handlers etc.
volatile int sensor_value;

void read_sensor()
{
    sensor_value = get_sensor_reading(); // Reading from a hardware sensor
};

int main()
{
    while (1)
    {
        read_sensor();
        printf("Sensor value: %d\n", sensor_value);
    }

    return 0;
};