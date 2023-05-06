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

    strcpy(friends[0], "Kevin Theiss");
    strcpy(friends[1], "Alisa Kalinina");
    strcpy(friends[2], "Fabiano Cimiro");

    for (unsigned int i = 0; i < number_friends; i++)
    {
        printf("%s\n", friends[i]);
    }

    friends = freeFriendBook(friends, number_friends);

    return 0;
}
