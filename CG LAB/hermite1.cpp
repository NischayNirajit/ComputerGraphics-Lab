
/*
#include<iostream> 
#include<GL/glut.h> 
#include<math.h>
#include<Windows.h>
#define pi 3.142857 
using namespace std;
double X0,Y0,Z0,X1,Y1,Z1,V0,V1,alpha0,beta0,gamma0,alpha1,beta1,gamma1;
void myInit(void)
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 1.0, 0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-480, 480, -320, 320);
}

void display(){
	
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
	glVertex2d(X0,Y0);
	glVertex2d(X1,Y1);
	double x_0,x_1,y_0,y_1;
	double h1, h2, h3, h4;
	double c0,c1,s0,s1;
	c0 = cos((2*pi/360)*alpha0);
	c1 = cos((2*pi/360)*alpha1);
	s0 = sin((2*pi/360)*beta0);
	s1 = sin((2*pi/360)*beta1);
	X0 = rand()%200;
	Y0 = rand()%200;
	Z0 = rand()%200;
	alpha0 = rand()%200;
	beta0 = rand()%200;
	gamma0 = acos(c0*c0 + s0*s0);
	gamma0 = acos(c1*c1 + s1*s1);

	X1 = rand()%200;
	Y1 = rand()%200;
	Z1 = rand()%200;
	alpha1 = rand()%200;
	beta1 = rand()%200;
	gamma1 = rand()%200;
	x_0 = V0 * cos((2*pi/360)*alpha0);
	x_1 = V1 * cos((2*pi/360)*alpha1);
	y_0 = V0 * sin((2*pi/360)*beta0);
	y_1 = V1 * sin((2*pi/360)*beta1);
	
	for(u = 0; u<=1; u+=0.01){
		h1 = 2*u*u*u-3*u*u+1;
		h2 = -2*u*u*u+3*u*u;
		h3 = u*u*u-2*u*u+u;
		h4 = u*u*u-u*u;
		x = h1*X0 + h2*X1 + h3*x_0 + h4*x_1;
		y = h1*Y0 + h2*Y1 + h3*y_0 + h4*y_1;
		
		glColor3f(0.5, 0.0, 1.0);
		glBegin(GL_POINTS);
		
			
			glVertex2d(x,y);
		glEnd();
	}
	
	glFlush();
	Sleep(1000);
	}
}
int main(int argc, char** argv)
{
	
		
		cout<<"Input the magnitude of tangents"<<endl;
		cin>>V0>>V1;
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize(1366, 768);
        glutInitWindowPosition(0, 0);
        glutCreateWindow("hermite curve");
        myInit();
        glutDisplayFunc(display);
        glutMainLoop();
}
*/