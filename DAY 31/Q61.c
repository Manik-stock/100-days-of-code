/*
Search for an element in an array using linear search.
*/

#include <stdio.h>

int main()
{
    int a[100],n,i,x,pos=-1;
    scanf("%d",&n);
    for (i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&x);
    for (i=0;i<n;i++)if (a[i]==x)
    {
        pos=i;
        break;
    }
    if (pos==-1)printf("-1\n");
    else printf("Found at index %d\n",pos);
    return 0;
}
