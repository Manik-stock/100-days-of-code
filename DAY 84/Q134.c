/*
Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
*/

#include <stdio.h>

enum Status
{
    SUCCESS,FAILURE,TIMEOUT
}
;
int main()
{
    int s;
    scanf("%d",&s);
    if (s==SUCCESS)printf("Operation successful\n");
    else if (s==FAILURE)printf("Operation failed\n");
    else if (s==TIMEOUT)printf("Operation timed out\n");
    else printf("Invalid\n");
    return 0;
}
