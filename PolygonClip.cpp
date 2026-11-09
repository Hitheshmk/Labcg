#include <graphics.h>
#include <conio.h>
int main()
{
 int gd = DETECT, gm;
 initgraph(&gd, &gm,(char*) "");
 rectangle(150, 100, 350, 300);
 int poly[] = {100,150, 250,50, 400,150, 350,300, 150,300,
100,150};
 setcolor(RED);
 drawpoly(6, poly);
 int clip[] = {150,150, 250,100, 350,150, 350,300, 150,300,
150,150};
 setcolor(GREEN);
 drawpoly(6, clip);
 outtextxy(170, 80,(char*) "Polygon Clipping");
 getch();
 closegraph();
 return 0;
}
