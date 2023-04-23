#include <stdbool.h>
#include <stdio.h>
int main()
{
    int a = 22;
    int b = 42;

    // boolean: true / false
    bool comparison = false;

    // a greater than b
    comparison = a > b;
    printf("a > b = %d\n", comparison);

    // a less than b
    comparison = a < b;
    printf("a < b = %d\n", comparison);

    // a and b are equal
    comparison = a == b;
    printf("a == b = %d\n", comparison);

    // a and b are not equal
    comparison = a != b;
    printf("a != b = %d\n", comparison);

    // a greater than or egual to b
    comparison = a >= b;
    printf("a >= b = %d\n", comparison);

    // a less than or egual to b
    comparison = a <= b;
    printf("a <= b = %d\n", comparison);
}
