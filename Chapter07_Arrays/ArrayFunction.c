#include <stdio.h>

float meanArray(int *array, unsigned int lenght)
{
    //printf("%lu\n", sizeof(*array));
    float sum = 0.0f;

    for (unsigned int i = 0; i < lenght; i++)
    {
        sum += array[i];
    }

    return (float)(sum) / (float)(lenght);
}

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


    float mean = meanArray(array, 10);
    printf("%f\n", mean);


    return 0;
}
