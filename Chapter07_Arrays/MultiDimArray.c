#include <stdio.h>

int main()
{
    // 1D Array: Vector
    // 2D Array: MAtrix

    double M[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 3; j++)
        {
            M[i][j] = i * j;
        }

    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 3; j++)
        {
            printf("M[%d][%d] = %lf\n", i, j, M[i][j]);
        }

    }
    
    return 0;
}
