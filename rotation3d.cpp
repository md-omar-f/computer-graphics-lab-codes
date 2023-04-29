#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
int xa,xb,ya,yb,mx,my,depth;
void draw();
void rotate();
int main()
{
 int gd=DETECT,gm,c;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 printf("\n3D Transformation Rotating\n\n");
 printf("\nEnter 1st top value(xa,ya):");
 scanf("%d%d",&xa,&ya);
 printf("Enter right bottom value(xb,yb):");
 scanf("%d%d",&xb,&yb);
 depth=(xb-xa)/4;
 mx=(xa+xb)/2;
 my=(ya+yb)/2;
 draw();
 rotate();
 getch();
 }
void draw()
{
 bar3d(xa,ya,xb,yb,depth,1);
}
void rotate()
{
 float t;
 int a1,b1,a2,b2,dep;
printf("Enter the angle to rotate=");
 scanf("%f",&t);
 t=t*(3.14/180);
 a1=mx+(xa-mx)*cos(t)-(ya-my)*sin(t);
 a2=mx+(xb-mx)*cos(t)-(yb-my)*sin(t);
 b1=my+(xa-mx)*sin(t)-(ya-my)*cos(t);
 b2=my+(xb-mx)*sin(t)-(yb-my)*cos(t);
 if(a2>a1)
 dep=(a2-a1)/4;
 else
 dep=(a1-a2)/4;
 bar3d(a1,b1,a2,b2,dep,1); setcolor(5);
 }
