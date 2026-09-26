/*
Reverse a string.
*/

#include <stdio.h>

int main()
{
    char s[200],t;
    int i=0,j;
    fgets(s,200,stdin);
    while (s[i]&&s[i]!='\n')i++;
    j=i-1;
    for (i=0;i<j;i++,j--)
    {
        t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
    s[j+1]=s[j+1];
    printf("%s",s);
    return 0;
}
