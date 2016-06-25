#include<graphics.h>
int main()
{
int gd = DETECT, gm = 0;
initgraph(&gd, &gm,""); // initialize graphics
circle(300, 300, 150); // graphics function for circle
getch(); // this is must to hold output!
closegraph();
return 0;
}
