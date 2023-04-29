#include<graphics.h>
#include<math.h>

void bresenham(int x1,int y1,int x2,int y2)
{
    int x=x1;
    int y=y1;
    int dx,dy;

    dx=x2-x1;
    dy=y2-y1;

    int pk=2*abs(dy)-abs(dx);

    while(x<=x2)
    {
        if(pk<0)
        {
            pk=pk+2*abs(dy);
            putpixel(x,y,WHITE);
        }else
        {
            pk=pk+2*abs(dy)-2*abs(dx);
            putpixel(x,y,WHITE);
            y++;
        }
        x++;
    }
}
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    bresenham(100, 20, 20, 200);
    getch();
    return 0;
}
