/*
Find the first repeating lowercase alphabet in a string.
*/

#include <stdio.h>

int main()
{
    char s[200];
    int seen[26]=
    {
        0
    }
    ,i=0;
    fgets(s,200,stdin);
    while (s[i])
    {
        if (s[i]>='a'&&s[i]<='z')
        {
            int k=s[i]-'a';
            if (seen[k])
            {
                printf("%c\n",s[i]);
                return 0;
            }
            seen[k]=1;
        }
        i++;
    }
    printf("No repeating alphabet\n");
    return 0;
}
