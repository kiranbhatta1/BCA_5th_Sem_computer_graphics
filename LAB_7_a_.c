#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, tx, ty;

    initgraph(&gd, &gm, "..\\bgi");

    printf("2D Translation\n");
    printf("This Program is coded by Kiran Bhatta\n");

    printf("Enter x1 y1 x2 y2: ");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    printf("Enter translation factor (tx ty): ");
    scanf("%d%d", &tx, &ty);

    rectangle(x1, y1, x2, y2);

    rectangle(x1 + tx, y1 + ty, x2 + tx, y2 + ty);

    getch();
    closegraph();
}
