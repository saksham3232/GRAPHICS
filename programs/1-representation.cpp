// Write a C program for point representation of given coordinates
// 25,25 50,50, 75,75, 100,100 125,125, 150,150, 175,175 200,200

#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Plot points
    putpixel(25, 25, WHITE);
    putpixel(50, 50, WHITE);
    putpixel(75, 75, WHITE);
    putpixel(100, 100, WHITE);
    putpixel(125, 125, WHITE);
    putpixel(150, 150, WHITE);
    putpixel(175, 175, WHITE);
    putpixel(200, 200, WHITE);

    getch(); // Wait for user input
    closegraph(); // Close graphics mode

    return 0;
}