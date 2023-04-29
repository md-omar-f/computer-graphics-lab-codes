#include<graphics.h>
#include<math.h>

using namespace std;

void bressenham(int x1, int y1, int x2, int y2, int dx, int dy, int decide) {
    int pk = 2 * dy - dx;

    for(int i = 0; i <= dx; ++i) {
        x1 < x2 ? x1++ : x1--;
        if(pk < 0) {
            if(decide == 0) {
                putpixel(x1, y1, GREEN);
            } else {
                putpixel(y1, x1, YELLOW);
            }
            pk = pk +  2 * dy;
        } else {
            y1 < y2 ? y1++ : y1--;
            if(decide == 0) {
                putpixel(x1, y1, GREEN);
            } else {
                putpixel(y1, x1, YELLOW);
            }
            pk = pk + 2 * dy - 2 * dx;
        }
    }
}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    int x1 = 0, y1 = 30, x2 = 30, y2 = 30, dx, dy;

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    if(dx > dy) {
        bressenham(x1, y1, x2, y2, dx, dy, 0);
    } else {
        bressenham(y1, x1, y2, x2, dy, dx, 1);
    }


    x1 = 30, y1 = 30, x2 = 30, y2 = 0, dx, dy;

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    if(dx > dy) {
        bressenham(x1, y1, x2, y2, dx, dy, 0);
    } else {
        bressenham(y1, x1, y2, x2, dy, dx, 1);
    }


    x1 = 30, y1 = 0, x2 = 0, y2 = 0, dx, dy;

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    if(dx > dy) {
        bressenham(x1, y1, x2, y2, dx, dy, 0);
    } else {
        bressenham(y1, x1, y2, x2, dy, dx, 1);
    }


    x1 = 0, y1 = 0, x2 = 0, y2 = 30, dx, dy;

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    if(dx > dy) {
        bressenham(x1, y1, x2, y2, dx, dy, 0);
    } else {
        bressenham(y1, x1, y2, x2, dy, dx, 1);
    }


    getch();
}

