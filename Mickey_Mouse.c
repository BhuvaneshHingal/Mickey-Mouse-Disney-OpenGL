/* A program for drawing a simple face of Disney's cartoon character - "Mickey Mouse". */
#include<stdio.h>
#include<math.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

void init()
{
    glOrtho(-10, 10, -10, 10, -10, 10); // describes a transformation that produces a parallel projection.
}

void MyDisplay()
{
    glClearColor(0.96f, 0.97f, 0.7f, 0.0f); // clear the color buffer. // 0-1
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.2, 0.3, .42); // give each vertex its own color.
    glPointSize(5); // size of the point
    glLineWidth(5);

    float PI = 2*acos(0);
    float x;
    //first ear
    for (x = 0; x <= PI*2; x += 0.001) 
    {
        glBegin(GL_LINES); // To draw lines
        glVertex2f(-2+1.5*sin(x), 1.5*cos(x));
        glVertex2f(-2+1.5*sin(x+0.03), 1.5*cos(x+0.03));
        glEnd(); // Finished drawing lines.
    }

    //second ear
    for (x = 0; x <= PI*2; x += 0.001) 
    {
        glBegin(GL_LINES); // To draw lines
        glVertex2f(2+1.5*sin(x), 1.5*cos(x));
        glVertex2f(2+1.5*sin(x+0.001), 1.5*cos(x+0.001));
        glEnd(); // Finished drawing lines.
    }

    //face structure
    for (x = 0; x <= PI*2; x += 0.001) 
    {
        glBegin(GL_POINTS); // To draw points
        glVertex2f(3.5*sin(x), -5+3.5*cos(x));
        glEnd(); // Finished drawing points.
    }

    //nose
    for (x = 0; x <= PI*2; x += 0.001) 
    {
        glBegin(GL_LINES); // To draw lines
        glVertex2f(1.2*sin(x), -5.7+0.7*cos(x));
        glVertex2f(1.2*sin(x+0.001), -5.7+0.7*cos(x+0.001));
        glEnd(); // Finished drawing lines.
    }

    //hair on nose
    for (x = -1.2; x <= 1.2; x += 0.001) 
    {
        glBegin(GL_LINES); // To draw lines
        glVertex2f(1.5*sin(x), -5.5+1*cos(x));
        glVertex2f(1.5*sin(x+0.001), -5.5+1*cos(x+0.001));
        glEnd(); // Finished drawing lines.
    }

    //first eye
    for (x = 0; x <= PI*2; x += 0.001) 
    {
        glBegin(GL_LINES); // To draw lines
        glVertex2f(-0.7+0.5*sin(x), -3.5+1*cos(x));
        glVertex2f(-0.7+0.5*sin(x+0.001), -3.5+1*cos(x+0.001));
        glEnd(); // Finished drawing lines.
    }

    //second eye
    for (x = 0; x <= PI*2; x += 0.001) 
    {
        glBegin(GL_LINES); // To draw lines
        glVertex2f(0.7+0.5*sin(x), -3.5+1*cos(x));
        glVertex2f(0.7+0.5*sin(x+0.001), -3.5+1*cos(x+0.001));
        glEnd(); // Finished drawing lines.
    }

    //second eyelid
    for (x = 0; x <= PI*2; x += 0.001)
    {
        glBegin(GL_LINES); // To draw lines
        glVertex2f(0.7+0.3*sin(x), -3.9+0.7*cos(x));
        glVertex2f(0.7+0.3*sin(x+0.001), -3.9+0.7*cos(x+0.001));
        glEnd(); // Finished drawing lines.
    }

    //first eyelid
    for (x = 0; x <= PI*2; x += 0.001)
    {
        glBegin(GL_LINES); // To draw lines
        glVertex2f(-0.7+0.3*sin(x), -3.9+0.7*cos(x));
        glVertex2f(-0.7+0.3*sin(x+0.001), -3.9+0.7*cos(x+0.001));
        glEnd(); // Finished drawing lines.
    }

    //face upper
    for (x = PI/2+0.3; x <= 3*PI/2-0.3; x += 0.001)
    {
        glBegin(GL_LINES); // To draw lines
        glVertex2f(2.5*sin(x), -5.1+2*cos(x));
        glVertex2f(2.5*sin(x+0.001), -5.1+2*cos(x+0.001));
        glEnd(); // Finished drawing lines.
    }

    //face lower
    for (x = PI/2; x <= 3*PI/2; x += 0.001)
    {
        glBegin(GL_LINES); // To draw lines
        glVertex2f(1.3*sin(x), -6.9+0.9*cos(x));
        glVertex2f(1.3*sin(x+0.001), -6.9+0.9*cos(x+0.001));
        glEnd(); // Finished drawing lines.
    }

    //face lower second
    for (x = PI/2+0.3; x <= 3*PI/2-0.3; x += 0.001) 
    {
        glBegin(GL_LINES); // To draw lines
        glVertex2f(2.5*sin(x), -5.1+2*cos(x));
        glVertex2f(2.5*sin(x+0.001), -5.1+2*cos(x+0.001));
        glEnd(); // Finished drawing lines.
    }

    glEnd();
    glFlush();
}

void main(int argc, char **argv)
{
    glutInit(&argc, argv); // This function will initialise the GLUT Library.
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 450); // Initialise window size.
    glutInitWindowPosition(100, 100); // Initialise window position.
    glutCreateWindow("Mickey Mouse"); // Creates a window or Dialog box.
    init(); // Initialise other aspects.
    glutDisplayFunc(MyDisplay); // shows what MyDisplay function is.
    glutMainLoop(); // event processing or event handling.
}

