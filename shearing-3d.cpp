#include<iostream>
#include<conio.h>
#include<graphics.h>
//#include<dos.h>

using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	float ax, ay, bx, by, cx, cy, dx, dy;
	float shx,shy;
	char ch;
	ax=50;ay=100;bx=100,by=100,cx=100;cy=200,dx=50,dy=200; //50 100, 50 200, 100 100, 100 200
	//rectangle(x1,y1,x2,y2);
	line(ax, ay, bx, by);
	line(bx, by, cx, cy);
	line(cx, cy, dx, dy);
	line(dx, dy, ax, ay);

	delay(10);
	cout<<"enter the direction of shear : ";
	cin>>ch;
	if(ch=='x')
	{
		cout<<"enter x-direction of shear : ";
		cin>>shx;
		cx=cx+shx*cy;
		dx=dx+shx*dy;
		setcolor(RED);
		//rectangle(x1,y1,x2,y2);
		line(ax, ay, bx, by);
        line(bx, by, cx, cy);
        line(cx, cy, dx, dy);
        line(dx, dy, ax, ay);
	}
	else
	{
		cout<<"enter y-direction of shear : ";
		cin>>shy;
		y1=y1+shy*x1;
		y2=y2+shy*x2;
		setcolor(RED);
		//rectangle(x1,y1,x2,y2);
	}
	getch();
	closegraph();
}
