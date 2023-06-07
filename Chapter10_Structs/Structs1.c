#include <stdio.h>

struct Friend
{
    char name[50];
    char prename[50];
    unsigned int year;
    unsigned int month;
    unsigned int day;
};

int main()
{
    struct Friend jan = {.name = "Schaffranked", .prename = "Jan", .year = 1994u, .month = 2u, .day = 24u};
    struct Friend peter = {.name = "Lustig", .prename = "Peter", .year = 1959u, .month = 8u, .day = 13u};
    struct Friend hans = {.name = "Maier", .prename = "Peter", .year = 1970u, .month = 12u, .day = 31u};

    printf("Name: %s\n", jan.name);
    printf("Prename: %s\n", jan.prename);
    printf("Year: %d\n", jan.year);

    printf("Name: %s\n", peter.name);
    printf("Prename: %s\n", peter.prename);
    printf("Year: %d\n", peter.year);

    printf("Name: %s\n", hans.name);
    printf("Prename: %s\n", hans.prename);
    printf("Year: %d\n", hans.year);


    return 0;
}
