#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    float sh;

    initgraph(&gd, &gm, "..\\bgi");

    printf("2D Shearing\n");
    printf("This Program is coded by Kiran Bhatta\n");

    printf("Enter x1 y1 x2 y2: ");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    printf("Enter shearing factor: ");
    scanf("%f", &sh);

    rectangle(x1, y1, x2, y2);

    line(x1 + sh * y1, y1, x2 + sh * y1, y1);
    line(x2 + sh * y1, y1, x2 + sh * y2, y2);
    line(x2 + sh * y2, y2, x1 + sh * y2, y2);
    line(x1 + sh * y2, y2, x1 + sh * y1, y1);

    getch();
    closegraph();
}
