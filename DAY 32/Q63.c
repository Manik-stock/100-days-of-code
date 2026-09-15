/*
Merge two arrays.
*/

#include <stdio.h>

int main()
{
    int a[200],n,m,i;
    scanf("%d",&n);
    for (i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&m);
    for (i=n;i<n+m;i++)scanf("%d",&a[i]);
    for (i=0;i<n+m;i++)printf("%d ",a[i]);
    printf("\n");
    return 0;
}
