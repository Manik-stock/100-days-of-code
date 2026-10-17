/*
Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
*/

#include <stdio.h>

int main()
{
    char s[300];
    int i,j,n=0,best=0,len,ok,k;
    fgets(s,300,stdin);
    while (s[n]&&s[n]!='\n')n++;
    for (i=0;i<n;i++)
    {
        len=0;
        for (j=i;j<n;j++)
        {
            ok=1;
            for (k=i;k<j;k++)if (s[k]==s[j])ok=0;
            if (!ok)break;
            len++;
        }
        if (len>best)best=len;
    }
    printf("%d\n",best);
    return 0;
}
