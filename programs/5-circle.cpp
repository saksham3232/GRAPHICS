// Write a c program to draw a cir

#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    int x, y, radius = 80;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    x = getmaxx() / 2;
    y = getmaxy() / 2;

    circle(x, y, radius);
    getch();

    closegraph();

    return 0;
}