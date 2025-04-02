// Write a c program for ellipse using graphical function

#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    int x, y;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    x = getmaxx() / 2;
    y = getmaxy() / 2;

    ellipse(x, y, 0, 360, 120, 60);

    getch();
    closegraph();

    return 0;
}