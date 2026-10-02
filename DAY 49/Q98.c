/*
Print initials of a name with the surname displayed in full.
*/

#include <stdio.h>

int main()
{
    char s[200];
    int i=0,last=0;
    fgets(s,200,stdin);
    while (s[i]&&s[i]!='\n')
    {
        if (s[i]==' ')last=i+1;
        i++;
    }
    if (last==0)
    {
        printf("%s",s);
        return 0;
    }
    printf("%c.",s[0]);
    for (i=1;i<last;i++)if (s[i-1]==' '&&i<last-1)printf("%c.",s[i]);
    printf(" ");
    for (i=last;s[i]&&s[i]!='\n';i++)printf("%c",s[i]);
    printf("\n");
    return 0;
}
