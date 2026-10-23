/*
Write a program to take a string input. Change it to sentence case.
*/

#include <stdio.h>

int main()
{
    char s[300];
    int i=0,newSentence=1;
    fgets(s,300,stdin);
    while (s[i])
    {
        if (s[i]>='A'&&s[i]<='Z'&&!newSentence)s[i]+=32;
        if (s[i]>='a'&&s[i]<='z'&&newSentence)
        {
            s[i]-=32;
            newSentence=0;
        }
        if (s[i]=='.'||s[i]=='!'||s[i]=='?')newSentence=1;
        else if (s[i]!=' ')newSentence=0;
        i++;
    }
    printf("%s",s);
    return 0;
}
