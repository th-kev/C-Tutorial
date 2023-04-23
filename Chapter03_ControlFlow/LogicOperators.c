#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool has_money_on_the_bank = true;
    bool has_cash_money = false;
    bool has_depts = true;

    // und: && (ampersand)
    // oder: || (pipes)

    bool has_money = has_cash_money || has_money_on_the_bank;
    if (has_money)
    {
        printf("We still have some money!\n");
    }

    bool has_depts_and_money = has_depts && has_money;
    if (has_depts_and_money)
    {
        printf("We could pay off the depts!\n");
    }



    return 0;
}
