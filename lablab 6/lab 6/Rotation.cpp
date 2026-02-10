#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    int x1 = 100, y1 = 100, x2 = 150, y2 = 130;
    float x3, y3, x4, y4;
    int a = 45;
    float t;

    initgraph(&gd, &gm, NULL);

    setcolor(5);
    line(x1, y1, x2, y2);
    outtextxy(x2+2, y2+2, "original line");

    t = a * (3.14159 / 180.0);  // radians

    x3 = (x1 * cos(t)) - (y1 * sin(t));
    y3 = (x1 * sin(t)) + (y1 * cos(t));
    x4 = (x2 * cos(t)) - (y2 * sin(t));
    y4 = (x2 * sin(t)) + (y2 * cos(t));

    setcolor(7);
    line(x3, y3, x4, y4);
    outtextxy(x4+2, y4+2, "line after rotation");
    outtextxy(x4+150, y4+150, "240382");

    getch();
    closegraph();
    return 0;
}
