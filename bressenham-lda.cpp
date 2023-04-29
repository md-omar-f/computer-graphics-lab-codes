#include<graphics.h>
#include<math.h>

using namespace std;

void bressenham(float x1, float y1, float x2, float y2) {
    int dx, dy, p;
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    p = 2 * dy - dx;

    if(x1 > x2) {
        swap(x1, x2);
        swap(y1, y2);
    }

    while(x1 < x2) {
        putpixel(x1, y1, WHITE);
        if(p < 0) {
            p = p + 2 * dy;
        } else {
            p = p + 2 * dy - 2 * dx;
            ++y1;
        }
        ++x1;
    }
}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    bressenham(200, 20, 20, 200);
    getch();
}

