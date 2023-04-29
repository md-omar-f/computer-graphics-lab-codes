#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#include<graphics.h>
int xa,xb,ya,yb,mx,my,depth;
void draw();
void scale();
int main()
{
 int gd=DETECT,gm,c;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 printf("\n\t\t3D Scaling\n\n");
 printf("\nEnter 1st top value(x1,y1):");
 scanf("%d%d",&xa,&ya);
 printf("Enter right bottom value(x2,y2):");
 scanf("%d%d",&xb,&yb);
 depth=(xb-xa)/4;
 mx=(xa+xb)/2;
 my=(ya+yb)/2;
 draw();

 scale();
 getch();
 }
void draw()
{
 bar3d(xa,ya,xb,yb,depth,1);
}
void scale()
{
 int x,y,a1,a2,b1,b2,dep;
 printf("\n\n Enter scaling Factors:");
 scanf("%d%d",&x,&y);
 a1=mx+(xa-mx)*x;
 a2=mx+(xb-mx)*x;
 b1=my+(ya-my)*y;
 b2=my+(yb-my)*y;
 dep=(a2-a1)/4;
 bar3d(a1,b1,a2,b2,dep,1);
 setcolor(5);
 draw();
}
