/*
Check if two strings are anagrams of each other.
*/

#include <stdio.h>

int main()
{
    char a[200],b[200];
    int c[26]=
    {
        0
    }
    ,i=0;
    scanf("%199s %199s",a,b);
    while (a[i])
    {
        c[a[i]-'a']++;
        i++;
    }
    i=0;
    while (b[i])
    {
        c[b[i]-'a']--;
        i++;
    }
    for (i=0;i<26;i++)if (c[i]!=0)
    {
        printf("Not anagrams\n");
        return 0;
    }
    printf("Anagrams\n");
    return 0;
}
