/*
Count characters in a string without using built-in length functions.
*/

#include <stdio.h>

int main()
{
    char s[200];
    int i=0;
    fgets(s,200,stdin);
    while (s[i]!='\0'&&s[i]!='\n')i++;
    printf("%d\n",i);
    return 0;
}
