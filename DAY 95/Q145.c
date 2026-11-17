/*
Return a structure containing top student's details from a function.
*/

#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
}
;
struct Student topStudent(struct Student s[],int n)
{
    int i,top=0;
    for (i=1;i<n;i++)if (s[i].marks>s[top].marks)top=i;
    return s[top];
}
int main()
{
    struct Student s[100],top;
    int n,i;
    scanf("%d",&n);
    for (i=0;i<n;i++)scanf("%49s %d %f",s[i].name,&s[i].roll,&s[i].marks);
    top=topStudent(s,n);
    printf("Top Student: %s | Roll: %d | Marks: %.2f\n",top.name,top.roll,top.marks);
    return 0;
}
