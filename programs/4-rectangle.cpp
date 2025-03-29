// Write a c progam to draw a rectangle using graphical function

#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    rectangle(150, 50, 400, 150);
    getch();

    closegraph();
    return 0;
}