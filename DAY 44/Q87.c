/*
Count spaces, digits, and special characters in a string.
*/

#include <stdio.h>

int main()
{
    char s[200],c;
    int i=0,sp=0,d=0,x=0;
    fgets(s,200,stdin);
    while ((c=s[i++])&&c!='\n')
    {
        if (c==' ')sp++;
        else if (c>='0'&&c<='9')d++;
        else if (!((c>='A'&&c<='Z')||(c>='a'&&c<='z')))x++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n",sp,d,x);
    return 0;
}
