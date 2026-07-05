#include <stdio.h>

// Some people
typedef struct{
    char family_name[100];
    char last_name[100];
    int birth_year;
    int birth_month;
    int birth_date;
} Male;
typedef struct{
    char family_name[100];
    char last_name[100];
    int birth_year;
    int birth_month;
    int birth_date;
} Female;

// Family register in Japan(戸籍)
typedef struct{
    char family_name[100];
    char last_name[100];
    int birth_year;
    int birth_month;
    int birth_date;
    char sex;
} Person_in_law;

// My ally friends
typedef struct{
    char family_name[100];
    char last_name[100];
    int birth_year;
    int birth_month;
    int birth_date;
    char gender[100];
} Person_by_friends;
                
// Me
typedef struct{
    char family_name[100];
    char last_name[100];
    int birth_year;
    int birth_month;
    int birth_date;
} Person_by_me;
                
                
int main(void){
    Female yuneko_by_someone = {"???", "??????", 2004, 11, 27};
    Person_in_law yuneko_in_law = {"???", "??????", 2004, 11, 27, 'F'};
    Person_by_friends yuneko_by_ally = {"???", "??????", 2004, 11, 27, "Nonbinary"};
    Person_by_me yuneko_by_me = {"???", "??????", 2004, 11, 27};

    return 0;
}
