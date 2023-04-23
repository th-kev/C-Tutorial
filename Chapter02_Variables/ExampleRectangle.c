#include <stdio.h>

int main()
{
    // Rectangle Example
    // 1.) Read the values for a, b from the user
    // 2.) Compute the perimeter and area of the rectangle
    // 3.) Print the computed values to the console

    float a;
    float b;

    printf("Enter value a: ");
    scanf("%f", &a);
    printf("Enter value b: ");
    scanf("%f", &b);

    float perimeter = 2.0F * a + 2.0F * b;
    printf("Perimter: %f\n", perimeter);

    float area = a * b;
    printf("Area: %f\n", area);


    return 0;
}
