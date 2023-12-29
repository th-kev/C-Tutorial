#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "Record.h"


value_pair_t *create_pairs(const size_t num_pairs)
{
    value_pair_t *values = (value_pair_t*)malloc(num_pairs * sizeof(value_pair_t));
    return values;
}

void free_pairs(value_pair_t *pairs)
{
    if (NULL == pairs)
    {
        return;
    }
    free(pairs);

}

records_t *create_records()
{
    records_t *records = (records_t*)malloc(sizeof(records_t));
    return records;
}

void free_records(records_t *records)
{
    if (NULL == records)
    {
        /* code */
        return;
    }
    free(records->values);
    free(records);
}

void print_records(const records_t *const records, const char *const header)
{
    if (NULL == records)
    {
        /* code */
        return;
    }

    if (NULL != header)
    {
        /* code */
        printf("Records: %s\n", header);
    }

    for (size_t i = 0; i < records->num_values; i++)
    {
        /* code */
        printf("%c,%d\n", records->values[i].value_a, records->values[i].value_b);
    }

    printf("\n");
}

int comp_ascending(const void *left_v, const void *right_v)
{
    const value_pair_t *const left = (value_pair_t*)(left_v); // casten von void* zu int* und dereferenzieren
    const value_pair_t *const right = (value_pair_t*)(right_v); // casten von void* zu int* und dereferenzieren

    if (left->value_b < right->value_b)   // Vergleich der Werte
    {
        return -1;  // -1 = left > right also kein Tausch
    }
    else if (right->value_b < left->value_b) // Vergleich der Werte
    {
        return 1;  // 1 = right > left also Tausch
    }
    else
    {
        return 0;
    }
}

int comp_descending(const void *left_v, const void *right_v)
{
    const value_pair_t *const left = (value_pair_t*)(left_v); // casten von void* zu int* und dereferenzieren
    const value_pair_t *const right = (value_pair_t*)(right_v); // casten von void* zu int* und dereferenzieren

    if (left->value_b > right->value_b)   // Vergleich der Werte
    {
        return -1;  // -1 = left > right also kein Tausch
    }
    else if (right->value_b > left->value_b) // Vergleich der Werte
    {
        return 1;  // 1 = right > left also Tausch
    }
    else
    {
        return 0;
    }
}

void sort_records(const records_t *const records, const sorting_scheme_t sorting_scheme)
{
    if (NULL == records)
    {
        /* code */
        return;
    }

    switch (sorting_scheme)
    {
    case SORTING_SCHEME_ASCENDING:
    {
        qsort(records->values, records->num_values, sizeof(value_pair_t), comp_ascending);
        break;
    }
    case SORTING_SCHEME_DESCENDING:
    {
        qsort(records->values, records->num_values, sizeof(value_pair_t), comp_descending);
        break;
    }
    default:
    {
        break;
    }
    }

}

