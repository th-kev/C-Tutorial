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

unsigned int strcompare(char *str1, char *str2)
{
    if (NULL == str1 || NULL == str2)
    {
        return 0;
    }

    unsigned int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main()
{
    char name1[] = "Kevin";
    char name2[] = "Jan";
    unsigned int count = strlength(name1);
    printf("%u\n", count);
    unsigned int compare = strcompare(name1, name2);
    printf("%u\n", compare);
    return 0;
}
