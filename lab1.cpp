#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    char path[] = "C:\\MinGW\\lib\\libbgi.a";

    initgraph(&gd, &gm, path);

    // Pixel
    putpixel(200, 150, CYAN);

    // Lines
    setcolor(MAGENTA);
    line(250, 320, 180, 180);

    setcolor(LIGHTGREEN);
    line(80, 70, 290, 270);

    setcolor(LIGHTBLUE);
    line(260, 240, 190, 180);

    // Circle (ORANGE not defined, use YELLOW instead)
    setcolor(YELLOW);
    circle(320, 280, 120);

    // Rectangle
    setcolor(LIGHTRED);
    rectangle(150, 50, 50, 210);

    // Text (cast to char* to remove warning)
    outtextxy(140, 420, (char*)"saugat shrestha");
    outtextxy(140, 440, (char*)"240382");

    // Background
    setbkcolor(GRAY);

    getch();
    closegraph();
    return 0;
}
