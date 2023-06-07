#include <stdio.h>
#include <stdint.h>

struct Car
{
    char brand[50];
    char model[50];
    uint16_t year;
};



int main()
{
    struct Car car1 = {.brand = "Mercedes", .model = "E-Klasse", .year = 2022u};
    struct Car car2 = {.brand = "BMW", .model = "M3", .year = 2021u};


    return 0;
}
