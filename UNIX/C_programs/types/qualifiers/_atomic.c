#define _Atomic
#include <stdio.h>
#include <pthread.h>
#include <stdatomic.h>

// 1st method of declaration
_Atomic int var; // type qualifier
// 2nd method
// atomic_int num;

// atomic counter
_Atomic int atomic_count = 0;
// simple counter
int count = 0;

// the function which will run in the thread
void *runner(void *arg)
{
    for (int i = 0; i < 10001; i++)
    {
        atomic_count++;
        count++;
    }
    return NULL;
};

int main()
{
    // making the essentials variables to creat threads
    pthread_t threadIDs[8];
    pthread_attr_t attr;
    pthread_attr_init(&attr);

    // making 5 threads
    for (int i = 0; i < 8; i++)
        pthread_create(&threadIDs[i], &attr, runner, NULL);
    for (int i = 0; i < 8; i++)
        pthread_join(threadIDs[i], NULL);

    printf("The atomic counter is %u\n", atomic_count);
    printf("The non-atomic counter is %u\n", count);

    return 0;
};