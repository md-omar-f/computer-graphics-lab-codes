#include<iostream>
#include<graphics.h>
#include<math.h>

using namespace std;

void drawCircle(int x, int y, int xc, int yc) {
    putpixel(x + xc, y + yc, WHITE);
    putpixel(-x + xc, y + yc, WHITE);
    putpixel(x + xc, -y + yc, WHITE);
    putpixel(-x + xc, -y + yc, WHITE);

    putpixel(y + xc, x + yc, WHITE);
    putpixel(-y + xc, x + yc, WHITE);
    putpixel(y + xc, -x + yc, WHITE);
    putpixel(-y + xc, -x + yc, WHITE);
}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    line(320, 0, 320, 640);
    line(0, 220, 640, 220);

    int xc, yc, r;
    cout<<"Enter the center (xc, yc): ";
    cin>>xc>>yc;
    cout<<"Enter the radius: ";
    cin>>r;

    xc += 320;
    yc += 220;

    int x = 0;
    int y = r;
    int pk = 1 - r;
    while(x <= y) {
        drawCircle(x, y, xc, yc);
        ++x;
        if(pk < 0) {
            pk = pk + (2 * x) + 1;
        } else {
            --y;
            pk = pk + (2 * x) + ((y * y) - ((y + 1) * (y + 1))) - (y - (y + 1)) + 1;
        }
    }
    getch();
    closegraph();
}
