#include <stdio.h>

int divisibleBy2(int number);
int divisibleBy3(int number);
void printDivisibilty(int number);
int getNumberFromUser();

int main()
{
    int n = getNumberFromUser();
    printDivisibilty(n);

    return 0;
}

int divisibleBy2(int number)
{
    return number % 2 == 0;
}

int divisibleBy3(int number)
{
    return number % 3 == 0;
}

void printDivisibilty(int number)
{
    if (divisibleBy2(number))
    {
        printf("%d divisible by 2!\n", number);
        return; // nach dieser Zeile wird die Funktion verlassen
    }
    if (divisibleBy3(number))
    {
        printf("%d divisible by 3!\n", number);
        return;
    }
    printf("%d none!\n", number);
}

int getNumberFromUser()
{
    int number = 0;

    printf("Please enter an integer number: ");
    scanf("%d", &number);

    return number;
}
