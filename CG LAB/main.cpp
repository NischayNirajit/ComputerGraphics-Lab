#if 0

#include<iostream> 
#include<GL/glut.h> 
#include<math.h>
#include<Windows.h>
#define pi 3.142857 
using namespace std;
float xc,yc,r,rho;
float w,h;
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
	gluOrtho2D(-300, 300, -250, 250);
}
void display()
{
	while(1){
    glClear(GL_COLOR_BUFFER_BIT);
	glScalef(1, 1, 1);
	glBegin(GL_LINES);
	glVertex2f(-600,0);
	glVertex2f(600,0);
	glVertex2f(0,-450);
	glVertex2f(0,450);
	glEnd();
	glBegin(GL_POINTS);
	float i,j;
	for(i=-w/2; i<=w/2; i+=0.5){
		for(j=-h/2; j<=h/2; j+=0.5){
			if(i>=-w/2 && i<(-w/2+w/7))
				glColor3f(0.0, 1.0, 0.0);
			else if(i>=-w/2+w/7 && i<(-w/2+2*w/7))
				glColor3f(1.0, 1.0, 0.0);
			else if(i>=-w/2+2*w/7 && i<(-w/2+3*w/7))
				glColor3f(0.0, 1.0, 1.0);
			else if(i>=-w/2+3*w/7 && i<(-w/2+4*w/7))
				glColor3f(0.5, 1.0, 0.0);
			else if(i>=-w/2+4*w/7 && i<(-w/2+5*w/7))
				glColor3f(0.5, 0.0, 0.0);
			else if(i>=-w/2+5*w/7 && i<(-w/2+6*w/7))
				glColor3f(0.0, 1.0, 0.5);
			else if(i>=-w/2 && i<(-w/2+w/7))
				glColor3f(0.5, 1.0, 0.5);

			float i_, j_;
			float d = sqrt((i-xc)*(i-xc)+(j-yc)*(j-yc));
			if(d<r){
			i_ = i+rho*(1-d/r)*((i-xc)/r);
			j_ = j+rho*(1-d/r)*((j-yc)/r);
			glVertex2f(i_,j_);
			}
			else{
				glVertex2f(i,j);
			}
		}
	}
	
	
	xc+=10;
	yc+=10;
	Sleep(1000);
	
	glEnd();
	glFlush();
	}
}

int main(int argc, char** argv)
{
	cout<<"Input width and height"<<endl;
	cin>>w>>h;
	cout<<"Input the centre"<<endl;
	cin>>xc>>yc;
	cout<<"Input the radius"<<endl;
	cin>>r;
	cout<<"Input the density"<<endl;
	cin>>rho;
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

        // giving window size in X- and Y- direction 
        glutInitWindowSize(700, 600);
        glutInitWindowPosition(0, 0);

        // Giving name to window 
        glutCreateWindow("spherize");
        myInit();

        glutDisplayFunc(display);
        glutMainLoop();
}
#endif