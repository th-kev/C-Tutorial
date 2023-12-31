#include <stdio.h>
#include <stdint.h>

#include <pthread.h>

void *functions(void *args) // Immer der Aubfbau der Funktion, wenn Thread gemacht wird
{
    const int32_t arg_i32 = *((int *)(args));

    printf("Argument: %d\n", arg_i32);

    return NULL;
}

int main()
{

    pthread_t thread1;
    pthread_t thread2;

    int input1 = 1;
    int input2 = 2;

    pthread_create(&thread1, NULL, &functions, (void *)(&input1));
    pthread_create(&thread2, NULL, &functions, (void *)(&input2));

    pthread_join(thread1, NULL);    // Wenn man warten will das der Thread fertig ist
    pthread_join(thread2, NULL);

    return 0;
}
