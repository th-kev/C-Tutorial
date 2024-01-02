#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include <pthread.h>

#define NUM_THREADS 3

typedef struct
{
    int32_t input;
    int32_t output;
} ThreadData_t;


void *functions(void *args) // Immer der Aubfbau der Funktion, wenn Thread gemacht wird
{
    ThreadData_t* data = (ThreadData_t *)(args);    // immer vom void pointer casten zu dem was man will. Immer Pointer nicht normale Variable

    printf("Argument: %d\n", data->input);

    data->output = data->input * 2;

    return NULL;

}

int main()
{

    pthread_t threads[NUM_THREADS];

    ThreadData_t thread_data[NUM_THREADS];



    for (int32_t i = 0; i < NUM_THREADS; i++)
    {
        thread_data[i].input = i;
        thread_data[i].output = 0;

    }

    for (int32_t i = 0; i < NUM_THREADS; i++)
    {
        pthread_create(&threads[i], NULL, &functions, (void *)(&thread_data[i]));
    }

    for (int32_t i = 0; i < NUM_THREADS; i++)
    {
        pthread_join(threads[i], NULL); // Wenn man warten will das der Thread fertig is
    }

    for (int32_t i = 0; i < NUM_THREADS; i++)
    {
        printf("Result: %d\n", thread_data[i].output);
    }

    return 0;
}
