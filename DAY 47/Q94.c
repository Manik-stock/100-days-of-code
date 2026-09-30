/*
Find the longest word in a sentence.
*/

#include <stdio.h>

int main()
{
    char s[300];
    int i=0,start=0,len=0,bestStart=0,bestLen=0;
    fgets(s,300,stdin);
    while (1)
    {
        if (s[i]==' ')
        {
            if (len>bestLen)
            {
                bestLen=len;
                bestStart=start;
            }
            len=0;
            start=i+1;
        }
else if (s[i]=='\n'||s[i]=='\0')
        {
            if (len>bestLen)
            {
                bestLen=len;
                bestStart=start;
            }
            break;
        }
else len++;
        i++;
    }
    for (i=0;i<bestLen;i++)printf("%c",s[bestStart+i]);
    printf("\n");
    return 0;
}
