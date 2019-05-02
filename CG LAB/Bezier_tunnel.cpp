
/*
#include <Windows.h>
#include <GL\glew.h>
#include <GL\freeglut.h>
#include <iostream>
#include<stdio.h>
using namespace std;
double X1, X2, X3, Y1, Y2, Y3, X4, Y4, Z1, Z2, Z3, Z4;
double P1, P2, P3, Q1, Q2, Q3, P4, Q4, R1, R2, R3, R4;

void myInit(void) 
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 1.0, 0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-480, 480, -320, 320);
}

void myDisplay(){
	
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.0, 1.0);
	glVertex2f(-480,0);
	glVertex2f(480,0);
	glVertex2f(0,-320);
	glVertex2f(0,320);
	glEnd();
	X1 = rand()%200;
	Y1 = rand()%200;
	X2 = rand()%200;
	Y2 = rand()%200;
	X3 = rand()%200;
	Y3 = rand()%200;
	X4 = rand()%200;
	Y4 = rand()%200;
	double u,x,y,z;
	double p,q,r;
	for (u=0;u<1;u=u+0.01)
	{
		x=(1-u)*(1-u)*(1-u)*X1+3*(1-u)*(1-u)*u*X2+3*u*u*(1-u)*X3+u*u*u*X4;
		y=(1-u)*(1-u)*(1-u)*Y1+3*(1-u)*(1-u)*u*Y2+3*u*u*(1-u)*Y3+u*u*u*Y4;

		p = x;
		q = -y;

		glBegin(GL_POINTS);
		glColor3f (1.0, 0.0, 0.0);
		glVertex2d(x, y);
		glVertex2d(p, q);
		glEnd();
		double rad = 2*y/2;
		double xc = x;
		double yc = q+rad;
		
		

		double pk = 1-rad;
		double xk = 0, yk = rad;
		while(xk<yk){
			if(pk<=0){
				pk = pk + 2*xk +3;
				xk=xk+1;
			}
			else{
				
				pk = pk + 2*xk - 2*yk + 5;
				xk = xk+1;
				yk = yk-1;
			}
			glBegin(GL_POINTS);
			glColor3f (1.0, 0.0, 0.0);
			glVertex2d(xk+xc, yk+yc);
			glVertex2d(xk+xc, -yk+yc);
			glVertex2d(-xk+xc, yk+yc);
			glVertex2d(-xk+xc, -yk+yc);

			glVertex2d(yk+yc, xk+xc);
			glVertex2d(yk+yc, -xk+xc);
			glVertex2d(-yk+yc, xk+xc);
			glVertex2d(-yk+yc, -xk+xc);
			glEnd();
		}
	}
	
	glFlush();
	
}

void main(int argc, char **argv)
{
	
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1366, 768);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Cubic Bezier Curve");
	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();
}
*/