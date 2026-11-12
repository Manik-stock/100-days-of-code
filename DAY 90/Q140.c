/*
Define a struct with enum Gender and print person's gender.
*/

#include <stdio.h>

enum Gender
{
    MALE,FEMALE,OTHER
}
;
struct Person
{
    char name[50];
    enum Gender gender;
}
;
int main()
{
    struct Person p;
    int g;
    scanf("%49s %d",p.name,&g);
    p.gender=g;
    if (p.gender==MALE)printf("Male\n");
    else if (p.gender==FEMALE)printf("Female\n");
    else printf("Other\n");
    return 0;
}
