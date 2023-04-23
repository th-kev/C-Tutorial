#include <stdio.h>

int main()
{
    int age1 = 28;
    int age2 = 56;

    // 1.
    int older_age1;
    if (age1 > age2)
        older_age1 = age1;
    else
        older_age1 = age2;

    // 2. Ternary Operator
    //               BOOL EXPR   ? True : False
    int older_age2 = age1 > age2 ? age1 : age2;     // Immer nur wenn wir ein if und ein else haben

    return 0;
}
