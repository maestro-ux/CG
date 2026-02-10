#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    int gd=DETECT,gm;
    int x1=100,x2=150,y1=100,y2=130,x3,y3,x4,y4,tx=23,ty=50;
    initgraph(&gd,&gm,NULL);
    setcolor(5);
    line(x1,y1,x2,y2);
    outtextxy(x2+2,y2+2,"original line");
    x3=x1+tx;
    y3=y1+ty;
    x4=x2+tx;
    y4=y2+ty;
    setcolor(7);
    line(x3,y3,x4,y4);
    outtextxy(x4+2,y4+2,"line after translation");
    outtextxy(x4+150,y4+150,"240382");
    getch();

}
