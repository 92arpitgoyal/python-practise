

#include<stdio.h>
#include<stdlib.h>
#include<X11/Xlib.h>
#include<GL/glx.h>
#include<GL/glu.h>

Display                 *dpy;
Window                  root;
GLint                   att[] = { GLX_RGBA, GLX_DEPTH_SIZE, 24, GLX_DOUBLEBUFFER, None };
XVisualInfo             *vi;
Colormap                cmap;
XSetWindowAttributes    swa;
Window                  win;
GLXContext              glc;
XWindowAttributes       gwa;
XEvent                  xev;

void pencil() {
 glClearColor(1.0, 1.0, 1.0, 1.0);
 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(-1., 1., -1., 1., 1., 20.);

 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();
 gluLookAt(0., 0., 10., 0., 0., 0., 0., 1., 0.);

//tip of pencil
//upper part
 glBegin(GL_QUADS);
  glColor3f(0. ,0.,  0.); glVertex3f(-.65,.90 ,0.);
  glColor3f(0. ,0.,  0.); glVertex3f(-.62,.95 ,0.);
  glColor3f(0. ,0.,  0.); glVertex3f(-.59,.90 ,0.);
  glColor3f(0. ,0.,  0.); glVertex3f(-.65,.90 ,0.);
//lowerpart
  glColor3f(1. ,0.5, 0.); glVertex3f(-.65,  .90, 0.);
  glColor3f(1. ,0.5, 0.); glVertex3f(-.59,  .90, 0.);
  glColor3f(1. ,0.5, 0.); glVertex3f(-.50,  .75, 0.);
  glColor3f(1. ,0.5, 0.); glVertex3f(-.75,  .75, 0.);

glEnd();

//lower black rectangle
 glBegin(GL_QUADS);
  glColor3f(0., 0., 0.); glVertex3f(-.75, -.75, .0);
  glColor3f(0., 0., 0.); glVertex3f(-.50, -.75, .0);
  glColor3f(0., 0., 0.); glVertex3f(-.50,  .75, .0);
  glColor3f(0., 0., 0.); glVertex3f(-.75,  .75, .0);

glEnd();

//lower red part
glBegin(GL_QUADS);
  glColor3f(1. ,0., 0.); glVertex3f(-.75, -.75, 0.);
  glColor3f(1. ,0., 0.); glVertex3f(-.50, -.75, 0.);
  glColor3f(1. ,0., 0.); glVertex3f(-.50, -.85, 0.);
  glColor3f(1. ,0., 0.); glVertex3f(-.75, -.85, 0.);
glEnd();
}
int main(int argc, char *argv[]) {

 dpy = XOpenDisplay(NULL);

 if(dpy == NULL) {
 	printf("\n\tcannot connect to X server\n\n");
        exit(0);
 }

 root = DefaultRootWindow(dpy);

 vi = glXChooseVisual(dpy, 0, att);

 if(vi == NULL) {
	printf("\n\tno appropriate visual found\n\n");
        exit(0);
 }
 else {
	printf("\n\tvisual %p selected\n", (void *)vi->visualid); /* %p creates hexadecimal output like in glxinfo */
 }


 cmap = XCreateColormap(dpy, root, vi->visual, AllocNone);

 swa.colormap = cmap;
 swa.event_mask = ExposureMask | KeyPressMask;

 win = XCreateWindow(dpy, root, 0, 0, 600, 600, 0, vi->depth, InputOutput, vi->visual, CWColormap | CWEventMask, &swa);

 XMapWindow(dpy, win);
 XStoreName(dpy, win, "Pencil in C");

 glc = glXCreateContext(dpy, vi, NULL, GL_TRUE);
 glXMakeCurrent(dpy, win, glc);
 
 glEnable(GL_DEPTH_TEST); 
 
 while(1) {
 	XNextEvent(dpy, &xev);
        
        if(xev.type == Expose) {
        	XGetWindowAttributes(dpy, win, &gwa);
                glViewport(0, 0, gwa.width, gwa.height);
        	pencil(); 
                glXSwapBuffers(dpy, win);
        }
                
	else if(xev.type == KeyPress) {
        	glXMakeCurrent(dpy, None, NULL);
 		glXDestroyContext(dpy, glc);
 		XDestroyWindow(dpy, win);
 		XCloseDisplay(dpy);
 		exit(0);
        }
    } //this closes while loop
} //close the main function
