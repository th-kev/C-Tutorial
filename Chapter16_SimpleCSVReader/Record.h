#ifndef RECORD_H
#define RECORD_H

/* INCLUDES */

#include <stdint.h>

/* DEFINES */

#define NUM_VALUES 2

/* TYPES */
typedef struct
{
    /* data */
    char value_a;
    int32_t value_b;
} value_pair_t;

typedef struct
{
    /* data */
    value_pair_t *values;
    size_t num_values;
} records_t;


/* DECLARATIONS */

value_pair_t *create_pairs(const size_t num_pairs);

void free_pairs(value_pair_t *pairs, const size_t num_pairs);

records_t *create_records();

void free_records(records_t *records);

#endif /* RECORD_H */
