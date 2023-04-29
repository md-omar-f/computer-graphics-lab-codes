#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

int main()
{
int gd=DETECT,gm;
float shx,shy;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 printf("Enter shear factor shx along x-axis :");
scanf("%f",&shx);
line(100,0,200,0);
line(200,0,200,200);
line(200,200,100,200);
line(100,200,100,0);
printf("X-shear");
setcolor(12);
line((100+(0*shx)),0,(200+(0*shx)),0);
line((200+(0*shx)),0,(200+(200*shx)),200);
line((200+(200*shx)),200,(100+(200*shx)),200);
line((100+(200*shx)),200,(100+(0*shx)),0);
getch();
}
