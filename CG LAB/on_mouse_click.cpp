/*
#include <Windows.h>
#include <GL\glew.h>
#include <GL\freeglut.h>
#include <iostream>
using namespace std;
int x[4], y[4];
int k;
void myInit(void)
{
        glClearColor(0, 0, 0, 0);
        glColor3f(0, 0, 0);
        glPointSize(2.0);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluOrtho2D(-100, 100, -100, 100);
}

void OnMouse(int button, int state, int x1, int y1)
{
        if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
        {
                puts("Left button clicked");
                x[2] = (x1 - 400) / 4;
                y[2] = (400 - y1) / 4;
                cout << "click value" << endl;
                cout << x[2] << " " << y[2] << endl;
        }
}
void myDisplay()
{
        glClear(GL_COLOR_BUFFER_BIT);

        for (int i = -100; i < 100; i++)
        {
                glBegin(GL_POINTS);
                glColor3f(0, 0, 0);
                glVertex2i(i, 0);
                glVertex2i(0, i);
                glEnd();
        }
        double px, py;
        double t;
        for (t = 0.0; t <= 1.0; t += 0.001) {
                px = (1 - t)*(1 - t)*(1 - t)*x[0] + 3 * t*(1 - t)*(1 - t)*x[1] + 3 * t*t*(1 - t)*x[2] + t * t*t*x[3];
                py = (1 - t)*(1 - t)*(1 - t)*y[0] + 3 * t*(1 - t)*(1 - t)*y[1] + 3 * t*t*(1 - t)*y[2] + t * t*t*y[3];
                glBegin(GL_POINTS);
                glColor3f(0, 1, 0);
                glVertex2d(px, py);
                glEnd();
        }
        glFlush();
}

int main(int argc, char* argv[])
{
        cout << "enter the point 0" << endl;
        cin >> x[0] >> y[0];
        cout << "enter the point 1" << endl;
        cin >> x[1] >> y[1];
        cout << "enter the point 3" << endl;
        cin >> x[3] >> y[3];
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize(800, 800);
        glutInitWindowPosition(0, 0);
        glutCreateWindow("Hermite curve");
        glutMouseFunc(OnMouse);
        glutDisplayFunc(myDisplay);
        myInit();
        glutMainLoop();
        return 0;
}
*/