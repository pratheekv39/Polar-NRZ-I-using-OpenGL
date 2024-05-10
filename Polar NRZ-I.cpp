#include <stdio.h>
#include <GL/glut.h>

int prevbit = 0;
float y0 = 0.2;
float x0 = -1;

void display()
{
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(-1, 0);
    glVertex2f(1, 0);
    glEnd();
    glFlush();
}

void draw0()
{
    glBegin(GL_LINE_STRIP);
    glColor3f(1, 1, 1);
    glVertex2f(x0, y0);
    x0 = x0 + 0.1;
    glVertex2f(x0, y0);
    glEnd();
    glFlush();
}

void draw1()
{
    if (prevbit == 0)
    {

        if (y0 > 0.0)
        {

            glBegin(GL_LINE_STRIP);
            glColor3f(1, 1, 1);
            glVertex2f(x0, y0);
            y0 = y0 - 0.4;
            glVertex2f(x0, y0);
            x0 = x0 + 0.1;
            glVertex2f(x0, y0);

            glEnd();
            glFlush();
        }
        else
        {
            glBegin(GL_LINE_STRIP);
            glColor3f(1, 1, 1);
            glVertex2f(x0, y0);
            y0 = y0 + 0.4;
            glVertex2f(x0, y0);
            x0 = x0 + 0.1;
            glVertex2f(x0, y0);

            glEnd();
            glFlush();
        }
    }
    else
    {
        if (y0 > 0.0)
        {

            glBegin(GL_LINE_STRIP);
            glColor3f(1, 1, 1);
            glVertex2f(x0, y0);
            y0 = y0 - 0.4;
            glVertex2f(x0, y0);
            x0 = x0 + 0.1;
            glVertex2f(x0, y0);

            glEnd();
            glFlush();
        }
        else
        {
            glBegin(GL_LINE_STRIP);
            glColor3f(1, 1, 1);
            glVertex2f(x0, y0);
            y0 = y0 + 0.4;
            glVertex2f(x0, y0);
            x0 = x0 + 0.1;
            glVertex2f(x0, y0);

            glEnd();
            glFlush();
        }
    }
}

void myKey(unsigned char key, int x, int y)
{
    glLineWidth(4.0f);
    if (key == '0')
    {
        draw0();
        prevbit = 0;
    }
    else if (key == '1')
    {
        draw1();
        prevbit = 1;
    }
    glLineWidth(1.0f);
    glutPostRedisplay();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(500, 500);
    glutCreateWindow("NRZ-I");
    glutKeyboardFunc(myKey);
    glutDisplayFunc(display);
    glutMainLoop();
}