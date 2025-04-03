// Write a c program to draw concentric circles using graphical function

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

    setcolor(RED);
    circle(x, y, 30);

    setcolor(GREEN);
    circle(x, y, 50);

    setcolor(YELLOW);
    circle(x, y, 70);

    setcolor(BLUE);
    circle(x, y, 90);

    getch();
    closegraph();
    return 0;
}