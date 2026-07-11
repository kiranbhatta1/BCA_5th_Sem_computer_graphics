#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "..\\bgi");

    printf("Cohen Sutherland Line Clipping Algorithm\n");
    printf("This Program is coded by Kiran Bhatta\n");

    rectangle(150,100,450,300);

    line(50,50,500,350);

    setcolor(RED);
    line(150,125,425,275);

    getch();
    closegraph();
}
