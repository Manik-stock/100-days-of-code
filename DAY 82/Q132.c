/*
Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
*/

#include <stdio.h>

enum Light
{
    RED,YELLOW,GREEN
}
;
int main()
{
    int x;
    scanf("%d",&x);
    switch (x)
    {
        case RED:printf("Stop\n");
        break;
        case YELLOW:printf("Wait\n");
        break;
        case GREEN:printf("Go\n");
        break;
        default:printf("Invalid\n");
    }
    return 0;
}
