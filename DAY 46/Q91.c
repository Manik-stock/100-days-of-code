/*
Remove all vowels from a string.
*/

#include <stdio.h>

int main()
{
    char s[200],out[200],c;
    int i=0,j=0;
    fgets(s,200,stdin);
    while ((c=s[i++]))
    {
        char x=c;
        if (x>='A'&&x<='Z')x+=32;
        if (!(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'))out[j++]=c;
    }
    out[j]='\0';
    printf("%s",out);
    return 0;
}
