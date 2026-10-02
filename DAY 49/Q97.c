/*
Print the initials of a name.
*/

#include <stdio.h>

int main()
{
    char s[200];
    int i=0;
    fgets(s,200,stdin);
    if (s[0]!=' ')printf("%c.",s[0]);
    while (s[i])
    {
        if (s[i]==' '&&s[i+1]!=' '&&s[i+1]!='\n'&&s[i+1]!='\0')printf("%c.",s[i+1]);
        i++;
    }
    printf("\n");
    return 0;
}
