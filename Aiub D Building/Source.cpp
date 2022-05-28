#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
/* Initialize OpenGL Graphics */
#include<math.h>

# define PI           3.14159265358979323846
void initGL() {
    // Set "clearing" or background color
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    int i;
    GLfloat x = -0.4f; GLfloat y = +0.65f; GLfloat radius = .2f;
    int triangleAmount = 1000000; //# of triangles used to draw circle
    GLfloat twicePi = 2.0f * PI;

    glLoadIdentity();

    glBegin(GL_QUADS);  //Main Body 1.1
    glColor3ub(231, 229, 213);
    glVertex2f(-0.80f, 0.50f);
    glVertex2f(-0.80f, -0.70f);
    glVertex2f(0.60f, -0.80f);
    glVertex2f(0.60f, 0.70f);
    glEnd();

    glBegin(GL_QUADS);  //Main Body 1.1.2 windows
    glColor3ub(72, 72, 85);
    glVertex2f(-0.75f, 0.48f);
    glVertex2f(-0.75f, 0.36f);
    glVertex2f(0.55f, 0.53f);
    glVertex2f(0.55f, 0.66f);
    glEnd();

    glTranslatef(0.0f, -0.12f, 0.0f); //Main Body 1.1.2 windows Copy
    glBegin(GL_QUADS);  
    glColor3ub(194, 233, 240);
    glVertex2f(-0.75f, 0.45f);
    glVertex2f(-0.75f, 0.33f);
    glVertex2f(0.55f, 0.50f);
    glVertex2f(0.55f, 0.63f);
    glEnd();

    glTranslatef(0.0f, -0.15f, 0.0f); 
    glBegin(GL_QUADS);
    glColor3ub(194, 233, 240);
    glVertex2f(-0.75f, 0.45f);
    glVertex2f(-0.75f, 0.33f);
    glVertex2f(0.55f, 0.50f);
    glVertex2f(0.55f, 0.63f);
    glEnd();
    glLoadIdentity();  //Main Body 1.1.2 windows Copy End


    glBegin(GL_QUADS);  //Main Body 1.1 Tree
    glColor3ub(58, 59, 62);
    glVertex2f(-0.76f, 0.15f);
    glVertex2f(-0.76f, 0.10f);
    glVertex2f(-0.75f, 0.10f);
    glVertex2f(-0.75f, 0.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(10, 165, 55);
    glVertex2f(-0.80f, 0.13f);
    glVertex2f(-0.70f, 0.13f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.15f);
    glVertex2f(-0.70f, 0.15f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.17f);
    glVertex2f(-0.70f, 0.17f);
    glVertex2f(-0.75f, 0.20f);
    glEnd();

    glTranslatef(0.20f, 0.02f, 0.0f); //Main Body 1.1 Tree Copy
    glBegin(GL_QUADS); 
    glColor3ub(58, 59, 62);
    glVertex2f(-0.76f, 0.15f);
    glVertex2f(-0.76f, 0.10f);
    glVertex2f(-0.75f, 0.10f);
    glVertex2f(-0.75f, 0.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(10, 165, 55);
    glVertex2f(-0.80f, 0.13f);
    glVertex2f(-0.70f, 0.13f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.15f);
    glVertex2f(-0.70f, 0.15f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.17f);
    glVertex2f(-0.70f, 0.17f);
    glVertex2f(-0.75f, 0.20f);
    glEnd();

    glTranslatef(0.20f, 0.02f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(58, 59, 62);
    glVertex2f(-0.76f, 0.15f);
    glVertex2f(-0.76f, 0.10f);
    glVertex2f(-0.75f, 0.10f);
    glVertex2f(-0.75f, 0.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(10, 165, 55);
    glVertex2f(-0.80f, 0.13f);
    glVertex2f(-0.70f, 0.13f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.15f);
    glVertex2f(-0.70f, 0.15f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.17f);
    glVertex2f(-0.70f, 0.17f);
    glVertex2f(-0.75f, 0.20f);
    glEnd();

    glTranslatef(0.20f, 0.02f, 0.0f); 
    glBegin(GL_QUADS);
    glColor3ub(58, 59, 62);
    glVertex2f(-0.76f, 0.15f);
    glVertex2f(-0.76f, 0.10f);
    glVertex2f(-0.75f, 0.10f);
    glVertex2f(-0.75f, 0.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(10, 165, 55);
    glVertex2f(-0.80f, 0.13f);
    glVertex2f(-0.70f, 0.13f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.15f);
    glVertex2f(-0.70f, 0.15f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.17f);
    glVertex2f(-0.70f, 0.17f);
    glVertex2f(-0.75f, 0.20f);
    glEnd();

    glTranslatef(0.20f, 0.02f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(58, 59, 62);
    glVertex2f(-0.76f, 0.15f);
    glVertex2f(-0.76f, 0.10f);
    glVertex2f(-0.75f, 0.10f);
    glVertex2f(-0.75f, 0.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(10, 165, 55);
    glVertex2f(-0.80f, 0.13f);
    glVertex2f(-0.70f, 0.13f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.15f);
    glVertex2f(-0.70f, 0.15f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.17f);
    glVertex2f(-0.70f, 0.17f);
    glVertex2f(-0.75f, 0.20f);
    glEnd();

    glTranslatef(0.20f, 0.02f, 0.0f); 
    glBegin(GL_QUADS);
    glColor3ub(58, 59, 62);
    glVertex2f(-0.76f, 0.15f);
    glVertex2f(-0.76f, 0.10f);
    glVertex2f(-0.75f, 0.10f);
    glVertex2f(-0.75f, 0.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(10, 165, 55);
    glVertex2f(-0.80f, 0.13f);
    glVertex2f(-0.70f, 0.13f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.15f);
    glVertex2f(-0.70f, 0.15f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.17f);
    glVertex2f(-0.70f, 0.17f);
    glVertex2f(-0.75f, 0.20f);
    glEnd();

    glTranslatef(0.20f, 0.02f, 0.0f); 
    glBegin(GL_QUADS);
    glColor3ub(58, 59, 62);
    glVertex2f(-0.76f, 0.15f);
    glVertex2f(-0.76f, 0.10f);
    glVertex2f(-0.75f, 0.10f);
    glVertex2f(-0.75f, 0.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(10, 165, 55);
    glVertex2f(-0.80f, 0.13f);
    glVertex2f(-0.70f, 0.13f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.15f);
    glVertex2f(-0.70f, 0.15f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.17f);
    glVertex2f(-0.70f, 0.17f);
    glVertex2f(-0.75f, 0.20f);
    glEnd();
    glLoadIdentity();  //Main Body 1.1 Tree Copy End

    glBegin(GL_QUADS);  //Main Body 1.2
    glColor3ub(231, 229, 213);
    glVertex2f(-0.85f, 0.10f);
    glVertex2f(-0.85f, -0.70f);
    glVertex2f(0.45f, -0.80f);
    glVertex2f(0.47f, 0.22f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(194, 233, 240);
    glVertex2f(-0.83f, 0.05f);
    glVertex2f(-0.83f, -0.07f);
    glVertex2f(0.445f, 0.02f);
    glVertex2f(0.45f, 0.15f);
    glEnd();

    glTranslatef(0.0f, -0.16f, 0.0f); //Main Body 1.1.2 windows Copy
    glBegin(GL_QUADS);
    glColor3ub(194, 233, 240);
    glVertex2f(-0.83f, 0.05f);
    glVertex2f(-0.83f, -0.07f);
    glVertex2f(0.445f, 0.02f);
    glVertex2f(0.45f, 0.15f);
    glEnd();
    glLoadIdentity();  //Main Body 1.1.2 windows Copy End

    glTranslatef(-0.09f, -0.30f, 0.0f);
    glBegin(GL_QUADS);  //Main Body 1.2 Tree
    glColor3ub(58, 59, 62);
    glVertex2f(-0.76f, 0.15f);
    glVertex2f(-0.76f, 0.10f);
    glVertex2f(-0.75f, 0.10f);
    glVertex2f(-0.75f, 0.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(10, 165, 55);
    glVertex2f(-0.80f, 0.13f);
    glVertex2f(-0.70f, 0.13f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.15f);
    glVertex2f(-0.70f, 0.15f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.17f);
    glVertex2f(-0.70f, 0.17f);
    glVertex2f(-0.75f, 0.20f);
    glEnd();

    glTranslatef(0.20f, 0.01f, 0.0f); //Main Body 1.2 Tree Copy
    glBegin(GL_QUADS);
    glColor3ub(58, 59, 62);
    glVertex2f(-0.76f, 0.15f);
    glVertex2f(-0.76f, 0.10f);
    glVertex2f(-0.75f, 0.10f);
    glVertex2f(-0.75f, 0.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(10, 165, 55);
    glVertex2f(-0.80f, 0.13f);
    glVertex2f(-0.70f, 0.13f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.15f);
    glVertex2f(-0.70f, 0.15f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.17f);
    glVertex2f(-0.70f, 0.17f);
    glVertex2f(-0.75f, 0.20f);
    glEnd();

    glTranslatef(0.20f, 0.01f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(58, 59, 62);
    glVertex2f(-0.76f, 0.15f);
    glVertex2f(-0.76f, 0.10f);
    glVertex2f(-0.75f, 0.10f);
    glVertex2f(-0.75f, 0.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(10, 165, 55);
    glVertex2f(-0.80f, 0.13f);
    glVertex2f(-0.70f, 0.13f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.15f);
    glVertex2f(-0.70f, 0.15f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.17f);
    glVertex2f(-0.70f, 0.17f);
    glVertex2f(-0.75f, 0.20f);
    glEnd();

    glTranslatef(0.20f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(58, 59, 62);
    glVertex2f(-0.76f, 0.15f);
    glVertex2f(-0.76f, 0.10f);
    glVertex2f(-0.75f, 0.10f);
    glVertex2f(-0.75f, 0.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(10, 165, 55);
    glVertex2f(-0.80f, 0.13f);
    glVertex2f(-0.70f, 0.13f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.15f);
    glVertex2f(-0.70f, 0.15f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.17f);
    glVertex2f(-0.70f, 0.17f);
    glVertex2f(-0.75f, 0.20f);
    glEnd();

    glTranslatef(0.20f, 0.01f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(58, 59, 62);
    glVertex2f(-0.76f, 0.15f);
    glVertex2f(-0.76f, 0.10f);
    glVertex2f(-0.75f, 0.10f);
    glVertex2f(-0.75f, 0.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(10, 165, 55);
    glVertex2f(-0.80f, 0.13f);
    glVertex2f(-0.70f, 0.13f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.15f);
    glVertex2f(-0.70f, 0.15f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.17f);
    glVertex2f(-0.70f, 0.17f);
    glVertex2f(-0.75f, 0.20f);
    glEnd();

    glTranslatef(0.20f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(58, 59, 62);
    glVertex2f(-0.76f, 0.15f);
    glVertex2f(-0.76f, 0.10f);
    glVertex2f(-0.75f, 0.10f);
    glVertex2f(-0.75f, 0.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(10, 165, 55);
    glVertex2f(-0.80f, 0.13f);
    glVertex2f(-0.70f, 0.13f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.15f);
    glVertex2f(-0.70f, 0.15f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.17f);
    glVertex2f(-0.70f, 0.17f);
    glVertex2f(-0.75f, 0.20f);
    glEnd();

    glTranslatef(0.20f, 0.01f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(58, 59, 62);
    glVertex2f(-0.76f, 0.15f);
    glVertex2f(-0.76f, 0.10f);
    glVertex2f(-0.75f, 0.10f);
    glVertex2f(-0.75f, 0.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(10, 165, 55);
    glVertex2f(-0.80f, 0.13f);
    glVertex2f(-0.70f, 0.13f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.15f);
    glVertex2f(-0.70f, 0.15f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.17f);
    glVertex2f(-0.70f, 0.17f);
    glVertex2f(-0.75f, 0.20f);
    glEnd();

    glTranslatef(0.20f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(58, 59, 62);
    glVertex2f(-0.76f, 0.15f);
    glVertex2f(-0.76f, 0.10f);
    glVertex2f(-0.75f, 0.10f);
    glVertex2f(-0.75f, 0.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(10, 165, 55);
    glVertex2f(-0.80f, 0.13f);
    glVertex2f(-0.70f, 0.13f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.15f);
    glVertex2f(-0.70f, 0.15f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.17f);
    glVertex2f(-0.70f, 0.17f);
    glVertex2f(-0.75f, 0.20f);
    glEnd();

    glTranslatef(0.20f, 0.01f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(58, 59, 62);
    glVertex2f(-0.76f, 0.15f);
    glVertex2f(-0.76f, 0.10f);
    glVertex2f(-0.75f, 0.10f);
    glVertex2f(-0.75f, 0.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(10, 165, 55);
    glVertex2f(-0.80f, 0.13f);
    glVertex2f(-0.70f, 0.13f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.15f);
    glVertex2f(-0.70f, 0.15f);
    glVertex2f(-0.75f, 0.20f);
    glVertex2f(-0.80f, 0.17f);
    glVertex2f(-0.70f, 0.17f);
    glVertex2f(-0.75f, 0.20f);
    glEnd();

    glLoadIdentity();  //Main Body 1.1 Tree Copy End

    glBegin(GL_QUADS);  //Main Body 1.3
    glColor3ub(231, 229, 213);
    glVertex2f(-0.88f, -0.20f);
    glVertex2f(-0.88f, -0.70f);
    glVertex2f(0.38f, -0.90f);
    glVertex2f(0.42f, -0.17f);
    glEnd();

    glBegin(GL_QUADS);  //Main Body 1.3.1 window
    glColor3ub(72, 72, 85);
    glVertex2f(-0.85f, -0.25f);
    glVertex2f(-0.85f, -0.35f);
    glVertex2f(0.30f, -0.35f);
    glVertex2f(0.30f, -0.22f);
    glEnd();

    glBegin(GL_QUADS);  //Main Body 1.3.2 window
    glColor3ub(72, 72, 85);
    glVertex2f(-0.85f, -0.37f);
    glVertex2f(-0.85f, -0.47f);
    glVertex2f(0.30f, -0.54f);
    glVertex2f(0.30f, -0.37f);
    glEnd();

    glBegin(GL_QUADS);  //Main Body 1.3.3 window
    glColor3ub(72, 72, 85);
    glVertex2f(-0.85f, -0.50f);
    glVertex2f(-0.85f, -0.60f);
    glVertex2f(0.30f, -0.75f);
    glVertex2f(0.30f, -0.58f);
    glEnd();

    glBegin(GL_QUADS);  //Side Body 1.1
    glColor3ub(183, 184, 189);
    glVertex2f(0.61f, 0.89f);
    glVertex2f(0.61f, -0.80f);
    glVertex2f(0.80f, -0.83f);
    glVertex2f(0.80f, 0.92f);
    glEnd();

    glBegin(GL_QUADS);  //Side Body 1.2
    glColor3ub(141, 143, 149);
    glVertex2f(0.80f, 0.92f);
    glVertex2f(0.80f, -0.83f);
    glVertex2f(0.90f, -0.80f);
    glVertex2f(0.90f, 0.88f);
    glEnd();

    glBegin(GL_QUADS);  //Side Body 1.1 Widnow
    glColor3ub(194, 233, 240);
    glVertex2f(0.73f, 0.70f);
    glVertex2f(0.73f, 0.55f);
    glVertex2f(0.78f, 0.56f);
    glVertex2f(0.78f, 0.71f);
    glEnd();

    glBegin(GL_LINES);  //Side Body 1.1 Widnow Line
    glColor3ub(14, 23, 20);
    glVertex2f(0.73f, 0.60f);
    glVertex2f(0.78f, 0.61f);
    glVertex2f(0.73f, 0.65f);
    glVertex2f(0.78f, 0.66f);
    glEnd();

    glTranslatef(0.0f, -0.20f, 0.0f); //Side Body 1.1 Widnow Copy
    glBegin(GL_QUADS); 
    glColor3ub(194, 233, 240);
    glVertex2f(0.73f, 0.70f);
    glVertex2f(0.73f, 0.55f);
    glVertex2f(0.78f, 0.56f);
    glVertex2f(0.78f, 0.71f);
    glEnd();

    glBegin(GL_LINES); 
    glColor3ub(14, 23, 20);
    glVertex2f(0.73f, 0.60f);
    glVertex2f(0.78f, 0.61f);
    glVertex2f(0.73f, 0.65f);
    glVertex2f(0.78f, 0.66f);
    glEnd();

    glTranslatef(0.0f, -0.20f, 0.0f);
    glBegin(GL_QUADS);  
    glColor3ub(194, 233, 240);
    glVertex2f(0.73f, 0.70f);
    glVertex2f(0.73f, 0.55f);
    glVertex2f(0.78f, 0.56f);
    glVertex2f(0.78f, 0.71f);
    glEnd();

    glBegin(GL_LINES); 
    glColor3ub(14, 23, 20);
    glVertex2f(0.73f, 0.60f);
    glVertex2f(0.78f, 0.61f);
    glVertex2f(0.73f, 0.65f);
    glVertex2f(0.78f, 0.66f);
    glEnd();

    glTranslatef(0.0f, -0.20f, 0.0f);
    glBegin(GL_QUADS);  
    glColor3ub(194, 233, 240);
    glVertex2f(0.73f, 0.70f);
    glVertex2f(0.73f, 0.55f);
    glVertex2f(0.78f, 0.56f);
    glVertex2f(0.78f, 0.71f);
    glEnd();

    glBegin(GL_LINES); 
    glColor3ub(14, 23, 20);
    glVertex2f(0.73f, 0.60f);
    glVertex2f(0.78f, 0.61f);
    glVertex2f(0.73f, 0.65f);
    glVertex2f(0.78f, 0.66f);
    glEnd();

    glTranslatef(0.0f, -0.20f, 0.0f);
    glBegin(GL_QUADS);  
    glColor3ub(194, 233, 240);
    glVertex2f(0.73f, 0.70f);
    glVertex2f(0.73f, 0.55f);
    glVertex2f(0.78f, 0.56f);
    glVertex2f(0.78f, 0.71f);
    glEnd();

    glBegin(GL_LINES); 
    glColor3ub(14, 23, 20);
    glVertex2f(0.73f, 0.60f);
    glVertex2f(0.78f, 0.61f);
    glVertex2f(0.73f, 0.65f);
    glVertex2f(0.78f, 0.66f);
    glEnd();

    glTranslatef(0.0f, -0.20f, 0.0f);
    glBegin(GL_QUADS);  
    glColor3ub(194, 233, 240);
    glVertex2f(0.73f, 0.70f);
    glVertex2f(0.73f, 0.55f);
    glVertex2f(0.78f, 0.56f);
    glVertex2f(0.78f, 0.71f);
    glEnd();

    glBegin(GL_LINES);  
    glColor3ub(14, 23, 20);
    glVertex2f(0.73f, 0.60f);
    glVertex2f(0.78f, 0.61f);
    glVertex2f(0.73f, 0.65f);
    glVertex2f(0.78f, 0.66f);
    glEnd();

    glTranslatef(0.0f, -0.20f, 0.0f);
    glBegin(GL_QUADS); 
    glColor3ub(194, 233, 240);
    glVertex2f(0.73f, 0.70f);
    glVertex2f(0.73f, 0.55f);
    glVertex2f(0.78f, 0.56f);
    glVertex2f(0.78f, 0.71f);
    glEnd();

    glBegin(GL_LINES); 
    glColor3ub(14, 23, 20);
    glVertex2f(0.73f, 0.60f);
    glVertex2f(0.78f, 0.61f);
    glVertex2f(0.73f, 0.65f);
    glVertex2f(0.78f, 0.66f);
    glEnd();
    glLoadIdentity(); //Side Body 1.1 Widnow Copy End

    glBegin(GL_QUADS);  //Main Body 1.4
    glColor3ub(202, 208, 208);
    glVertex2f(0.60f, 0.70f);
    glVertex2f(0.60f, -0.80f);
    glVertex2f(0.65f, -0.80f);
    glVertex2f(0.65f, 0.68f);

    glVertex2f(0.47f, 0.22f);
    glVertex2f(0.45f, -0.80f);
    glVertex2f(0.60f, -0.80f);
    glVertex2f(0.60f, 0.24f);

    glVertex2f(0.39f, -0.175f);
    glVertex2f(0.38f, -0.90f);
    glVertex2f(0.65f, -0.80f);
    glVertex2f(0.47f, -0.16f);
    glEnd();

    

    
    


    glBegin(GL_QUADS);  //Main Gate Stairs
    glColor3ub(178, 180, 181);
    glVertex2f(-0.80f, -0.67f);
    glVertex2f(-0.81f, -0.69f);
    glVertex2f(-0.55f, -0.72f);
    glVertex2f(-0.54f, -0.69f);

    glColor3ub(194, 23, 40);
    glVertex2f(-0.81f, -0.69f);
    glVertex2f(-0.81f, -0.71f);
    glVertex2f(-0.55f, -0.74f);
    glVertex2f(-0.55f, -0.72f);
    glEnd();

    glTranslatef(-0.01f, -0.05f, 0.0f); //Main Gate Stairs Copy
    glBegin(GL_QUADS);  
    glColor3ub(178, 180, 181);
    glVertex2f(-0.80f, -0.67f);
    glVertex2f(-0.81f, -0.69f);
    glVertex2f(-0.55f, -0.72f);
    glVertex2f(-0.54f, -0.69f);

    glColor3ub(194, 23, 40);
    glVertex2f(-0.81f, -0.69f);
    glVertex2f(-0.81f, -0.71f);
    glVertex2f(-0.55f, -0.74f);
    glVertex2f(-0.55f, -0.72f);
    glEnd();

    glTranslatef(-0.01f, -0.05f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(178, 180, 181);
    glVertex2f(-0.80f, -0.67f);
    glVertex2f(-0.81f, -0.69f);
    glVertex2f(-0.55f, -0.72f);
    glVertex2f(-0.54f, -0.69f);

    glColor3ub(194, 23, 40);
    glVertex2f(-0.81f, -0.69f);
    glVertex2f(-0.81f, -0.71f);
    glVertex2f(-0.55f, -0.74f);
    glVertex2f(-0.55f, -0.72f);
    glEnd();

    glTranslatef(-0.01f, -0.05f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(178, 180, 181);
    glVertex2f(-0.80f, -0.67f);
    glVertex2f(-0.81f, -0.69f);
    glVertex2f(-0.55f, -0.72f);
    glVertex2f(-0.54f, -0.69f);

    glColor3ub(194, 23, 40);
    glVertex2f(-0.81f, -0.69f);
    glVertex2f(-0.81f, -0.71f);
    glVertex2f(-0.55f, -0.74f);
    glVertex2f(-0.55f, -0.72f);
    glEnd();

    glTranslatef(-0.01f, -0.05f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(178, 180, 181);
    glVertex2f(-0.80f, -0.67f);
    glVertex2f(-0.81f, -0.69f);
    glVertex2f(-0.55f, -0.72f);
    glVertex2f(-0.54f, -0.69f);

    glColor3ub(194, 23, 40);
    glVertex2f(-0.81f, -0.69f);
    glVertex2f(-0.81f, -0.71f);
    glVertex2f(-0.55f, -0.74f);
    glVertex2f(-0.55f, -0.72f);
    glEnd();
    glLoadIdentity(); //Main Gate Stairs Copy End

    glBegin(GL_QUADS);  //Main Gate
    glColor3ub(62, 66, 97);
    glVertex2f(-0.80f, -0.57f);
    glVertex2f(-0.86f, -0.68f);
    glVertex2f(-0.55f, -0.72f);
    glVertex2f(-0.50f, -0.60f);
    glEnd();

    glBegin(GL_QUADS);  //Main Gate Stand
    glColor3ub(254, 0, 0);
    glVertex2f(-0.86f, -0.68f);
    glVertex2f(-0.86f, -0.80f);
    glVertex2f(-0.85f, -0.80f);
    glVertex2f(-0.85f, -0.68f);
    glEnd();

    glTranslatef(0.10f, -0.015f, 0.0f);
    glBegin(GL_QUADS);  //Main Gate Stand Copy
    glColor3ub(254, 0, 0);
    glVertex2f(-0.86f, -0.68f);
    glVertex2f(-0.86f, -0.80f);
    glVertex2f(-0.85f, -0.80f);
    glVertex2f(-0.85f, -0.68f);
    glEnd();

    glTranslatef(0.10f, -0.015f, 0.0f);
    glBegin(GL_QUADS);  //Main Gate Stand Copy
    glColor3ub(254, 0, 0);
    glVertex2f(-0.86f, -0.68f);
    glVertex2f(-0.86f, -0.80f);
    glVertex2f(-0.85f, -0.80f);
    glVertex2f(-0.85f, -0.68f);
    glEnd();

    glTranslatef(0.10f, -0.015f, 0.0f);
    glBegin(GL_QUADS);  //Main Gate Stand Copy
    glColor3ub(254, 0, 0);
    glVertex2f(-0.86f, -0.68f);
    glVertex2f(-0.86f, -0.80f);
    glVertex2f(-0.85f, -0.80f);
    glVertex2f(-0.85f, -0.68f);
    glEnd();
    glLoadIdentity();

    glFlush();   // Render now
}
/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv); // Initialize GLUT
    glutInitWindowSize(1080, 720); // Set the window's initial width & height - non-square
    glutInitWindowPosition(150, 20); // Position the window's initial top-left corner
    glutCreateWindow(" D Building, Munna_18-36025-1"); // Create window with the given title
    glutDisplayFunc(display);  // Register callback handler for window re-paint event
    //glutReshapeFunc(reshape);  // Register callback handler for window re-size event
    initGL();  // Our own OpenGL initialization
    glutMainLoop();  // Enter the infinite event-processing loop
    return 0;
}