#include<graphics.h>
int main()
{
int gd = DETECT, gm = 0;
initgraph(&gd, &gm,""); 
putpixel(300, 200, WHITE);
getch();
closegraph();
return 0;
}