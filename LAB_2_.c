#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int x1, y1, x2, y2;
    int dx, dy, p, x, y;
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "..\\bgi");

    printf("Bresenham's Line Drawing Algorithm\n");
    printf("This Program is coded by Kiran Bhatta\n");

    printf("Enter x1 and y1: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter x2 and y2: ");
    scanf("%d %d", &x2, &y2);

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    p = 2 * dy - dx;

    x = x1;
    y = y1;

    while (x <= x2)
    {
        putpixel(x, y, WHITE);

        if (p < 0)
            p = p + 2 * dy;
        else
        {
            y = y + 1;
            p = p + 2 * dy - 2 * dx;
        }

        x = x + 1;
        delay(100);
    }

    getch();
    closegraph();
}
