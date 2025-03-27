#include <graphics.h>
#include <stdio.h>

void drawCircle(int xc, int yc, int r) {
    int x = 0, y = r;
    int p = 1 - r; // Initial decision parameter

    printf("Plotted Coordinates:\n");

    while (x <= y) {
        // Plot all 8 symmetrical points
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - y, yc + x, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc - y, yc - x, WHITE);

        // Print coordinates
        printf("(%d, %d)  (%d, %d)  (%d, %d)  (%d, %d)\n", 
            xc + x, yc + y, xc - x, yc + y, xc + x, yc - y, xc - x, yc - y);
        printf("(%d, %d)  (%d, %d)  (%d, %d)  (%d, %d)\n", 
            xc + y, yc + x, xc - y, yc + x, xc + y, yc - x, xc - y, yc - x);

        x++; // Increment x

        // Update decision parameter
        if (p < 0) {
            p += 2 * x + 1;
        } else {
            y--; // Decrease y
            p += 2 * (x - y) + 1;
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI"); // Set up graphics mode

    int xc = 319, yc = 239, r = 100; // Center and radius
    drawCircle(xc, yc, r); // Call function to draw circle

    getch(); // Wait for user input
    closegraph(); // Close graphics mode
    return 0;
}