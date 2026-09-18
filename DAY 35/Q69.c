/*
Find the second largest element in an array.
*/

#include <stdio.h>

int main()
{
    int a[100],n,i,j,t;
    scanf("%d",&n);
    for (i=0;i<n;i++)scanf("%d",&a[i]);
    for (i=0;i<n-1;i++)for (j=i+1;j<n;j++)if (a[j]>a[i])
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    for (i=1;i<n&&a[i]==a[0];i++);
    if (i<n)printf("%d\n",a[i]);
    else printf("No second largest\n");
    return 0;
}
