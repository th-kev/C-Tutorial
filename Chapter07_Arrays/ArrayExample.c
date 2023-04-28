#include <stdint.h>
#include <stdio.h>

int main()
{
    float vector1[3] = {0.0f, 0.0f, 0.0f};
    float vector2[3] = {0.0f, 0.0f, 0.0f};

    printf("Enter vector1: \n");
    printf("Number1: ");
    scanf("%f", &vector1[0]);
    printf("Number2: ");
    scanf("%f", &vector1[1]);
    printf("Number3: ");
    scanf("%f", &vector1[2]);

    printf("Enter vector2: \n");
    printf("Number1: ");
    scanf("%f", &vector2[0]);
    printf("Number2: ");
    scanf("%f", &vector2[1]);
    printf("Number3: ");
    scanf("%f", &vector2[2]);

    printf("Result: {%f, %f, %f}\n", vector1[0] + vector2[0], vector1[1] + vector2[1], vector1[2] + vector2[2]);

    return 0;
}
