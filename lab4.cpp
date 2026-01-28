#include<dos.h>
#include<stdio.h>
#include<graphics.h>
void draw_circle(int,int,int);
void symmetry(int,int,int,int);
int main()
{
int xc=100,yc=200,R=50;
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
draw_circle(xc,yc,R);
getch();
return 0;
closegraph();
}
void draw_circle(int xc,int yc,int rad)
{
int x = 0;
int y= rad;
int p =1-rad;
symmetry(x,y,xc,yc);
for(x=0;y>x;x++)
{
if(p<0)
p += 2*x + 3;
else
{
p += 2*(x-y) + 5;
y--;
}
symmetry(x,y,xc,yc);
delay(50);
}
}
void symmetry(int x,int y,int xc,int yc)
{
putpixel(xc+x,yc-y,RED); //For pixel (x,y)
delay(50);
putpixel(xc+y,yc-x, RED); //For pixel (y,x)
delay(50);
putpixel(xc+y,yc+x, RED); //For pixel (y,-x)
delay(50);
putpixel(xc+x,yc+y, RED); //For pixel (x,-y)
delay(50);
putpixel(xc-x,yc+y, RED); //For pixel (-x,-y)
delay(50);
putpixel(xc-y,yc+x, RED); //For pixel (-y,-x)
delay(50);
putpixel(xc-y,yc-x, RED); //For pixel (-y,x)
delay(50);
putpixel(xc-x,yc-y, RED); //For pixel (-x,y)
delay(50);
}
