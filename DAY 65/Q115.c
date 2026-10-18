/*
Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
*/

#include <stdio.h>

int main()
{
    char s[200],t[200];
    int c[26]=
    {
        0
    }
    ,i=0;
    scanf("%199s %199s",s,t);
    while (s[i])
    {
        c[s[i]-'a']++;
        i++;
    }
    i=0;
    while (t[i])
    {
        c[t[i]-'a']--;
        i++;
    }
    for (i=0;i<26;i++)if (c[i])
    {
        printf("Not anagrams\n");
        return 0;
    }
    printf("Anagrams\n");
    return 0;
}
