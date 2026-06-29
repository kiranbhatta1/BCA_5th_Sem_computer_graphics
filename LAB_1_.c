#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>

void main()
{
    float x, y, x1, y1, x2, y2, dx, dy, step;
    int i, gd = DETECT, gm;

    initgraph(&gd, &gm, "..\\bgi");

    printf("DDA Line Drawing Algorithm\n");
    printf("This Program is coded by Kiran Bhatta\n");

    printf("Enter the value of x1 and y1: ");
    scanf("%f%f", &x1, &y1);

    printf("Enter the value of x2 and y2: ");
    scanf("%f%f", &x2, &y2);

    dx = x2 - x1;
    dy = y2 - y1;

    if (fabs(dx) >= fabs(dy))
        step = fabs(dx);
    else
        step = fabs(dy);

    dx = dx / step;
    dy = dy / step;

    x = x1;
    y = y1;

    for (i = 0; i <= step; i++)
    {
        putpixel((int)x, (int)y, WHITE);
        x = x + dx;
        y = y + dy;
        delay(100);
    }

    getch();
    closegraph();
}
