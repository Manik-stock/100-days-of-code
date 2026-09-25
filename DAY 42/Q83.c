/*
Count vowels and consonants in a string.
*/

#include <stdio.h>

int main()
{
    char s[200],c;
    int i=0,v=0,co=0;
    fgets(s,200,stdin);
    while ((c=s[i++])!='\0')
    {
        if (c>='A'&&c<='Z')c+=32;
        if (c>='a'&&c<='z')
        {
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')v++;
            else co++;
        }
    }
    printf("Vowels=%d, Consonants=%d\n",v,co);
    return 0;
}
