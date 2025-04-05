#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    int i, x0, x1, y0, y1;
    float x, y, dx, dy, steps;

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    setbkcolor(WHITE);
    cleardevice();

    x0 = 100;
    y0 = 200;

    x1 = 500;
    y1 = 300;

    dx = (float)(x1 - x0);
    dy = (float)(y1 - y0);

    if (dx >= dy)
    {
        steps = dx;
    }
    else
    {
        steps = dy;
    }

    dx = dx / steps;
    dy = dy / steps;

    x = x0;
    y = y0;

    i = 1;

    while (i <= steps)
    {
        putpixel(x, y, RED);
        x = x + dx;
        y = y + dy;
        i = i + 1;
    }
    getch();
    closegraph();
    return 0;
}