#include <stdio.h>
#include <stdint.h>

uint64_t factorial(uint8_t n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);

}

int main()
{
    uint8_t n = 5;
    uint64_t n_faculuty = factorial(n);

    printf("%u! = %llu\n", n, n_faculuty);

    return 0;
}
