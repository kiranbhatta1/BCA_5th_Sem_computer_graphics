#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2;

    initgraph(&gd, &gm, "..\\bgi");

    printf("2D Reflection about X-axis\n");
    printf("This Program is coded by Kiran Bhatta\n");

    printf("Enter x1 y1 x2 y2: ");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    rectangle(x1, y1, x2, y2);

    rectangle(x1, -y2 + getmaxy(), x2, -y1 + getmaxy());

    getch();
    closegraph();
}
