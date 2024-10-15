#include <graphics.h>
#include <stdio.h>

void bresenhamLine(int x0, int y0, int x1, int y1) {
    int dx = x1 - x0;
    int dy = y1 - y0;
    
    int x = x0;
    int y = y0;
    int error = dx - dy;
    
    int x_inc = (x0 < x1) ? 1 : -1;
    int y_inc = (y0 < y1) ? 1 : -1;
    
    while (x != x1 || y != y1) {
        putpixel(x, y, WHITE); 
        
        int error2 = 2 * error;
        
        if (error2 > -dy) {
            error -= dy;
            x += x_inc;
        }
        
        if (error2 < dx) {
            error += dx;
            y += y_inc;
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x0 = 100, y0 = 100, x1 = 300, y1 = 200;
    
   
    bresenhamLine(x0, y0, x1, y1);
    
    getch();
    closegraph(); 
    
    return 0;
}
