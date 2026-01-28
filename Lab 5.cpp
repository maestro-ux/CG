#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void disp();
float x,y;
int xc=150,yc=250;
int main()
{
int gd=DETECT,gm;
int rx=100,ry=50;
float p1,p2;
initgraph(&gd,&gm,NULL);
x=0;
y=ry;
disp();
p1=(ry*ry)-(rx*rx*ry)+(rx*rx)/4;
while((2.0*ry*ry*x)<=(2.0*rx*rx*y))
{
x++;
if(p1<=0)
p1=p1+(2.0*ry*ry*x)+(ry*ry);
else
{
  y--;
  p1=p1+(2.0*ry*ry*x)-(2.0*rx*rx*y)+(ry*ry);
}
disp();
x=-x;
disp();
x=-x;

}
x=rx;
y=0;
disp();
p2=(rx*rx)+2.0*(ry*ry*rx)+(ry*ry)/4;
while((2.0*ry*ry*x)>(2.0*rx*rx*y))
{
    y++;
    if(p2>0)
    {
        p2=p2+(rx*rx)-(2.0*rx*rx*y);

    }
    else
    {
      x--;
      p2=p2+(2.0*ry*ry*x)-(2.0*rx*rx*y)+(rx*rx);


    }
    disp();
    y=-y;
    disp();
    y=-y;
}
outtextxy(xc-25,yc,"Saugat shrestha");
outtextxy(150,150,"240382");
getch();
closegraph();
}
void disp()
{
delay(50);
putpixel(xc+x,yc+y,10);
putpixel(xc-x,yc+y,10);
putpixel(xc+x,yc-y,10);
putpixel(xc-x,yc-y,10);
}
