#include <stdio.h>
#include <math.h>
#include <graphics.h>
int main()
{
int gd=DETECT , gm;
initgraph(&gd, &gm,"");
int x1=5,y1=1,x2=20,y2=60,k,s;
float x,y,dx,dy,xinc,yinc;


dx=x2-x1;
dy=y2-y1;

if(abs(dx)>abs(dy))
{
s=abs(dx);
}
else
{
s=abs(dy);
}
xinc=dx/s;
yinc=dy/s;

for(k=0;k<s;k++)
{
x=x+xinc;
y=y+yinc;
putpixel(round(x),round(y),WHITE);
}
// Text (cast to char* to remove warning)
    outtextxy(140, 420, (char*)"Saugat shrestha");
    outtextxy(140, 440, (char*)"240382");

getch();
closegraph();
return 0;
}

