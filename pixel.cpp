#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    
    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    setbkcolor(WHITE);

    int width = getmaxx();
    int height = getmaxy();

    printf("Width: %d\n", width);
    printf("Height: %d\n", height);

    putpixel(width - 2, height - 2, WHITE); // Adjust coordinates to be within bounds

    circle(width / 2, height / 2, 100);
    rectangle(width / 2 - 50, height / 2 - 50, width / 2 + 50, height / 2 + 50);
    
    system("pause");
    closegraph();

    return 0;
}