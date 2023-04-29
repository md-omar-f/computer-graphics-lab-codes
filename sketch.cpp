#include<graphics.h>

algDDA(int x1, int y1, int x2, int y2)
{
    int   dx=x2-x1;
    int   dy=y2-y1;
    int steps, Xinc, Yinc;

    int gd = DETECT, gm, color;
    initgraph(&gd, &gm,"");

    if(abs(dx)>abs(dy))
    {
       steps=abs(dx);
    }
    if(abs(dx)<abs(dy))
    {
       steps=abs(dy);
    }else
    {
        steps=abs(dx)==abs(dy);
    }

    Xinc=dx/steps;
    Yinc=dy/steps;

    for(int i=1;i<=steps;i++)
    {
        putpixel(x1,y1,GREEN);
        x1=x1+Xinc;
        y1=y1+Yinc;
    for(int i=1;i<=steps;i++)
    {
        putpixel(x1,y1,GREEN);
        x1=x1+Xinc;
        y1=y1+Yinc;
    }

        getch();
    closegraph();
    return 0;
}
}

int main()
{
    algDDA(20,200, 20,30);
}
