#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int r =100;
    int midx = getmaxx()/2;
    int midy = getmaxy() / 2; 
    float theta=0;
    float step = 0.01;

    for (theta=0; theta <= 2*M_PI; theta += step) 
	{ 
    
        int x = midx + r* cos(theta);
        int y = midy + r* sin(theta);
        
        putpixel(x,y, GREEN); 
    }

   
    getch();
    closegraph();

    return 0;
}

