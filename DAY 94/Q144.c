/*
Write a function that accepts a structure as parameter and prints its members.
*/

#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
}
;
void printStudent(struct Student s)
{
    printf("Name: %s | Roll: %d | Marks: %.2f\n",s.name,s.roll,s.marks);
}
int main()
{
    struct Student s;
    scanf("%49s %d %f",s.name,&s.roll,&s.marks);
    printStudent(s);
    return 0;
}
