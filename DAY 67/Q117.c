/*
Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
*/

#include <stdio.h>

int main()
{
    int a[100],b[100],m,n,i=0,j=0;
    scanf("%d",&m);
    for (int x=0;x<m;x++)scanf("%d",&a[x]);
    scanf("%d",&n);
    for (int x=0;x<n;x++)scanf("%d",&b[x]);
    while (i<m&&j<n)
    {
        if (a[i]<b[j])printf("%d ",a[i++]);
        else printf("%d ",b[j++]);
    }
while (i<m)printf("%d ",a[i++]);
    while (j<n)printf("%d ",b[j++]);
    printf("\n");
    return 0;
}
