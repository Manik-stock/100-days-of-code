/*
Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
*/

#include <stdio.h>

enum Choice
{
    ADD=1,SUBTRACT,MULTIPLY
}
;
int main()
{
    int ch,a,b;
    scanf("%d %d %d",&ch,&a,&b);
    switch (ch)
    {
        case ADD:printf("%d\n",a+b);
        break;
        case SUBTRACT:printf("%d\n",a-b);
        break;
        case MULTIPLY:printf("%d\n",a*b);
        break;
        default:printf("Invalid\n");
    }
    return 0;
}
