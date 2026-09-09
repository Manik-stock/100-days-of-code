/*
Write a program to find the 1’s complement of a binary number and print it.
*/

#include <stdio.h>

int main()
{
    char b[100];
    int i=0;
    scanf("%99s",b);
    while (b[i])
    {
        if (b[i]=='0')b[i]='1';
        else if (b[i]=='1')b[i]='0';
        i++;
    }
    printf("%s\n",b);
    return 0;
}
