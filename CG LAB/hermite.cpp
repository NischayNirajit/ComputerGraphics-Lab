
/*
#include <gl/glut.h>
#include <stdio.h>


int x1, y1, x2, y2,x_1,y_1,x_2,y_2;



void myInit(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
}

void draw_pixel(int x, int y) {
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();
}

void drawP()
{
	glPointSize(1.0);
	glColor3f(1,1,1);
	glBegin(GL_LINES);
	glVertex2i(x1,y1);
	glVertex2i(x2,y2);	
	glEnd();

	

	
}
void draw_curve() {	
	//drawP();
	double u,x,y;
	draw_pixel(x1, y1);
	draw_pixel(x2, y2);
	double f1,f2,f3,f4;
	for(u=0.01;u<1;u+=0.01)
	{
		f1 = ( 2 * u * u * u - 3 * u * u + 1 );
		f2 = ( -2 * u * u * u + 3 * u * u );
		f3 = ( u * u * u - 2 * u * u + u );
		f4 = ( u * u * u - u * u );
		x = f1 * x1 + f2 * x2 + f3 * x_1 + f4 * x_2;
		y = f1 * y1 + f2 * y2 + f3 * y_1 + f4 * y_2;
		draw_pixel(x, y);
	}

	
	for (int i = -100; i <= 100; i++)	//X and Y axis
	{
		draw_pixel(i, 0);
		draw_pixel(0, i);

	}
	for (int i = -2; i <= 2; i++)	
	{
		draw_pixel(95 + i, 4 + i);
		draw_pixel(95 - i, 4 + i);

	}
	for (int i = 0; i <= 2; i++)
	{
		draw_pixel(4 + i, 95 + i);
		draw_pixel(4 - i, 95 + i);
		draw_pixel(4, 95 - i);

	}

}

void myDisplay() {
	draw_curve();
	glFlush();
}

void main(int argc, char **argv) {

	printf("Enter (x1, y1, x2, y2,x1',y1',x2',y2')\n");
	scanf("%d %d %d %d %d %d %d %d ", &x1, &y1, &x2, &y2, &x_1,&y_1, &x_2, &y_2);

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Hermite Curve");
	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();
}
*/