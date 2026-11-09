#include <graphics.h>
#include <conio.h>
int main()
{
 int gd = DETECT, gm;
 initgraph(&gd, &gm, (char*)"");
 rectangle(100, 100, 200, 200);
 rectangle(140, 60, 240, 160);
 line(100,100,140,60);
 line(200,100,240,60);
 line(200,200,240,160);
 line(100,200,140,160);
 int tx = 150, ty = 50;
 setcolor(RED);
 rectangle(100+tx,100+ty,200+tx,200+ty);
 rectangle(140+tx,60+ty,240+tx,160+ty);
 line(100+tx,100+ty,140+tx,60+ty);
 line(200+tx,100+ty,240+tx,60+ty);
 line(200+tx,200+ty,240+tx,160+ty);
 line(100+tx,200+ty,140+tx,160+ty);
 outtextxy(10,10,(char*)"3D Translation");
 getch();
 closegraph();
 return 0;
}
