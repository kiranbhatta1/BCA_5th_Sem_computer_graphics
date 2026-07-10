#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    float xw, yw, xv, yv;
    float wxmin, wymin, wxmax, wymax;
    float vxmin, vymin, vxmax, vymax;

    initgraph(&gd, &gm, "..\\bgi");

    printf("Window Viewport Mapping\n");
    printf("This Program is coded by Kiran Bhatta\n");

    printf("Enter Window (xmin ymin xmax ymax): ");
    scanf("%f%f%f%f", &wxmin, &wymin, &wxmax, &wymax);

    printf("Enter Viewport (xmin ymin xmax ymax): ");
    scanf("%f%f%f%f", &vxmin, &vymin, &vxmax, &vymax);

    printf("Enter Point in Window: ");
    scanf("%f%f", &xw, &yw);

    xv = vxmin + ((xw - wxmin) * (vxmax - vxmin)) / (wxmax - wxmin);
    yv = vymin + ((yw - wymin) * (vymax - vymin)) / (wymax - wymin);

    rectangle(wxmin, wymin, wxmax, wymax);
    rectangle(vxmin, vymin, vxmax, vymax);

    putpixel(xw, yw, RED);
    putpixel(xv, yv, GREEN);

    getch();
    closegraph();
}
