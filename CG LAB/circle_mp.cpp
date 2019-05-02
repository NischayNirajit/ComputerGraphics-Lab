
/*
#include <Windows.h>
#include <GL\glew.h>
#include <GL\freeglut.h>
#include <iostream>
#include<stdio.h>

using namespace std;
int X1, X2, X3, Y1, Y2, Y3, X4, Y4;

void myInit() 
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 1.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-480, 480, -320, 320);
}
void myDisplay() 
{
int xc = 175, yc = 325;
int rad = 20;
	double pk = 1-rad;
		double xk = 0, yk = rad;
		glBegin(GL_POINTS);
		glColor3f (0.0, 0.0, 1.0);
		while(xk<=yk){
			xk = xk+1;
			if(pk<0){
				pk = pk + 2*xk +3;
				
			}
			else{
				
				pk = pk + 2*xk - 2*yk + 5;
				
				yk = yk-1;
			}
			cout<<xk<<" "<<yk<<endl;
			glVertex2i(xk+xc, yk+yc);
			glVertex2i(xk+xc, -yk+yc);
			glVertex2i(-xk+xc, yk+yc);
			glVertex2i(-xk+xc, -yk+yc);

			glVertex2i(yk+yc, xk+xc);
			glVertex2i(yk+yc, -xk+xc);
			glVertex2i(-yk+yc, xk+xc);
			glVertex2i(-yk+yc, -xk+xc);
			
		}
		glEnd();
		glFlush();
}
void main(int argc, char **argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1366, 768);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("National Flag");
	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();
}
*/