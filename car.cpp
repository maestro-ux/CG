#include <stdio.h>
#include<graphics.h>

#include <conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    setcolor(7);
    line(150,100,242,100);

    ellipse(242,105,0,90,10,5);

    line(150,100,120,150);
    line(252,105,280,150);
    line(100,150,320,150);
    line(100,150,100,200);
    line(320,150,320,200);
    line(100,200,110,200);
    line(320,200,310,200);

    arc(130,200,0,180,20);
    arc(290,200,0,180,20);
    line(270,200,150,200);

    circle(130,200,17);
    circle(290,200,17);

    outtextxy(240,250,"240382);


    getch();
    closegraph();
}
