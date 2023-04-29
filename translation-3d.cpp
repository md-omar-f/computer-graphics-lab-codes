#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#include<graphics.h>
int xa,xb,ya,yb,mx,my,depth;
void draw();
void trans();
int main()
{
 int gd=DETECT,gm,c;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 printf("\n\t\t3D Translation\n\n");
 printf("\nEnter 1st top value(x1,y1):");
 scanf("%d%d",&xa,&ya);
 printf("Enter right bottom value(x2,y2):");
 scanf("%d%d",&xb,&yb);
 depth=(xb-xa)/4;
 mx=(xa+xb)/2;
 my=(ya+yb)/2;
 draw();

 trans();
 getch();
 }
void draw()
{
 bar3d(xa,ya,xb,yb,depth,1);
}
void trans()
{
 int a1,a2,b1,b2,dep,x,y;
 printf("\n Enter the Translation Distances:");
 scanf("%d%d",&x,&y);
 a1=xa+x;
 a2=xb+x;
 b1=ya+y;
 b2=yb+y;
 dep=(a2-a1)/4;
 bar3d(a1,b1,a2,b2,dep,1);
 setcolor(5);
 draw();
 }
