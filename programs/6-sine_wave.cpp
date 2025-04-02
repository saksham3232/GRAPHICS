// Write a C program for sine wave using graphical function

#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <dos.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    int angle = 0;
    double x, y;

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Draw the x-axis
    line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);

    // Draw the sine wave
    for (x = 0; x < getmaxx(); x = x + 3)
    {
        y = 50 * sin(angle * 3.141 / 180);
        y = getmaxy() / 2 - y;
        putpixel(x, y, 15);
        delay(100);

        angle = angle + 5;
    }

    getch();
    closegraph();

    return 0;
}
