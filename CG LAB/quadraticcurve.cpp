
#if 0
#include<iostream> 
#include<GL/glut.h> 
#include<math.h>
#include<Windows.h>
#include<time.h>
#define pi 3.142857 
using namespace std;
int X1,Y1,X2,Y2,X3,Y3;

void myInit(void)
{
	// making background color black as first 
	// 3 arguments all are 0.0 
	glClearColor(0.0, 0.0, 0.0, 1.0);

	// making picture color green (in RGB mode), as middle argument is 1.0 
	glColor3f(0.0, 1.0, 0.0);

	// breadth of picture boundary is 1 pixel 
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	// setting window dimension in X- and Y- direction 
	gluOrtho2D(-480, 480, -320, 320);
}
void display()
{
	while(1){
	glClear(GL_COLOR_BUFFER_BIT);
	glScalef(1, 1, 1);
	glScalef(1, 1, 1);
	glBegin(GL_LINES);
	glVertex2f(-480,0);
	glVertex2f(480,0);
	glVertex2f(0,-320);
	glVertex2f(0,320);
	glEnd();
	glBegin(GL_POINTS);
	glColor3f(1.0, 0.0, 0.0);
	X1 = rand()%480;
	X2 = rand()%480;
	X3 = rand()%480;

	Y1 = rand()%320;
	Y2 = rand()%320;
	Y3 = rand()%320;
	float x,y;
	float h1,h2,h3;
	float u;
	for(u=0;u<=1;u+=0.001){
		h1 = 2*u*u-3*u+1;
		h2 = -4*u*u+4*u;
		h3 = 2*u*u-u;
		x = h1*X1 + h2*X2 + h3*X3;
		y = h1*Y1 + h2*Y2 + h3*Y3;
		glVertex2f(x,y);
	}
	glEnd();
	glFlush();
	Sleep(1000);
	}
}

int main(int argc, char** argv)
{
	
	
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

        // giving window size in X- and Y- direction 
        glutInitWindowSize(1366, 768);
        glutInitWindowPosition(0, 0);

        // Giving name to window 
        glutCreateWindow("Quardratic");
        myInit();

        glutDisplayFunc(display);
        glutMainLoop();
}
#endif