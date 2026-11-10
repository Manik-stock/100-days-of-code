/*
Print all enum names and integer values using a loop.
*/

#include <stdio.h>

enum Light
{
    RED,YELLOW,GREEN
}
;
int main()
{
    char *name[]=
    {
        "RED","YELLOW","GREEN"
    }
    ;
    int i;
    for (i=RED;i<=GREEN;i++)printf("%s=%d\n",name[i],i);
    return 0;
}
