#include <windows.h>
#include<GL/Glut.h> //includes the opengl, glu, and glut header files
#include<stdlib.h> //includes the standard library header file
#include <math.h>
float current_angle = 0.0f;
float step_angle = 0.2f;
float center_x = 168.0f;
float center_y = 180.0f;

GLfloat position = 0.0f;
GLfloat speed = 0.001f;

void update(int value) {

	if (position < -1.0)
		position = 1.0f;

	position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void SpecialInput(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_UP:
		speed = 0.1f;
		break;
	case GLUT_KEY_DOWN:
		speed = 0.0f;
		break;
	case GLUT_KEY_LEFT:
		speed += 0.01f;
		break;
	case GLUT_KEY_RIGHT:
		speed -= 0.01f;
		break;
	}
	glutPostRedisplay();
}

void init() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 400, 0.0, 300.0);
}

void TableFan() {
	//draw fan bottom part
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(100, 40);
	glVertex2f(100, 10);
	glVertex2f(230, 10);
	glVertex2f(230, 40);
	glEnd();
	//draw fan on off button
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(110, 30);
	glVertex2f(110, 20);
	glVertex2f(115, 20);
	glVertex2f(115, 30);

	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(120, 30);
	glVertex2f(120, 20);
	glVertex2f(125, 20);
	glVertex2f(125, 30);
	glEnd();
	// draw fan stand
	glBegin(GL_LINES);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(160, 40);
	glVertex2f(163, 180);
	glVertex2f(160, 40);
	glVertex2f(175, 40);
	glVertex2f(175, 40);
	glVertex2f(172, 180);
	glEnd();
	// Rotate object
	glPushMatrix();

	glTranslatef(center_x, center_y, 0.0f);
	glRotatef(current_angle, 0, 0, 1);
	current_angle += step_angle;
	glTranslatef(-center_x, -center_y, 0.0f);

	// 1st Fan Blade
	glBegin(GL_QUADS);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(173, 180);
	glVertex2f(163, 180);
	glVertex2f(168, 270);
	glVertex2f(185, 275);
	glEnd();
	// 2nd Fan Blade
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(170, 174);
	glVertex2f(175, 180);
	glVertex2f(244, 155);
	glVertex2f(257, 135);
	glEnd();
	// 3rd Fan Blade
	glBegin(GL_QUADS);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(162, 180);
	glVertex2f(167, 174);
	glVertex2f(125, 145);
	glVertex2f(88, 140);
	glEnd();
	// circle in the middle
	float theta;
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	for (int i = 0; i <= 360; i++) {
		theta = i * 3.142 / 180;
		glVertex2f(168 + 7 * cos(theta), 180 + 6.5 * sin(theta));
	}
	glEnd();
	glPopMatrix();
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	TableFan();
	glFlush();
	glutSwapBuffers();
	glutPostRedisplay();
}
void idle() {
	display();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(700, 600);
	glutInitWindowPosition(10, 10);
	glutCreateWindow("Table Fan | 18-36025-1");
	init();
	glutTimerFunc(100, update, 0);
	glutSpecialFunc(SpecialInput);
	glutIdleFunc(idle);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

