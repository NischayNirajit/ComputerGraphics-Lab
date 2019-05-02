

#include <Windows.h>
#include <GL\glew.h>
#include <GL\freeglut.h>
#include <iostream>
#include<stdio.h>
#include<math.h>
#define pi 3.1416
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
	int xc = ((X2+X3)/2);
	int yc = ((Y2+Y3)/2) - 60;
	int t = (X2+X3)/2;
	int flag = 0;
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
	if(flag==0){
		X2--;
		X3++;
		Y2--;
		Y3++;
	}else{
		X2++;
		X3--;
		Y2++;
		Y3--;
	}
	int k;
	for(k = 0;k<=120; k++){
	for (u=0.0001;u<1;u=u+0.0001)
	{
		x=(1-u)*(1-u)*(1-u)*X1+3*(1-u)*(1-u)*u*X2+3*u*u*(1-u)*X3+u*u*u*X4;
		y=(1-u)*(1-u)*(1-u)*Y1+3*(1-u)*(1-u)*u*Y2+3*u*u*(1-u)*Y3+u*u*u*Y4;
		glBegin(GL_POINTS);
		if(k<=40){
			glColor3f (1.0, 0.5, 0.2);
			glVertex2d(x, y-k);
			glEnd();
		}
		if(k>40 && k<=80){
			glColor3f (1.0, 1.0, 1.0);
			glVertex2d(x, y-k);
			glEnd();
		}
		if(k>80 && k<=120){
			glColor3f (0.0, 1.0, 0.0);
			glVertex2d(x, y-k);
			glEnd();
		}
	}
	}
	
	if(X2<t-40){
		flag=1;
	}
	if(X2>t+40){
		flag = 0;
	}
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
			
			glVertex2d(xk+xc, yk+yc);
			glVertex2d(xk+xc, -yk+yc);
			glVertex2d(-xk+xc, yk+yc);
			glVertex2d(-xk+xc, -yk+yc);

			glVertex2d(yk+xc, xk+yc);
			glVertex2d(yk+xc, -xk+yc);
			glVertex2d(-yk+xc, xk+yc);
			glVertex2d(-yk+xc, -xk+yc);
			
		}
		glEnd();
		/*for(int z = 0; z<=2*pi; z+=pi/24){
			glBegin(GL_LINES);
			glColor3f (0.0, 0.0, 1.0);
			glVertex2d(xc,yc);
			glVertex2d(xc+20*z,yc+20*z);
			glEnd();

		}*/
		glFlush();
		Sleep(1);
	}
	
	

}

void main(int argc, char **argv)
{

	cout<<"Input control point 1"<<endl;
	cin>>X1>>Y1;
	cout<<"Input control point 2"<<endl;
	cin>>X2>>Y2;
	cout<<"Input control point 3"<<endl;
	cin>>X3>>Y3;
	cout<<"Input control point 4"<<endl;
	cin>>X4>>Y4;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1366, 768);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("National Flag");
	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();
}

