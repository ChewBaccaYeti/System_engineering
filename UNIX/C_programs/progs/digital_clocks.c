#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h> // for UNIX-like systems, POSIX - sleep()

int main()
{
    time_t rawtime = time(NULL); // range of seconds that passed since (00:00:00 1 January 1970 (UNIX Epoch))
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("\n=|*|= DIGITAL CLOCK =|*|=\n");

    while (isRunning)
    {
        time(&rawtime);
        pTime = localtime(&rawtime);

        // printf("\r%d:%d:%d\n", (*pTime).tm_hour, (*pTime).tm_min, (*pTime).tm_sec);
        printf("\rMM/DD/HH/MM/SS: [%02d:%02d:%02d:%02d:%02d] - %s", pTime->tm_mon, pTime->tm_mday, pTime->tm_hour, pTime->tm_min, pTime->tm_sec, pTime->tm_zone); // alter shortcut
        fflush(stdout);

        // printf("%ld", rawtime);
        sleep(1);
    }

    return 0;
};