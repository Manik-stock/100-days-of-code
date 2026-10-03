/*
Change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/

#include <stdio.h>

int main()
{
    int d,m,y;
    scanf("%d/%d/%d",&d,&m,&y);
    if (m==4)printf("%02d-Apr-%04d\n",d,y);
    else printf("Given format expects month 04\n");
    return 0;
}
