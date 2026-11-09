/*
Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
*/

#include <stdio.h>

enum Role
{
    ADMIN,USER,GUEST
}
;
int main()
{
    int r;
    scanf("%d",&r);
    if (r==ADMIN)printf("Welcome Admin!\n");
    else if (r==USER)printf("Welcome User!\n");
    else if (r==GUEST)printf("Welcome Guest!\n");
    else printf("Invalid role\n");
    return 0;
}
