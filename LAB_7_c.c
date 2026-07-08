#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    float sx, sy;

    initgraph(&gd, &gm, "..\\bgi");

    printf("2D Scaling\n");
    printf("This Program is coded by Kiran Bhatta\n");

    printf("Enter x1 y1 x2 y2: ");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    printf("Enter scaling factors (sx sy): ");
    scanf("%f%f", &sx, &sy);

    rectangle(x1, y1, x2, y2);

    rectangle(x1 * sx, y1 * sy, x2 * sx, y2 * sy);

    getch();
    closegraph();
}
