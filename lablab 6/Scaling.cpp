#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    int gd=DETECT,gm;
    int x1=100,x2=150,y1=130,y2=170,x3,y3,x4,y4,sx=2,sy=2;
    initgraph(&gd,&gm,NULL);
    setcolor(5);
    line(x1,y1,x2,y2);
    outtextxy(x2+2,y2+2,"original line");
    x3=x1*sx;
    y3=y1*sy;
    x4=x2*sx;
    y4=y2*sy;
    setcolor(7);
    line(x3,y3,x4,y4);
    outtextxy(x4+2,y4+2,"line after scaling");
    outtextxy(x4+50,y4+50,"240382");
    getch();

}
