#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int strlength(char *str)
{
    if (NULL == str)
    {
        return 0;
    }

    unsigned int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char name[] = "Kevin";
    unsigned int count = strlength(name);
    printf("%u\n", count);
    return 0;
}
