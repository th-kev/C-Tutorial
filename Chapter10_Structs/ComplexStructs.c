#include <stdio.h>

typedef enum FriendshipOrigin
{
    FIRENDSHIP_ORIGIN_SCHOOL,
    FIRENDSHIP_ORIGIN_FAMILY,
    FIRENDSHIP_ORIGIN_OTHER,
} FriendshipOrigin;

typedef struct Date
{
    unsigned int year;
    unsigned int month;
    unsigned int day;
} Date_t;

typedef struct Friend
{
    char name[50];
    char prename[50];
    Date_t birthday;
    FriendshipOrigin origin;
} Friend_t;

void print_date(Date_t *date)
{
    printf("Year: %u.%u.%u\n", date->day, date->month, date->year);
}

void print_friend(Friend_t *friend)
{
    printf("%s %s\n", friend->prename, friend->name);
    print_date(&friend->birthday);
    switch (friend->origin)
    {
    case FIRENDSHIP_ORIGIN_SCHOOL:
         printf("I know from school\n");
        break;

    case FIRENDSHIP_ORIGIN_FAMILY:
         printf("I know from my family\n");
        break;

    case FIRENDSHIP_ORIGIN_OTHER:
         printf("I know from somewere else\n");
        break;

    }


}

int main()
{
    Friend_t jan = {.name = "Schaffrankek", .prename = "Jan", .birthday = {.year = 1994u, .month = 2u, .day = 24u}, .origin = FIRENDSHIP_ORIGIN_FAMILY};
    Friend_t peter = {.name = "Lustig", .prename = "Peter", .birthday = {.year = 1959u, .month = 8u, .day = 13u}, .origin = FIRENDSHIP_ORIGIN_OTHER};
    Friend_t hans = {.name = "Maier", .prename = "Hans", .birthday = {.year = 1970u, .month = 12u, .day = 31u}, .origin = FIRENDSHIP_ORIGIN_SCHOOL};
    Friend_t friend_book[] = {jan, peter, hans};

    print_friend(&friend_book[0]);
    print_friend(&friend_book[1]);
    print_friend(&friend_book[2]);


    return 0;
}
