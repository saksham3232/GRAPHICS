#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    
    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Put a pixel at (200, 200) with WHITE color
    putpixel(1, 1, WHITE);

    // Hold the screen until a key is pressed
    getch();

    // Close the graphics mode
    closegraph();

    return 0;
}