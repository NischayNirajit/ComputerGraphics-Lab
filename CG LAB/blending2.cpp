/*
#include<iostream> 
#include<GL/glut.h> 
#include<math.h>
#include<Windows.h>
#define pi 3.142857 
using namespace std;

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
	
	glClear(GL_COLOR_BUFFER_BIT);
	glScalef(1, 1, 1);
	glScalef(1, 1, 1);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.0, 1.0);
	glVertex2f(-480,0);
	glVertex2f(480,0);
	glVertex2f(0,-320);
	glVertex2f(0,320);
	glEnd();
	
	
	float x,y;
	float h0,h1,h2,h3;
	float u;
	for(u=0;u<=1;u+=0.005){
		h0 = (-4.5)*(u*u*u) + 9*(u*u) - (5.5)*u + 1;
		h1 = (13.5)*(u*u*u) - (22.5)*(u*u) + 9*u;
		h2 = (-13.5)*(u*u*u) + 18*(u*u) - (4.5)*u;
		h3 = (4.5)*(u*u*u)-(4.5)*(u*u)+u;
		
		glBegin(GL_POINTS);
		glColor3f(1.0, 1.0, 0.0);
			glVertex2f(u*100,h0*100);
		glEnd();

		glBegin(GL_POINTS);
		glColor3f(1.0, 1.0, 0.2);
			glVertex2f(u*100,h1*100);
		glEnd();

		glBegin(GL_POINTS);
		glColor3f(1.0, 0.9, 0.2);
			glVertex2f(u*100,h2*100);
		glEnd();

		glBegin(GL_POINTS);
		glColor3f(1.0, 0.3, 0.2);
			glVertex2f(u*100,h3*100);
		glEnd();
	}
	
	glFlush();
	
	
}

int main(int argc, char** argv)
{
	
	
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

        // giving window size in X- and Y- direction 
        glutInitWindowSize(1366, 768);
        glutInitWindowPosition(0, 0);

        // Giving name to window 
        glutCreateWindow("cubic blend");
        myInit();

        glutDisplayFunc(display);
        glutMainLoop();
}
*/