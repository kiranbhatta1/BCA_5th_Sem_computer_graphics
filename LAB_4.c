#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void plotEllipse(int xc, int yc, int x, int y)
{
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
}

void main()
{
    int gd = DETECT, gm;
    int xc, yc, rx, ry;
    float dx, dy, d1, d2;
    int x = 0, y;

    initgraph(&gd, &gm, "..\\bgi");

    printf("Midpoint Ellipse Drawing Algorithm\n");
    printf("This Program is coded by Kiran Bhatta\n");

    printf("Enter center coordinates (xc yc): ");
    scanf("%d %d", &xc, &yc);

    printf("Enter x-radius (rx): ");
    scanf("%d", &rx);

    printf("Enter y-radius (ry): ");
    scanf("%d", &ry);

    y = ry;

    d1 = (ry * ry) - (rx * rx * ry) + (0.25 * rx * rx);
    dx = 2 * ry * ry * x;
    dy = 2 * rx * rx * y;

    /* Region 1 */
    while (dx < dy)
    {
        plotEllipse(xc, yc, x, y);

        if (d1 < 0)
        {
            x++;
            dx = dx + (2 * ry * ry);
            d1 = d1 + dx + (ry * ry);
        }
        else
        {
            x++;
            y--;
            dx = dx + (2 * ry * ry);
            dy = dy - (2 * rx * rx);
            d1 = d1 + dx - dy + (ry * ry);
        }
        delay(30);
    }

    /* Region 2 */
    d2 = ((ry * ry) * (x + 0.5) * (x + 0.5))
       + ((rx * rx) * (y - 1) * (y - 1))
       - (rx * rx * ry * ry);

    while (y >= 0)
    {
        plotEllipse(xc, yc, x, y);

        if (d2 > 0)
        {
            y--;
            dy = dy - (2 * rx * rx);
            d2 = d2 + (rx * rx) - dy;
        }
        else
        {
            y--;
            x++;
            dx = dx + (2 * ry * ry);
            dy = dy - (2 * rx * rx);
            d2 = d2 + dx - dy + (rx * rx);
        }
        delay(30);
    }

    getch();
    closegraph();
}
