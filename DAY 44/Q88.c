/*
Replace spaces with hyphens in a string.
*/

#include <stdio.h>

int main()
{
    char s[200];
    int i=0;
    fgets(s,200,stdin);
    while (s[i])
    {
        if (s[i]==' ')s[i]='-';
        i++;
    }
    printf("%s",s);
    return 0;
}
