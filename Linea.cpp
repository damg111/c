#include <stdio.h>
#include <graphics.h>

void basicoLinea(int x1, int y1, int x2, int y2)
{
    int dx = x2 - x1;
    int dy = y2 - y1;

    float m = (float)dy / dx;
    for (int x = x1; x <= x2; x++) 
    {
        int y = m * (x - x1) + y1;  
        putpixel(x, (int)y, WHITE);  
    }
}

int main()
{
    int x1, y1, x2, y2;
    int gd = DETECT, gm;

    printf("Dame las coordenadas del primer punto: \n");
    scanf("%d,%d", &x1,&y1);
    printf("Dame las coordenadas del segundo punto: \n");
    scanf("%d,%d", &x2,&y2);

    initgraph(&gd, &gm, (char*)"");
    basicoLinea(x1, y1, x2, y2);
    getch();
    closegraph();

    return 0;
}

