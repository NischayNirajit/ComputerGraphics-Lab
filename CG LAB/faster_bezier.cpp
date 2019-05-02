/*
#include <Windows.h>
#include <GL\glew.h>
#include <GL\freeglut.h>
#include <iostream>
#include<stdio.h>

using namespace std;
int x1, x2, x3, y11, y2, y3, x4, y4;

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
	int flag = 0;
	int count = 0;
	while(1){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
		glColor3f(0.5, 0.0, 1.0);
		glVertex2f(-480,0);
		glVertex2f(480,0);
		glVertex2f(0,-320);
		glVertex2f(0,320);
	glEnd();
	double dt=0.0005;
	double x,y;
	double dfx,dfy,ddfx,ddfy,dddfx,dddfy;
	if(flag==0){
		x2--;
		x3++;
		y2--;
		y3++;
	}else{
		x2++;
		x3--;
		y2++;
		y3--;
	}
	x=x1;
	y=y11;
	dfx=(3*x2-3*x1)*dt+(3*x1-6*x2+3*x3)*dt*dt+(-x1+3*x2-3*x3+x4)*dt*dt*dt;
	dfy=(3*y2-3*y11)*dt+(3*y11-6*y2+3*y3)*dt*dt+(-y11+3*y2-3*y3+y4)*dt*dt*dt;
	ddfx=2*(3*x1-6*x2+3*x3)*dt*dt+6*(-x1+3*x2-3*x3+x4)*dt*dt*dt;
	ddfy=2*(3*y11-6*y2+3*y3)*dt*dt+6*(-y11+3*y2-3*y3+y4)*dt*dt*dt;
	dddfx=6*(-x1+3*x2-3*x3+x4)*dt*dt*dt;
	dddfy=6*(-y11+3*y2-3*y3+y4)*dt*dt*dt;
	
	for (double dt=0.0005;dt<1;dt=dt+0.0005)
	{
		glBegin(GL_POINTS);
		glColor3f (1.0, 0.0, 1.0);
		glVertex2d(x, y);
		glEnd();
		x=x+dfx;
		y=y+dfy;
		dfx=dfx+ddfx;
		dfy=dfy+ddfy;
		ddfx=ddfx+dddfx;
		ddfy=ddfy+dddfy;
	}
	glFlush();
	Sleep(10);
	if(x2<130){
		flag=1;
	}
	if(x2>170){
		flag = 0;
	}
	}
}

void main(int argc, char **argv)
{

	cout<<"Enter (x1, y1, x2, y2, x3, y3, x4, y4)\n"<<endl;
	cin>>x1>>y11>>x2>>y2>>x3>>y3>>x4>>y4;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Bezier Cubic Curve Drawing by using Taylor series method");
	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();
}
*/