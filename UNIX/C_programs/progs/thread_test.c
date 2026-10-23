#include <stdbool.h>
#include <assert.h>
#include <stdint.h>
#include <stddef.h>  // For NULL
#include <stdio.h>   // For printf
#include <pthread.h> // For pthread functions

#define _Atomic
#define BIG 10000000UL

// pthread_mutex_t mutex; // `classic` way to control race conditions
_Atomic uint64_t counter = 0;

void count_to_big()
{
    for (int i = 0; i < BIG; i++)
    {
        // pthread_mutex_lock(&mutex);
        counter += i;
        // pthread_mutex_unlock(&mutex);
    }
};

void *threadfunc(void *arg)
{
    count_to_big();
    return NULL;
};

int main(int argc, char **argv)
{
    pthread_t t1, t2;

    pthread_create(&t1, NULL, threadfunc, NULL);
    pthread_create(&t2, NULL, threadfunc, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    printf("The result is: %lu\n", counter);

    return 0;
};