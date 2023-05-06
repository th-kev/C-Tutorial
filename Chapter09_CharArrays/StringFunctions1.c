#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **createFriendBook(unsigned int number_friends)
{
    char **friends = (char **)malloc(number_friends * sizeof(char *));

    if (friends == NULL)
    {
        return NULL;
    }

    for (unsigned int i = 0; i < number_friends; i++)
    {
        friends[i] = (char *)malloc(20*sizeof(char));
    }

    return friends;
}

char **freeFriendBook(char **friends, unsigned int num_friends)
{
    for (unsigned int i = 0; i < num_friends; i++)
    {
        free(friends[i]);
    }

    free(friends);
    return NULL;
}

int main()
{
    unsigned int number_friends = 3;
    char **friends = createFriendBook(number_friends);

    strncpy(friends[0], "Kevin Theiss", 20);
    strncpy(friends[1], "Alisa Kalinina", 20);
    strncpy(friends[2], "Fabiano Cimiro", 20);

    for (unsigned int i = 0; i < number_friends; i++)
    {
        printf("%s\n", friends[i]);
    }

    long long unsigned int length0 = strlen(friends[0]);
    long long unsigned int length1 = strlen(friends[1]);
    long long unsigned int length2 = strlen(friends[2]);

    printf("%llu\n", length0);
    printf("%llu\n", length1);
    printf("%llu\n", length2);

    int compare0 = strncmp(friends[0], friends[1], 20);
    int compare1 = strncmp(friends[0], friends[2], 20);
    int compare2 = strncmp(friends[1], friends[2], 20);

    printf("%d\n", compare0);
    printf("%d\n", compare1);
    printf("%d\n", compare2);

    friends = freeFriendBook(friends, number_friends);

    return 0;
}
