/*
#include<iostream> 
#include<GL/glut.h> 
#include<math.h>
#include<Windows.h>
#define pi 3.142857 
using namespace std;

void myInit(void)
{
	
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 1.0, 0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
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
	float h1,h2,h3,h4;
	float u;
	for(u = 0; u<=1; u+=0.01){
		h1 = 2*u*u*u-3*u*u+1;
		h2 = -2*u*u*u+3*u*u;
		h3 = u*u*u-2*u*u+u;
		h4 = u*u*u-u*u;
		glBegin(GL_POINTS);
		glColor3f(1.0, 1.0, 0.0);
			glVertex2f(u*100,h1*100);
		glEnd();

		glBegin(GL_POINTS);
		glColor3f(1.0, 1.0, 0.2);
			glVertex2f(u*100,h2*100);
		glEnd();

		glBegin(GL_POINTS);
		glColor3f(1.0, 0.9, 0.2);
			glVertex2f(u*100,h3*100);
		glEnd();

		glBegin(GL_POINTS);
		glColor3f(1.0, 0.3, 0.2);
			glVertex2f(u*100,h4*100);
		glEnd();
	}
	
	glFlush();
	
	
}

int main(int argc, char** argv)
{
	
	
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize(1366, 768);
        glutInitWindowPosition(0, 0);
        glutCreateWindow("hermite blend");
        myInit();
        glutDisplayFunc(display);
        glutMainLoop();
}
*/