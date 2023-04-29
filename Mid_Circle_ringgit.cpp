#include<stdio.h>
#include <graphics.h>

void mid_circle(int xc,int yc,int x,int y)
{
    putpixel(xc+x,yc+y,RED);
    putpixel(xc+y,yc+x,RED);
    putpixel(xc-y,yc+x,RED);
    putpixel(xc-x,yc+y,RED);
    putpixel(xc-x,yc-y,RED);
    putpixel(xc-y,yc-x,RED);
    putpixel(xc+y,yc-x,RED);
    putpixel(xc+x,yc-y,RED);
}

int  main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    line(320,0,320,480);
    line(0,240,640,240);

    int xc,yc,r,p,x,y;

    printf("\nEnter the Centre of circle: ");
    scanf("%d%d", &xc,&yc);

    printf("\nEnter the radius: ");
    scanf("%d", &r);

    xc=xc+320;
    yc=yc+240;
    x=0;
    y=r;
    p=1-r;

    mid_circle(xc,yc,x,y);

    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*x-2*y+1; // p = p + 2(xk+1) + (yk+1^2 - yk^2) - (yk+1 - yk) + 1;
        }
        mid_circle(xc,yc,x,y);
    }
    getch();
}
