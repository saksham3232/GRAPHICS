#include <graphics.h>
#include <stdio.h>

int main() {
    
    initwindow(getmaxwidth(), getmaxheight(), "Full Screen Mode");

    int width = getmaxx();
    int height = getmaxy();

    printf("Screen Width: %d\n", width);
    printf("Screen Height: %d\n", height);
    
    // Place pixel at the center
    putpixel(width / 2, height / 2, WHITE);

    system("pause");
    closegraph();
    return 0;
}