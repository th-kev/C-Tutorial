#include <stdio.h>

int main()
{
    int age_jan = 28;
    int mod = 2;

    if ((age_jan % 2) == 0)
    {
        printf("jan's age is div. by %d\n", mod);
    }
    else
    {
        printf("jan's age is not div. by %d\n", mod);
    }

    return 0;
}
