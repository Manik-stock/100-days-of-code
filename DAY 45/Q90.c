/*
Toggle case of each character in a string.
*/

#include <stdio.h>

int main()
{
    char s[200];
    int i=0;
    fgets(s,200,stdin);
    while (s[i])
    {
        if (s[i]>='a'&&s[i]<='z')s[i]-=32;
        else if (s[i]>='A'&&s[i]<='Z')s[i]+=32;
        i++;
    }
    printf("%s",s);
    return 0;
}
