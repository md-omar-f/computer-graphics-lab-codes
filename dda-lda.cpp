#include<graphics.h>
#include<math.h>

using namespace std;

void dda(float x1, float y1, float x2, float y2) {
    float dx, dy, steps;
    float xinc, yinc;
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    steps = max(dx, dy);

    xinc = dx / steps;
    yinc = dy / steps;

    while(steps--) {
        putpixel(x1, y1, WHITE);
        x1 += xinc;
        y1 += yinc;
    }
}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    dda(200, 20, 20, 200);
    getch();
}

