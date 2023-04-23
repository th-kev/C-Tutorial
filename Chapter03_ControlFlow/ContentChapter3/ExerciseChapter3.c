#include <stdio.h>

int main()
{
    unsigned int number_input;

    printf("Please enter a valid unsigned integer!\n");
    scanf("%d", &number_input);

    unsigned int number_output = number_input % 3;

    if (number_output != 0)
    {
        printf("The number you entered is not div. by 3!\n");
        printf("The remainder of the operation is: %d\n", number_output);
    }
    else
    {
        printf("The number you entered is div. by 3!\n");
    }

    return 0;
}
