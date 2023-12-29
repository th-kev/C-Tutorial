#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "Record.h"


value_pair_t *create_pairs(const size_t num_pairs)
{
    value_pair_t *values = (value_pair_t*)malloc(num_pairs * sizeof(value_pair_t));
    return values;
}

void free_pairs(value_pair_t *pairs, const size_t num_pairs)
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
