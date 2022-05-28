#include<windows.h>
#include <GL/glut.h>

void init(void)
{
	glClearColor(0.9, 0.9, 0.9, 0.0);

	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 1080.0, 0.0, 720.0);
}

void drawShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS); //Flag Green Part
    glColor3f(0.3, 0.6, 0.3);
        glVertex2i(100, 650);
        glVertex2i(100, 400);
        glVertex2i(250, 400);
        glVertex2i(250, 650);
    glEnd();

    glBegin(GL_QUADS); //Flag White Part
    glColor3f(1.0, 1.0, 1.0);
        glVertex2i(250, 650);
        glVertex2i(250, 400);
        glVertex2i(400, 400);
        glVertex2i(400, 650);
    glEnd();

    glBegin(GL_QUADS); //Flag Red Part
    glColor3f(0.8, 0.2, 0.2);
        glVertex2i(400, 650);
        glVertex2i(400, 400);
        glVertex2i(550, 400);
        glVertex2i(550, 650);
    glEnd();

    glBegin(GL_QUADS); //Flag Stand Part
    glColor3f(0.0, 0.0, 0.0);
        glVertex2i(85, 660);
        glVertex2i(85, 20);
        glVertex2i(100, 20);
        glVertex2i(100, 660);
    glEnd();

    glBegin(GL_POLYGON); //Flag Stand Top Part
    glColor3f(0.0, 0.0, 0.0);
        glVertex3i(90, 670, 0);
        glVertex3i(85, 665, 0);
        glVertex3i(85, 660, 0);
        glVertex3i(90, 655, 0);
        glVertex3i(95, 655, 0);
        glVertex3i(100, 660, 0);
        glVertex3i(100, 665, 0);
        glVertex3i(95, 670, 0);
    glEnd();


    //Name

    glBegin(GL_QUADS); //M
    glColor3f(0.3, 0.6, 0.3);
        glVertex2i(150, 300);
        glVertex2i(150, 200);
        glVertex2i(160, 200);
        glVertex2i(160, 300);

        glVertex2i(150, 300);
        glVertex2i(190, 250);
        glVertex2i(200, 250);
        glVertex2i(160, 300);

        glVertex2i(230, 300);
        glVertex2i(190, 250);
        glVertex2i(200, 250);
        glVertex2i(240, 300);

        glVertex2i(230, 300);
        glVertex2i(230, 200);
        glVertex2i(240, 200);
        glVertex2i(240, 300);
    glEnd();

    glBegin(GL_QUADS); //U
    glColor3f(0.3, 0.6, 0.3);

        glVertex2i(270, 300);
        glVertex2i(270, 230);
        glVertex2i(280, 230);
        glVertex2i(280, 300);

        glVertex2i(270, 230);
        glVertex2i(300, 200);
        glVertex2i(320, 200);
        glVertex2i(280, 230);

        glVertex2i(300, 210);
        glVertex2i(300, 200);
        glVertex2i(330, 200);
        glVertex2i(330, 210);

        glVertex2i(350, 230);
        glVertex2i(310, 200);
        glVertex2i(330, 200);
        glVertex2i(360, 230);

        glVertex2i(350, 300);
        glVertex2i(350, 230);
        glVertex2i(360, 230);
        glVertex2i(360, 300);
    glEnd();

    glBegin(GL_QUADS); //N
    glColor3f(1.0, 1.0, 1.0);
        glVertex2i(380, 300);
        glVertex2i(380, 200);
        glVertex2i(390, 200);
        glVertex2i(390, 300);

        glVertex2i(380, 300);
        glVertex2i(450, 200);
        glVertex2i(460, 200);
        glVertex2i(390, 300);

        glVertex2i(450, 300);
        glVertex2i(450, 200);
        glVertex2i(460, 200);
        glVertex2i(460, 300);
    glEnd();

    glBegin(GL_QUADS); //N
    glColor3f(0.8, 0.2, 0.2);
        glVertex2i(480, 300);
        glVertex2i(480, 200);
        glVertex2i(490, 200);
        glVertex2i(490, 300);

        glVertex2i(480, 300);
        glVertex2i(550, 200);
        glVertex2i(560, 200);
        glVertex2i(490, 300);

        glVertex2i(550, 300);
        glVertex2i(550, 200);
        glVertex2i(560, 200);
        glVertex2i(560, 300);
    glEnd();

    glBegin(GL_QUADS); //A
    glColor3f(0.8, 0.2, 0.2);
        glVertex2i(615, 300);
        glVertex2i(580, 200);
        glVertex2i(590, 200);
        glVertex2i(625, 300);

        glVertex2i(605, 250);
        glVertex2i(600, 240);
        glVertex2i(645, 240);
        glVertex2i(640, 250);

        glVertex2i(615, 300);
        glVertex2i(650, 200);
        glVertex2i(660, 200);
        glVertex2i(625, 300);
    glEnd();

	glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(300, 200);
	glutInitWindowSize(1080, 720);
	glutCreateWindow("Favorite Football Team Flag");
	init();
	glutDisplayFunc(drawShapes);
	glutMainLoop();
	return 0;
}
