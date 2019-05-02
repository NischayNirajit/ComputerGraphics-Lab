/*

#include<Windows.h>
#include<GL\glew.h>
#include<GL\freeglut.h>
#include<iostream>
#include<stdio.h>

using namespace std;
int X1, X2, X3, Y1, Y2, Y3;

void myInit() 
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 1.0, 0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-480, 480, -320, 320);
}


void myDisplay() 
{
	while(1){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
		glColor3f(0.5, 0.0, 1.0);
		glVertex2f(-480,0);
		glVertex2f(480,0);
		glVertex2f(0,-320);
		glVertex2f(0,320);
	glEnd();
	double u,x,y;
	X1 = rand()%200;
	Y1 = rand()%200;
	X2 = rand()%200;
	Y2 = rand()%200;
	X3 = rand()%200;
	Y3 = rand()%200;
	for (u=0.01;u<1;u=u+0.01)
	{
		x=(1-u)*(1-u)*X1+2*(1-u)*u*X2+u*u*X3;
		y=(1-u)*(1-u)*Y1+2*(1-u)*u*Y2+u*u*Y3;
		glBegin(GL_POINTS);
		glColor3f (1.0, 0.0, 0.0);
		glVertex2d(x, y);
		glEnd();
	}
	glFlush();
	Sleep(1000);
	}
}

void main(int argc, char **argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1366, 768);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Bezier Curve");
	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();
}
*/