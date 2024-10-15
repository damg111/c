
#include <graphics.h>
#include <stdio.h>
#include <math.h> 


void plotCirclePoints(int centerX, int centerY, int x, int y) {
    putpixel(centerX + y, centerY - x, WHITE); 
    putpixel(centerX + x, centerY - y, WHITE); 
    putpixel(centerX - x, centerY - y, WHITE); 
    putpixel(centerX - y, centerY - x, WHITE); 
    putpixel(centerX - y, centerY + x, WHITE); 
    putpixel(centerX - x, centerY + y, WHITE);
    putpixel(centerX + x, centerY + y, WHITE); 
    putpixel(centerX + y, centerY + x, WHITE); 
}


void drawCircleWithAngles(int centerX, int centerY, int radius) {
    double theta = 0.0;
    double angleIncrement = M_PI / 4;  
    while (theta <= M_PI / 4) {
        int x = (int)(radius * cos(theta));
        int y = (int)(radius * sin(theta));
        plotCirclePoints(centerX, centerY, x, y); 
        theta += angleIncrement;  
    }
}

void drawAxes(int centerX, int centerY) {
    for (int y = 0; y <= getmaxy(); y++) {
        putpixel(centerX, y, WHITE);  
    }
    for (int x = 0; x <= getmaxx(); x++) {
        putpixel(x, centerY, WHITE);  
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int screenWidth = getmaxx();
    int screenHeight = getmaxy();

    int centerX = screenWidth / 2;
    int centerY = screenHeight / 2;
    int radius = 200;  

    drawAxes(centerX, centerY); 

    drawCircleWithAngles(centerX, centerY, radius);  

    getch(); 
    closegraph(); 
    return 0;
}
