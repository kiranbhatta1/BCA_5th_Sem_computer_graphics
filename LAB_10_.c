#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "..\\bgi");

    printf("Sutherland Hodgeman Polygon Clipping Algorithm\n");
    printf("This Program is coded by Kiran Bhatta\n");

    rectangle(150,100,450,300);

    setcolor(WHITE);
    line(100,150,250,50);
    line(250,50,500,200);
    line(500,200,300,350);
    line(300,350,100,150);

    setcolor(RED);
    line(150,117,250,100);
    line(250,100,450,200);
    line(450,200,350,300);
    line(350,300,150,200);
    line(150,200,150,117);

    getch();
    closegraph();
}
