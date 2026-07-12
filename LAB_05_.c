
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void boundaryFill(int x, int y, int fillColor, int boundaryColor)
{
    int currentColor;

    currentColor = getpixel(x, y);

    if (currentColor != boundaryColor && currentColor != fillColor)
    {
        putpixel(x, y, fillColor);

        boundaryFill(x + 1, y, fillColor, boundaryColor);
        boundaryFill(x - 1, y, fillColor, boundaryColor);
        boundaryFill(x, y + 1, fillColor, boundaryColor);
        boundaryFill(x, y - 1, fillColor, boundaryColor);
    }
}

void main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "..\\bgi");

    printf("Boundary Fill Algorithm\n");
    printf("This Program is coded by Kiran Bhatta\n");

    /* Draw a Rectangle */
    rectangle(150, 100, 350, 250);

    /* Fill the Rectangle */
    boundaryFill(200, 150, RED, WHITE);

    getch();
    closegraph();
}
