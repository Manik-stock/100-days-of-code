/*
Print all sub-strings of a string.
*/

#include <stdio.h>

int main()
{
    char s[100];
    int n=0,i,j,k,first=1;
    scanf("%99s",s);
    while (s[n])n++;
    for (i=0;i<n;i++)for (j=i;j<n;j++)
    {
        if (!first)printf(",");
        for (k=i;k<=j;k++)printf("%c",s[k]);
        first=0;
    }
    printf("\n");
    return 0;
}
