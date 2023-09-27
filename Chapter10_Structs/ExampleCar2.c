#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct Date
{
    unsigned int year;
    unsigned int month;
    unsigned int day;
}Date_t;


typedef struct LicensePlate
{
    char region_code[3];
    char alpha_code[2];
    char numeric_code[4];
    bool is_histotic;
    bool is_electro;
    Date_t tuv_until_date;
}LicensePlate_t;

typedef struct CarBase
{
    char brand[50];
    char model[50];
    uint16_t year;
    uint16_t hp;
} CarBase_t;

typedef struct CarStats
{
    CarBase_t base;
    LicensePlate_t plate;
} CarStats_t;


int main()
{
    const CarStats_t mercedes = {
        .base = {.brand = "Mercedes", .model = "E-Klasse", .year = 2022, .hp = 400},
        .plate = {  .region_code = "WN",
                    .alpha_code = "T",
                    .numeric_code = "2003",
                    .is_electro = false,
                    .is_histotic = false}
    };

    return 0;
}
