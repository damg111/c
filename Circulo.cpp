#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    int r = 200; 
    float x, y;

    initgraph(&gd, &gm, "");

    int x1 = getmaxx() / 2; 
    int y2 = getmaxy() / 2; 

    for (x=-r; x<=r; x+=0.01) 
	{ 
        y = sqrt(r * r - x * x);
        putpixel((int)(x1 + x), (int)(y2 + y), WHITE); 
        putpixel((int)(x1 + x), (int)(y2 - y), WHITE); 
    }

    putpixel(x1 + (int)r, y2, GREEN); 
    putpixel(x1 - (int)r, y2, GREEN); 

    getch();
    closegraph();

    return 0;
}

