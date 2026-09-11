#include <sys/types.h>
#include <sys/times.h>
#include <time.h>
#include <limits.h>
#include <unistd.h>

clock_t times (struct tms *buffer);
time_t time (time_t *tloc);
int stime (const time_t *tp);

struct tms {
    clock_t tms_utime; // proc time of parent in user mode
    clock_t tms_stime; // in sys mode
    clock_t tms_cutime; // childs sum of utime & cutime 
    clock_t tms_cstime; // childs sum of stime & cstime
};