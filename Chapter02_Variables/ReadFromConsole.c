#include <stdio.h>

int main()
{
    float float_value;
    double double_value;
    int int_value;
    unsigned int uint_value;

    printf("Pleas enter a float value: ");
    scanf("%f", &float_value);
    printf("float value: %f\n", float_value);

    printf("Pleas enter a double value: ");
    scanf("%lf", &double_value);
    printf("double value: %f\n", double_value);

    printf("Pleas enter a int value: ");
    scanf("%d", &int_value);
    printf("float value: %d\n", int_value);

    printf("Pleas enter a uint value: ");
    scanf("%u", &uint_value);
    printf("uint value: %u\n", uint_value);



    return 0;
}
