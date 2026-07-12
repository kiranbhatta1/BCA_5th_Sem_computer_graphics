#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    float angle, rad;
    int xr1, yr1, xr2, yr2;

    initgraph(&gd, &gm, "..\\bgi");

    printf("2D Rotation\n");
    printf("This Program is coded by Kiran Bhatta\n");

    printf("Enter x1 y1 x2 y2: ");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    printf("Enter angle in degrees: ");
    scanf("%f", &angle);

    rad = angle * 3.14159 / 180;

    rectangle(x1, y1, x2, y2);

    xr1 = x1 * cos(rad) - y1 * sin(rad);
    yr1 = x1 * sin(rad) + y1 * cos(rad);

    xr2 = x2 * cos(rad) - y2 * sin(rad);
    yr2 = x2 * sin(rad) + y2 * cos(rad);

    rectangle(xr1, yr1, xr2, yr2);

    getch();
    closegraph();
}
