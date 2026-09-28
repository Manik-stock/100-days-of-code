/*
Count frequency of a given character in a string.
*/

#include <stdio.h>

int main()
{
    char s[200],c;
    int i=0,n=0;
    fgets(s,200,stdin);
    scanf(" %c",&c);
    while (s[i])if (s[i++]==c)n++;
    printf("%d\n",n);
    return 0;
}
