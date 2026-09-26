/*
Check if a string is a palindrome.
*/

#include <stdio.h>

int main()
{
    char s[200];
    int i=0,j,ok=1;
    scanf("%199s",s);
    while (s[i])i++;
    j=i-1;
    for (i=0;i<j;i++,j--)if (s[i]!=s[j])ok=0;
    printf(ok?"Palindrome\n":"Not palindrome\n");
    return 0;
}
