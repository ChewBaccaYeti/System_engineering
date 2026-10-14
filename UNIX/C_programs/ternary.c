#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    //? ternary operator is a short-hand for if(condition){}else{} statements
    // (condition) ? value_if_true : value_if_false;

    int x = 0;
    int y = 0;
    printf("Enter X hours you spent playing videogames: ");
    scanf("%d", &x);
    printf("Enter Y hours you want to play more: ");
    scanf("%d", &x);

    int max = (x > y) ? x : y;
    int div = (max % 2 == 0);
    printf("MAX: [%d] and it is [%s]", max, div ? "even" : "odd");

    bool isOnline = true;
    if (max >= 3)
    {
        isOnline = false;
    }
    printf("%s", (isOnline) ? "\n[ONLINE]: Good hunting!" : "\n[OFFLINE]: Go touch the grass...");

    time_t now = time(NULL);
    struct tm *utc_time = gmtime(&now); // Use gmtime, not localtime
    int hours = utc_time->tm_hour;
    int minutes = utc_time->tm_min;
    const char *meridiem = (hours < 12) ? "AM" : "PM"; // pointer
    printf("\nIt's %d:%d %s", hours, minutes, meridiem);

    return 0;
};