#include <stdio.h>

typedef struct Friend
{
    char name[50];
    char prename[50];
    unsigned int year;
    unsigned int month;
    unsigned int day;
} Friend_t;

// typedef struct Friend Friend_t;



void print_friend(Friend_t *friend)
{
    printf("%s %s\n", friend->prename, friend->name);
    printf("Year: %u.%u.%u\n", friend->day, friend->month, friend->year);

}

int main()
{
    Friend_t jan = {.name = "Schaffrankek", .prename = "Jan", .year = 1994u, .month = 2u, .day = 24u};
    Friend_t peter = {.name = "Lustig", .prename = "Peter", .year = 1959u, .month = 8u, .day = 13u};
    Friend_t hans = {.name = "Maier", .prename = "Hans", .year = 1970u, .month = 12u, .day = 31u};

    Friend_t friend_book[] = {jan, peter, hans};

    print_friend(&friend_book[0]);
    print_friend(&friend_book[1]);
    print_friend(&friend_book[2]);


    return 0;
}
