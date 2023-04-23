#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t age_in_years;
    uint16_t age_in_days;
    uint32_t age_in_hours;
    uint64_t age_in_minutes;
    uint64_t age_in_seconds;

    printf("Please enter your age in years: ");
    scanf("%hhu", &age_in_years);
    age_in_days = age_in_years * 365;
    age_in_hours = age_in_days * 24;
    age_in_minutes = age_in_hours * 60;
    age_in_seconds = age_in_minutes * 60;
    printf("You are living since %hu days\n", age_in_days);
    printf("You are living since %u hours\n", age_in_hours);
    printf("You are living since %llu minutes\n", age_in_minutes);
    printf("You are living since %llu seconds\n", age_in_seconds);


    return 0;
}
