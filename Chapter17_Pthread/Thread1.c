#include <stdio.h>

#include <pthread.h>

void *functions(void *args) // Immer der Aubfbau der Funktion, wenn Thread gemacht wird
{
    (void)(args);
    const pthread_t this_thread = pthread_self();

    printf("Called from thread: %d\n", (int)(this_thread));

    return NULL;
}

int main()
{

    pthread_t thread1;
    pthread_t thread2;

    pthread_create(&thread1, NULL, &functions, NULL);
    pthread_create(&thread2, NULL, &functions, NULL);

    pthread_join(thread1, NULL);    // Wenn man warten will das der Thread fertig ist
    pthread_join(thread2, NULL);

    return 0;
}
