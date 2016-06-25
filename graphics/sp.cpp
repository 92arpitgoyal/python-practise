#include <iostream>
#include <graphics.h>
#include <stdlib.h>
using namespace std;
    int xradius = 2, yradius =1;
 int  endangle;
 int count=0;
   int midx, midy,i=0;
	 void first();
	 void second();
	 void third();
	 void fourth();
int main(void)
{         int n;
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;




   /* initialize graphics, local variables */
   initgraph(&gdriver, &gmode, "");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)
   /* an error occurred */
   {
      cout<<"Graphics error: " .  grapherrormsg(errorcode);
      cout<<"Press any key to halt:";
      getch();
      exit(1);
   /* terminate with an error code */
   }

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());
   cout<<"enter the value of image size: eg. for nXn enter n";
   cin>>n;

   /* draw ellipse */
	  while(xradius+i<=n/2 && yradius+i<=n/2)
	  {
 first();
 second();
 third();
 fourth();
	   }
   /* clean up */
   getch();
   closegraph();
   return 0;
}
void first()
{int stangle=0;
 endangle=0;
 setcolor(getmaxcolor()-count);
  while(endangle<=90)
  {
  ellipse(midx, midy, stangle, endangle,
	   xradius+i, yradius+i);

	  stangle= endangle;
	   endangle=endangle+2;
	count++;
	    delay(10);
       }
	i=i+1;
       }
     void second()
     {   int stangle=90;
 endangle=90;
  setcolor(getmaxcolor()-count);
  while(endangle<=180)
  {
  ellipse(midx, midy, stangle, endangle,
	   xradius+i, yradius+i);

	  stangle= endangle;
	   endangle=endangle+2;
	   count++;
	    delay(10);
	} i=i+1;
       }
       void third()
       {int stangle=180;
 endangle=180;
  setcolor(getmaxcolor()-count);
  while(endangle<=270)
  {
  ellipse(midx, midy, stangle, endangle,
	   xradius+i, yradius+i);

	  stangle= endangle;
	   endangle=endangle+2;
	   count++;
	    delay(10);
       }
      i=i+1;
       }
       void fourth()
       {  setcolor(getmaxcolor()-count);
       int stangle=270;
 endangle=270;
  while(endangle<=360)
  {
  ellipse(midx, midy, stangle, endangle,
	   xradius+i, yradius+i);

	  stangle= endangle;
	   endangle=endangle+2;
	   count++;
	    delay(10);
	  }
       i=i+1; }
