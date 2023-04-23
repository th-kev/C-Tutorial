#include <stdio.h>

int main()
{

    float my_balance = 1750.30F;
    printf("My balance: %f\n", my_balance);

    float money_frume_udemy_course = 5.0F;
    float doner_kebab_price = 5.0F;

    my_balance = my_balance + money_frume_udemy_course;
    printf("My balance: %f\n", my_balance);

    my_balance = my_balance - doner_kebab_price;
    printf("My balance: %f\n", my_balance);

    return 0;
}
