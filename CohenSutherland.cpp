#include <graphics.h>
#include <conio.h>
int main()
{
 int gd = DETECT, gm;
 initgraph(&gd, &gm,(char*) "");
 rectangle(150,100,450,300);
 setcolor(WHITE);
 line(50,50,550,350);
 setcolor(YELLOW);
 line(150,110,450,290);
 outtextxy(180,80,(char*)"CLIPPING WINDOW");
 getch();
 closegraph();
 return 0;
}
