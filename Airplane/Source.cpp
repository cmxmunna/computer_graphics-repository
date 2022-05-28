#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>

# define PI           3.14159265358979323846

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

	glBegin(GL_POLYGON); // Main Body
	glColor3ub(198, 172, 28);
	glVertex2f(0.0f, 0.90f);
	glVertex2f(-0.10f, 0.80f);
	glVertex2f(-0.17f, 0.70f);
	glVertex2f(-0.22f, 0.60f);
	glVertex2f(-0.24f, 0.50f);
	glVertex2f(-0.23f, 0.0f);
	glVertex2f(-0.10f, -0.20f);
	glVertex2f(0.10f, -0.20f);
	glVertex2f(0.23f, 0.0f);
	glVertex2f(0.24f, 0.50f);
	glVertex2f(0.22f, 0.60f);
	glVertex2f(0.17f, 0.70f);
	glVertex2f(0.10f, 0.80f);
	glVertex2f(0.0f, 0.90f);
	glEnd();

	glBegin(GL_POLYGON); // Main Body RED
	glColor3ub(202, 73, 20);
	glVertex2f(0.0f, 0.90f);
	glVertex2f(-0.10f, 0.80f);
	glVertex2f(-0.17f, 0.70f);
	glVertex2f(-0.22f, 0.60f);
	glVertex2f(0.0f, 0.70f);
	glVertex2f(0.22f, 0.60f);
	glVertex2f(0.17f, 0.70f);
	glVertex2f(0.10f, 0.80f);
	glVertex2f(0.0f, 0.90f);
	glEnd();

	glBegin(GL_POLYGON); // Main Wings
	glColor3ub(198, 172, 28);
	glVertex2f(-0.90f, 0.01f);
	glVertex2f(-0.50f, 0.0f);
	glVertex2f(0.50f, 0.0f);
	glVertex2f(0.90f, 0.02f);
	glVertex2f(0.94f, 0.06f);
	glVertex2f(0.89f, 0.15f);
	glVertex2f(0.83f, 0.20f);
	glVertex2f(0.60f, 0.25f);
	glVertex2f(-0.60f, 0.25f);
	glVertex2f(-0.83f, 0.20f);
	glVertex2f(-0.89f, 0.15f);
	glVertex2f(-0.94f, 0.06f);
	glVertex2f(-0.90f, 0.02f);
	glEnd();

	glBegin(GL_POLYGON); // Main Wings RED
	glColor3ub(202, 73, 20);
	glVertex2f(0.89f, 0.15f);
	glVertex2f(0.83f, 0.20f);
	glVertex2f(0.60f, 0.25f);
	glVertex2f(-0.60f, 0.25f);
	glVertex2f(-0.83f, 0.20f);
	glVertex2f(-0.89f, 0.15f);
	glEnd();

	glBegin(GL_TRIANGLE_FAN); // Left Propeler
	glColor3ub(23, 22, 18);
	glVertex2f(-0.50f, 0.35f);
	glVertex2f(-0.45f, -0.85f);
	glVertex2f(-0.40f, 0.35f);
	glEnd();

	glBegin(GL_QUADS); // Left Propeler 1.2
	glColor3ub(23, 22, 18);
	glVertex2f(-0.60f, 0.38f);
	glVertex2f(-0.30f, 0.32f);
	glVertex2f(-0.30f, 0.38f);
	glVertex2f(-0.60f, 0.32f);
	glEnd();

	glBegin(GL_TRIANGLE_FAN); // Right Propeler
	glColor3ub(23, 22, 18);
	glVertex2f(0.50f, 0.35f);
	glVertex2f(0.45f, -0.85f);
	glVertex2f(0.40f, 0.35f);
	glEnd();

	glBegin(GL_QUADS); // Right Propeler 1.2
	glColor3ub(23, 22, 18);
	glVertex2f(0.60f, 0.38f);
	glVertex2f(0.30f, 0.32f);
	glVertex2f(0.30f, 0.38f);
	glVertex2f(0.60f, 0.32f);
	glEnd();

	glScalef(0.7, 0.5, 0);
	glTranslatef(0.0f, -1.50f, 0.0f);
	glBegin(GL_POLYGON); // Back Wings
	glColor3ub(23, 22, 18);
	glVertex2f(-0.90f, 0.01f);
	glVertex2f(-0.50f, 0.0f);
	glVertex2f(0.50f, 0.0f);
	glVertex2f(0.90f, 0.02f);
	glVertex2f(0.94f, 0.06f);
	glVertex2f(0.89f, 0.15f);
	glVertex2f(0.83f, 0.20f);
	glVertex2f(0.60f, 0.25f);
	glVertex2f(-0.60f, 0.25f);
	glVertex2f(-0.83f, 0.20f);
	glVertex2f(-0.89f, 0.15f);
	glVertex2f(-0.94f, 0.06f);
	glVertex2f(-0.90f, 0.02f);
	glEnd();


	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("Airplane || Munna , 18-36025-1"); // Create a window with the given title
	glutInitWindowSize(1080, 720);   // Set the window's initial width & height - non-square
	glutInitWindowPosition(150, 100); // Position the window's initial top-left corner
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

