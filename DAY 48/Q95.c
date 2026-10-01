/*
Check if one string is a rotation of another.
*/

#include <stdio.h>

int main()
{
    char a[100],b[100];
    int n=0,m=0,shift,i,ok;
    scanf("%99s %99s",a,b);
    while (a[n])n++;
    while (b[m])m++;
    if (n!=m)
    {
        printf("Not rotation\n");
        return 0;
    }
    for (shift=0;shift<n;shift++)
    {
        ok=1;
        for (i=0;i<n;i++)if (a[(i+shift)%n]!=b[i])ok=0;
        if (ok)
        {
            printf("Rotation\n");
            return 0;
        }
    }
    printf("Not rotation\n");
    return 0;
}
