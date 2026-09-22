/*
Check if the elements on the diagonal of a matrix are distinct.
*/

#include <stdio.h>

int main()
{
    int a[20][20],n,m,i,j,ok=1;
    scanf("%d %d",&n,&m);
    for (i=0;i<n;i++)for (j=0;j<m;j++)scanf("%d",&a[i][j]);
    if (n!=m)ok=0;
    for (i=0;i<n;i++)for (j=i+1;j<n;j++)if (a[i][i]==a[j][j])ok=0;
    printf(ok?"True\n":"False\n");
    return 0;
}
