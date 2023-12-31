#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include <pthread.h>

#define NUM_THREADS 3

void *functions(void *args) // Immer der Aubfbau der Funktion, wenn Thread gemacht wird
{
    const int32_t arg_i32 = *((int *)(args));

    printf("Argument: %d\n", arg_i32);

    int *result = (int *)malloc(sizeof(int));
    *result = arg_i32 * 2;

    pthread_exit((void *)(result));
}

int main()
{

    pthread_t threads[NUM_THREADS];

    int32_t inputs[NUM_THREADS];

    int32_t *results[NUM_THREADS];

    for (int32_t i = 0; i < NUM_THREADS; i++)
    {
        inputs[i] = i;
    }

    for (int32_t i = 0; i < NUM_THREADS; i++)
    {
        pthread_create(&threads[i], NULL, &functions, (void *)(&inputs[i]));
    }

    for (int32_t i = 0; i < NUM_THREADS; i++)
    {
        pthread_join(threads[i], (void *)(&results[i])); // Wenn man warten will das der Thread fertig is
    }

    for (int32_t i = 0; i < NUM_THREADS; i++)
    {
        printf("Result1: %d\n", *results[i]);
    }

    return 0;
}
