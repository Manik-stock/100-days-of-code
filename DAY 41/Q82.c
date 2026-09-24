/*
Print each character of a string on a new line.
*/

#include <stdio.h>

int main()
{
    char s[200];
    int i=0;
    fgets(s,200,stdin);
    while (s[i]!='\0'&&s[i]!='\n')
    {
        printf("%c\n",s[i]);
        i++;
    }
    return 0;
}
