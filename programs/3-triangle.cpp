// Write a c progam to draw a triangle using graphical function

#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    line(300, 100, 200, 200);
    line(300, 100, 400, 200);
    line(200, 200, 400, 200);
    getch();

    closegraph();
    return 0;
}