#include <stdio.h>
#include <stdlib.h>

int comp(const void *value1, const void *value2)
{
    int left = *((int*)value1); // casten von void* zu int* und dereferenzieren
    int right = *((int*)value2); // casten von void* zu int* und dereferenzieren

    if (left > right)   // Vergleich der Werte
    {
        return -1;  // -1 = left > right also kein Tausch
    }
    else if (right > left) // Vergleich der Werte
    {
        return 1;  // 1 = right > left also Tausch
    }
    else
    {
        return 0;
    }
}

#define ARR_LEN 4U

int main()
{
    int data[ARR_LEN] = {-2, 3, -1, 12};
    qsort(&data, ARR_LEN, sizeof(int), comp); // qsort = quicksort, 4 = Anzahl der Elemente, sizeof(int) = Groesse der Elemente, comp = Funktion die vergleicht
    for (int i = 0; i < ARR_LEN; i++)
    {
        printf("%d\n", data[i]);
    }


    return 0;
}
