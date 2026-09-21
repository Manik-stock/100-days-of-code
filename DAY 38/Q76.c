/*
Check if a matrix is symmetric.
*/

#include <stdio.h>

int main()
{
    int a[20][20],n,m,i,j,ok=1;
    scanf("%d %d",&n,&m);
    for (i=0;i<n;i++)for (j=0;j<m;j++)scanf("%d",&a[i][j]);
    if (n!=m)ok=0;
    else for (i=0;i<n;i++)for (j=0;j<n;j++)if (a[i][j]!=a[j][i])ok=0;
    printf(ok?"True\n":"False\n");
    return 0;
}
