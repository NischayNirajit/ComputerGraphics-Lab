/*
#include<iostream> 
#include<GL/glut.h> 
#include<math.h>
#include<Windows.h>
#define pi 3.142857 
using namespace std;
int X0,Y0,X1,Y1,X2,Y2,X3,Y3;

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
	glColor3f(0.5, 0.0, 1.0);
	glVertex2f(-480,0);
	glVertex2f(480,0);
	glVertex2f(0,-320);
	glVertex2f(0,320);
	glEnd();
	
	X0 = rand()%200;
	X1 = rand()%200;
	X2 = rand()%200;
	X3 = rand()%200;

	Y0 = rand()%200;
	Y1 = rand()%200;
	Y2 = rand()%200;
	Y3 = rand()%200;
	float x,y;
	float h0,h1,h2,h3;
	float u;
	for(u=0;u<=1;u+=0.001){
		h0 = (-9/2)*(u*u*u) + 9*(u*u) - (11/2)*u + 1;
		h1 = (27/2)*(u*u*u) - (45/2)*(u*u) + 9*u;
		h2 = (-27/2)*(u*u*u) + 18*(u*u) - (9/2)*u;
		h3 = (9/2)*(u*u*u)-(9/2)*(u*u)+u;
		x = h0*X0 + h1*X1 + h2*X2 + h3*X3;
		y = h0*Y0 + h1*Y1 + h2*Y2 + h3*Y3;
		double c1=1.0,c2=0.5,c3=1.0;
		c1 = c1<=0.0? 1.0 : c1-=0.05;
		c2 = c2>=1.0? 0.5 : c2+=0.1;
		c3 = c3<=0.0? 1.0 : c3-=0.01;
		glBegin(GL_POINTS);
		glColor3d(c1,c2,c3);
			glVertex2f(x,y);
		glEnd();
	}
	
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
        glutCreateWindow("cubic");
        myInit();

        glutDisplayFunc(display);
        glutMainLoop();
}
*/