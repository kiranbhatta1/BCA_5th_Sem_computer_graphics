#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void drawCircle(int xc, int yc, int x, int y)
{
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc - x, WHITE);
}

void main()
{
    int gd = DETECT, gm;
    int xc, yc, r;
    int x = 0, y;
    int p;

    initgraph(&gd, &gm, "..\\bgi");

    printf("Midpoint Circle Drawing Algorithm\n");
    printf("This Program is coded by Kiran Bhatta\n");

    printf("Enter center coordinates (xc yc): ");
    scanf("%d %d", &xc, &yc);

    printf("Enter radius: ");
    scanf("%d", &r);

    y = r;
    p = 1 - r;

    while (x <= y)
    {
        drawCircle(xc, yc, x, y);

        if (p < 0)
            p = p + 2 * x + 3;
        else
        {
            p = p + 2 * (x - y) + 5;
            y--;
        }

        x++;
        delay(50);
    }

    getch();
    closegraph();
}
