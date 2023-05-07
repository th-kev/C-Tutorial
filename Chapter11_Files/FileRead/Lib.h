#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Vector
{
    int *data;
    unsigned int length;
} Vector;

int *createArray(unsigned int length, int value);

int *freeArray(int *array);

float meanVector(Vector *vector);

int minVector(Vector *vector);

int maxVector(Vector *vector);

void printVector(Vector *vector);
