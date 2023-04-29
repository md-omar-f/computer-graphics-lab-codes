#include<graphics.h>
#include<math.h>

void DDA(int x1,int y1,int x2,int y2)
{
    float dx,dy;
    float steps;

    dx=x2-x1;
    dy=y2-y1;

    if(abs(dx)>abs(dy))
        steps=abs(dx);
    else
        steps=abs(dy);

    int Xk=dx/steps;
    int Yk=dy/steps;

    for(int i=1;i<=steps;i++)
    {
        putpixel(x1,y1, WHITE);
        x1 =x1+Xk;
        y1 =y1+Yk;
    }
}
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    DDA(200, 20, 20, 200);
    getch();
    return 0;
}
