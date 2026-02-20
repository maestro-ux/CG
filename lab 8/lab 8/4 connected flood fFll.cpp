
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void flood(int,int,int,int);

int main()
{
    int gd,gm=DETECT;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,NULL);
    rectangle(50,50,100,100);
    flood(55,55,9,0);

    getch();
}
void flood(int x,int y,int fill_color,int old_color)
{
    if (getpixel(x,y)==old_color)
    {
        delay(10);
        putpixel(x,y,fill_color);
        flood(x+1,y,fill_color,old_color);
        flood(x-1,y,fill_color,old_color);
        flood(x,y+1,fill_color,old_color);
        flood(x,y-1,fill_color,old_color);

    }

}
