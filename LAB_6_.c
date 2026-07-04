#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void floodFill(int x, int y, int oldColor, int newColor)
{
    if (getpixel(x, y) == oldColor)
    {
        putpixel(x, y, newColor);

        floodFill(x + 1, y, oldColor, newColor);
        floodFill(x - 1, y, oldColor, newColor);
        floodFill(x, y + 1, oldColor, newColor);
        floodFill(x, y - 1, oldColor, newColor);
    }
}

void main()
{
    int gd = DETECT, gm;
    int oldColor;

    initgraph(&gd, &gm, "..\\bgi");

    printf("Flood Fill Algorithm\n");
    printf("This Program is coded by Kiran Bhatta\n");

    /* Draw a Circle */
    circle(250, 200, 100);

    /* Get the old color inside the circle */
    oldColor = getpixel(250, 200);

    /* Fill the Circle */
    floodFill(250, 200, oldColor, RED);

    getch();
    closegraph();
}
