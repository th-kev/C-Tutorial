#include <stdio.h>

int main()
{
    int height = 5;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            printf("1");
        }
        printf("\n");
    }

    for (int i = height; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("1");
        }
        printf("\n");
    }

    return 0;
}
