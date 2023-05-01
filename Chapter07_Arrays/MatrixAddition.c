#include <stdint.h>
#include <stdio.h>

int main()
{

    float matrix1[2][3] = {0.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    float matrix2[2][3] = {10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f};
    float result[2][3];
    for (uint16_t i = 0; i < 2; i++)
    {
        for (uint16_t j = 0; j < 3; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }

    }
    for (uint16_t i = 0; i < 2; i++)
    {
        for (uint16_t j = 0; j < 3; j++)
        {
            printf("%f ", result[i][j]);
        }

    }


    return 0;
}
