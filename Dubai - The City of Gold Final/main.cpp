#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
/* Initialize OpenGL Graphics */
#include<math.h>

# define PI           3.14159265358979323846
GLfloat j = 0.0f;
void initGL() {
    // Set "clearing" or background color
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

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

void day() {
    glClearColor(0.7f, 0.85f, 0.95f, 1.0f); // Set background color to white and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    int i;
    GLfloat x = -0.4f; GLfloat y = +0.65f; GLfloat radius = .16f;
    int triangleAmount = 100000; //# of triangles used to draw circle
    GLfloat twicePi = 2.0f * PI;

    glLoadIdentity();



    // *****BURJ KHALIFA START*****//
    // *****BURJ KHALIFA ADCB START*****//
    glBegin(GL_QUADS);
    glColor3ub(41, 128, 185);
    glVertex2f(0.01f, 0.70f);
    glVertex2f(0.01f, 0.58f);
    glVertex2f(0.03f, 0.60f);
    glVertex2f(0.03f, 0.70f);
    glEnd();
    // *****BURJ KHALIFA ADCB FINISH*****//

    // *****BURJ KHALIFA 456C START*****//
    glBegin(GL_QUADS);
    glColor3ub(133, 193, 233);
    glVertex2f(-0.03f, 0.55f);
    glVertex2f(-0.03f, 0.40f);
    glVertex2f(0.03f, 0.40f);
    glVertex2f(0.03f, 0.60f);
    glEnd();
    // *****BURJ KHALIFA 456C FINISH*****//

    // *****BURJ KHALIFA 8,9,10,7 START*****//
    glBegin(GL_QUADS);
    glColor3ub(87, 101, 116);
    glVertex2f(-0.05f, 0.40f);
    glVertex2f(-0.05f, -0.47f);
    glVertex2f(0.00f, -0.47f);
    glVertex2f(0.00f, 0.45f);
    glEnd();
    // *****BURJ KHALIFA 8,9,10,7 FINISH*****//

     // *****BURJ KHALIFA 11,13,14,12 START*****//
    glBegin(GL_QUADS);
    glColor3ub(26, 82, 118);
    glVertex2f(-0.09f, 0.15f);
    glVertex2f(-0.09f, -0.47f);
    glVertex2f(-0.02f, -0.47f);
    glVertex2f(-0.02f, 0.18f);
    glEnd();
    // *****BURJ KHALIFA 11,13,14,12 FINISH*****//

     // *****BURJ KHALIFA 15,17,18,16 START*****//
    glBegin(GL_QUADS);
    glColor3ub(16, 79, 107);
    glVertex2f(0.02f, 0.18f);
    glVertex2f(+0.02f, -0.47f);
    glVertex2f(+0.09f, -0.47f);
    glVertex2f(+0.09f, 0.15f);
    glEnd();
    // *****BURJ KHALIFA 15,17,18,16 FINISH*****//

    // *****BURJ KHALIFA 23,25,9,24 START*****//
    glBegin(GL_QUADS);
    glColor3ub(133, 146, 158);
    glVertex2f(-0.11f, -0.05f);
    glVertex2f(-0.11f, -0.47f);
    glVertex2f(-0.05f, -0.47f);
    glVertex2f(-0.05f, 0.00f);
    glEnd();
    // *****BURJ KHALIFA 23,25,9,24 FINISH*****//

     // *****BURJ KHALIFA 26,28,29,27 START*****//
    glBegin(GL_QUADS);
    glColor3ub(41, 128, 185);
    glVertex2f(-0.13f, -0.30f);
    glVertex2f(-0.13f, -0.47f);
    glVertex2f(-0.08f, -0.47f);
    glVertex2f(-0.08f, -0.25f);
    glEnd();
    // *****BURJ KHALIFA 26,28,29,27 FINISH*****//

     // *****BURJ KHALIFA 19,22,21,20 START*****//
    glBegin(GL_QUADS);
    glColor3ub(131, 145, 146);
    glVertex2f(+0.05f, 0.00f);
    glVertex2f(+0.05f, -0.47f);
    glVertex2f(+0.11f, -0.47f);
    glVertex2f(0.11f, -0.05f);
    glEnd();
    // *****BURJ KHALIFA 19,22,21,20 FINISH*****//

    // *****BURJ KHALIFA 30,33,32,31 START*****//
    glBegin(GL_QUADS);
    glColor3ub(46, 134, 193);
    glVertex2f(+0.08f, -0.25f);
    glVertex2f(+0.08f, -0.47f);
    glVertex2f(+0.13f, -0.47f);
    glVertex2f(+0.13f, -0.30f);
    glEnd();
    // *****BURJ KHALIFA 30,33,32,31 FINISH*****//

    // *****BURJ KHALIFA Z1,10,22,Z2 START*****//
    glBegin(GL_QUADS);
    glColor3ub(40, 116, 166);
    glVertex2f(+0.00f, 0.40f);
    glVertex2f(+0.00f, -0.47f);
    glVertex2f(+0.05f, -0.47f);
    glVertex2f(+0.05f, +0.40f);
    glEnd();
    // *****BURJ KHALIFA Z1,10,22,Z2 FINISH*****//

    // *****BURJ KHALIFA 34,35,36,37 START*****//
    glBegin(GL_QUADS);
    glColor3ub(107, 105, 94);
    glVertex2f(-0.15f, -0.47f);
    glVertex2f(-0.15f, -0.50f);
    glVertex2f(+0.15f, -0.50f);
    glVertex2f(+0.15f, -0.47f);
    glEnd();
    // *****BURJ KHALIFA 34,35,36,37 FINISH*****//


     // *****BURJ KHALIFA FINISH*****//

    // *****BURJ KHALIFA RIGHT:01 START*****//

      // *****BURJ KHALIFA RIGHT:01  2,5,6,3 START*****//
    glBegin(GL_QUADS);
    glColor3ub(26, 188, 156);
    glVertex2f(+0.20f, 0.10f);
    glVertex2f(+0.20f, -0.50f);
    glVertex2f(+0.40f, -0.50f);
    glVertex2f(+0.40f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:01  2,5,6,3 FINISH*****//

      // *****BURJ KHALIFA RIGHT:01  1,2,3 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(21, 67, 96);
    glVertex2f(+0.30f, 0.30f);
    glVertex2f(+0.20f, +0.10f);
    glVertex2f(+0.40f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:01  1,2,3 FINISH*****//

      // *****BURJ KHALIFA RIGHT:01  4,2,3 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(244, 43, 8);
    glVertex2f(+0.30f, 0.25f);
    glVertex2f(+0.20f, +0.10f);
    glVertex2f(+0.40f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:01  4,2,3 FINISH*****//

     // *****BURJ KHALIFA RIGHT:01  2,7,9 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(245, 205, 5);
    glVertex2f(+0.20f, 0.10f);
    glVertex2f(+0.28f, -0.50f);
    glVertex2f(+0.28f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:01  2,7,9 FINISH*****//

      // *****BURJ KHALIFA RIGHT:01  10,8,3 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(245, 205, 5);
    glVertex2f(+0.32f, +0.10f);
    glVertex2f(+0.32f, -0.50f);
    glVertex2f(+0.40f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:01  10,8,3 FINISH*****//

    // *****BURJ KHALIFA RIGHT:01 FINISH*****//

     // *****BURJ KHALIFA RIGHT:02 START*****//

     // *****BURJ KHALIFA RIGHT:02  1,9,10,2 START*****//
    glBegin(GL_QUADS);
    glColor3ub(17, 178, 204);
    glVertex2f(+0.45f, +0.05f);
    glVertex2f(+0.45f, -0.05f);
    glVertex2f(+0.65f, -0.05f);
    glVertex2f(+0.65f, +0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  1,9,10,2 FINISH*****//

    // *****BURJ KHALIFA RIGHT:02  5,7,8,6 START*****//
    glBegin(GL_QUADS);
    glColor3ub(107, 97, 94);
    glVertex2f(+0.50f, +0.03f);
    glVertex2f(+0.50f, -0.02f);
    glVertex2f(+0.60f, -0.02f);
    glVertex2f(+0.60f, +0.03f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  5,7,8,6 FINISH*****//

     // *****BURJ KHALIFA RIGHT:02  9,4,3,10 START*****//
    glBegin(GL_QUADS);
    glColor3ub(107, 97, 94);
    glVertex2f(+0.45f, -0.05f);
    glVertex2f(+0.45f, -0.50f);
    glVertex2f(+0.65f, -0.50f);
    glVertex2f(+0.65f, -0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  9,4,3,10 FINISH*****//

     // *****BURJ KHALIFA RIGHT:02  11,13,14,12 START*****//
    glBegin(GL_QUADS);
    glColor3ub(241, 196, 15);
    glVertex2f(+0.52f, -0.05f);
    glVertex2f(+0.52f, -0.50f);
    glVertex2f(+0.57f, -0.50f);
    glVertex2f(+0.57f, -0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  11,13,14,12 FINISH*****//

      // *****BURJ KHALIFA RIGHT:02 FINISH*****//
      //
    // *****BURJ KHALIFA RIGHT:03 START*****//

     // *****BURJ KHALIFA RIGHT:03 1,2,3,4 START*****//
    glBegin(GL_QUADS);
    glColor3ub(67, 89, 108);
    glVertex2f(+0.70f, +0.30f);
    glVertex2f(+0.70f, +0.25f);
    glVertex2f(+0.73f, +0.25f);
    glVertex2f(+0.73f, +0.30f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:03  1,2,3,4 FINISH*****//


     // *****BURJ KHALIFA RIGHT:03 2,8,7,3 START*****//
    glBegin(GL_QUADS);
    glColor3ub(129, 186, 234);
    glVertex2f(+0.70f, +0.25f);
    glVertex2f(+0.70f, +0.00f);
    glVertex2f(+0.90f, +0.00f);
    glVertex2f(+0.73f, +0.25f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:03  2,8,7,3 FINISH*****//

      // *****BURJ KHALIFA RIGHT:03 8,5,6,7 START*****//
    glBegin(GL_QUADS);
    glColor3ub(44, 62, 80);
    glVertex2f(+0.70f, +0.00f);
    glVertex2f(+0.70f, -0.50f);
    glVertex2f(+0.90f, -0.50f);
    glVertex2f(+0.90f, +0.00f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:03  8,5,6,7 FINISH*****//

    // *****BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:03  A,B,C,D FINISH*****//

    // *****TRANSLATE OF NO:01 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.04f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:01 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

     // *****TRANSLATE OF NO:02 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.08f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:02 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

    // *****TRANSLATE OF NO:03 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.12f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:03 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

     // *****TRANSLATE OF NO:04 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.16f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:04 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

     // *****TRANSLATE OF NO:05 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.20f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:05 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//


     // *****TRANSLATE OF NO:06 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.24f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:06 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

     // *****TRANSLATE OF NO:07 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.28f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:07 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

      // *****TRANSLATE OF NO:08 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.32f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:08 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

      // *****TRANSLATE OF NO:09 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.36f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:09 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//


      // *****TRANSLATE OF NO:10 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.40f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:10 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

    // *****TRANSLATE OF NO:11 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.44f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:11 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//







    // *****BURJ KHALIFA RIGHT:03 FINISH*****//


    // *****BURJ KHALIFA LEFT:01 START*****//

    // *****BURJ KHALIFA LEFT:01 H,J,K,I START*****//
    glBegin(GL_QUADS);
    glColor3ub(7, 25, 248);
    glVertex2f(-0.50f, +0.30f);
    glVertex2f(-0.50f, +0.20f);
    glVertex2f(-0.48f, +0.18f);
    glVertex2f(-0.48f, +0.30f);
    glEnd();
    // *****BURJ KHALIFA LEFT:01  H,J,K,I FINISH*****//


    // *****BURJ KHALIFA LEFT:01 J,31,33,L START*****//
    glBegin(GL_QUADS);
    glColor3ub(88, 138, 112);
    glVertex2f(-0.50f, +0.20f);
    glVertex2f(-0.50f, -0.50f);
    glVertex2f(-0.35f, -0.50f);
    glVertex2f(-0.35f, +0.05f);
    glEnd();
    // *****BURJ KHALIFA LEFT:01  J,31,33,L FINISH*****//

     // *****BURJ KHALIFA LEFT:01 M,O,P,N START*****//
    glBegin(GL_QUADS);
    glColor3ub(218, 58, 39);
    glVertex2f(-0.50f, +0.10f);
    glVertex2f(-0.50f, +0.05f);
    glVertex2f(-0.45f, +0.05f);
    glVertex2f(-0.45f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA LEFT:01  M,O,P,N FINISH*****//

      // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(4, 18, 106);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//


    // COPY OF NO:01  *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glTranslatef(0.0f, -0.04f, 0.0f);
    // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(4, 18, 106);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    glLoadIdentity();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//
    // COPY OF NO:01  *****BURJ KHALIFA LEFT:01 A,S,T,R FINISH*****//

      // COPY OF NO:02  *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glTranslatef(0.0f, -0.08f, 0.0f);
    // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(4, 18, 106);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    glLoadIdentity();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//
    // COPY OF NO:02  *****BURJ KHALIFA LEFT:01 A,S,T,R FINISH*****//


     // COPY OF NO:03  *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glTranslatef(0.0f, -0.12f, 0.0f);
    // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(4, 18, 106);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    glLoadIdentity();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//
    // COPY OF NO:03  *****BURJ KHALIFA LEFT:01 A,S,T,R FINISH*****//


     // COPY OF NO:04  *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glTranslatef(0.0f, -0.16f, 0.0f);
    // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(4, 18, 106);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    glLoadIdentity();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//
    // COPY OF NO:04  *****BURJ KHALIFA LEFT:01 A,S,T,R FINISH*****//

     // COPY OF NO:05  *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glTranslatef(0.0f, -0.20f, 0.0f);
    // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(4, 18, 106);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    glLoadIdentity();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//
    // COPY OF NO:05  *****BURJ KHALIFA LEFT:01 A,S,T,R FINISH*****//

    // *****BURJ KHALIFA LEFT:01 FINISH*****//


     // *****BURJ KHALIFA LEFT:02 START*****//

     // *****BURJ KHALIFA LEFT:02 E,F,G START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(81, 90, 90);
    glVertex2f(-0.60f, +0.40f);
    glVertex2f(-0.75f, +0.30f);
    glVertex2f(-0.70f, +0.30f);
    glEnd();
    // *****BURJ KHALIFA LEFT:02 E,F,G FINISH*****//

     // *****BURJ KHALIFA LEFT:02 F,29,14,G START*****//
    glBegin(GL_QUADS);
    glColor3ub(27, 38, 49);
    glVertex2f(-0.75f, +0.30f);
    glVertex2f(-0.75f, -0.50f);
    glVertex2f(-0.70f, -0.50f);
    glVertex2f(-0.70f, +0.30f);
    glEnd();
    // *****BURJ KHALIFA LEFT:02 F,29,14,G FINISH*****//

     // *****BURJ KHALIFA LEFT:02 E,G,14,15 START*****//
    glBegin(GL_QUADS);
    glColor3ub(113, 125, 126);
    glVertex2f(-0.60f, +0.40f);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, -0.50f);
    glVertex2f(-0.60f, -0.50f);
    glEnd();
    // *****BURJ KHALIFA LEFT:02 E,G,14,15 FINISH*****//

    // *****BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    // *****BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

      // *****TRANSLATE OF NO:01 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.04f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:01 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

      // *****TRANSLATE OF NO:02 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.08f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:02 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:03 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.12f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:03 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:04 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.16f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:04 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//


     // *****TRANSLATE OF NO:05 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.20f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:05 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:06 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.24f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:06 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:07 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.28f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:07 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:08 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.32f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:08 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:09 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.36f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:09 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

    // *****TRANSLATE OF NO:10 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.40f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:10 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:11 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.44f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:11 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

    // *****TRANSLATE OF NO:12 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.48f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:12 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

    // *****TRANSLATE OF NO:13 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.52f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:13 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//







    // *****BURJ KHALIFA LEFT:02 FINISH*****//



     // TRANSLATION AND SCALING OF BURJ KHALIFA RIGHT:2 START //


    glTranslatef(-0.5f, 0.0f, 0.0f); // Translate x right and y up
    glScalef(0.5, 2, 0);
    // *****BURJ KHALIFA RIGHT:02 START*****//

    // *****BURJ KHALIFA RIGHT:02  1,9,10,2 START*****//
    glBegin(GL_QUADS);
    glColor3ub(17, 178, 204);
    glVertex2f(+0.45f, +0.05f);
    glVertex2f(+0.45f, -0.05f);
    glVertex2f(+0.65f, -0.05f);
    glVertex2f(+0.65f, +0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  1,9,10,2 FINISH*****//

    // *****BURJ KHALIFA RIGHT:02  5,7,8,6 START*****//
    glBegin(GL_QUADS);
    glColor3ub(107, 97, 94);
    glVertex2f(+0.50f, +0.03f);
    glVertex2f(+0.50f, -0.02f);
    glVertex2f(+0.60f, -0.02f);
    glVertex2f(+0.60f, +0.03f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  5,7,8,6 FINISH*****//

     // *****BURJ KHALIFA RIGHT:02  9,4,3,10 START*****//
    glBegin(GL_QUADS);
    glColor3ub(107, 97, 94);
    glVertex2f(+0.45f, -0.05f);
    glVertex2f(+0.45f, -0.50f);
    glVertex2f(+0.65f, -0.50f);
    glVertex2f(+0.65f, -0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  9,4,3,10 FINISH*****//

     // *****BURJ KHALIFA RIGHT:02  11,13,14,12 START*****//
    glBegin(GL_QUADS);
    glColor3ub(241, 196, 15);
    glVertex2f(+0.52f, -0.05f);
    glVertex2f(+0.52f, -0.50f);
    glVertex2f(+0.57f, -0.50f);
    glVertex2f(+0.57f, -0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  11,13,14,12 FINISH*****//

      // *****BURJ KHALIFA RIGHT:02 FINISH*****//
    glLoadIdentity();                // Reset the model-view matrix


    // TRANSLATION AND SCALING OF BURJ KHALIFA RIGHT:2 FINISH //


























    // *****HOUSE OF THE KING START*****//

    // *****HOUSE OF THE KING 4,5,6 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.85f, -0.20f);
    glVertex2f(-0.90f, -0.25f);
    glVertex2f(-0.80f, -0.25f);
    glEnd();
    // *****HOUSE OF THE KING 4,5,6 FINISH*****//

    // *****HOUSE OF THE KING 7,8,9 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.72f, -0.15f);
    glVertex2f(-0.74f, -0.20f);
    glVertex2f(-0.70f, -0.20f);
    glEnd();
    // *****HOUSE OF THE KING 7,8,9 FINISH*****//

     // *****HOUSE OF THE KING 10,11,12 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.65f, -0.255f);
    glVertex2f(-0.70f, -0.30f);
    glVertex2f(-0.60f, -0.30f);
    glEnd();
    // *****HOUSE OF THE KING 10,11,12 FINISH*****//

    // *****HOUSE OF THE KING 11,14,15,12 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.70f, -0.30f);
    glVertex2f(-0.70f, -0.50f);
    glVertex2f(-0.60f, -0.50f);
    glVertex2f(-0.60f, -0.30f);
    glEnd();
    // *****HOUSE OF THE KING 39,14,15,40 FINISH*****//


    // *****HOUSE OF THE KING 13,14,15 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.65f, -0.35f);
    glVertex2f(-0.70f, -0.50f);
    glVertex2f(-0.60f, -0.50f);
    glEnd();
    // *****HOUSE OF THE KING 13,14,15 FINISH*****//


     // *****HOUSE OF THE KING 16,17,18 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.58f, -0.15f);
    glVertex2f(-0.60f, -0.20f);
    glVertex2f(-0.56f, -0.20f);
    glEnd();
    // *****HOUSE OF THE KING 16,17,18 FINISH*****//

     // *****HOUSE OF THE KING 19,20,21 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.45f, -0.20f);
    glVertex2f(-0.50f, -0.25f);
    glVertex2f(-0.40f, -0.25f);
    glEnd();
    // *****HOUSE OF THE KING 19,20,21 FINISH*****//

      // *****HOUSE OF THE KING 22,23,24 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.30f, -0.30f);
    glVertex2f(-0.35f, -0.35f);
    glVertex2f(-0.25f, -0.35f);
    glEnd();
    // *****HOUSE OF THE KING 22,23,24 FINISH*****//

     // *****HOUSE OF THE KING 5,27,28,6 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.90f, -0.25f);
    glVertex2f(-0.90f, -0.50f);
    glVertex2f(-0.80f, -0.50f);
    glVertex2f(-0.80f, -0.25f);
    glEnd();
    // *****HOUSE OF THE KING 5,27,28,6 FINISH*****//

    // *****HOUSE OF THE KING 37,28,29,38 START*****//
    glBegin(GL_QUADS);
    glColor3ub(156, 100, 12);
    glVertex2f(-0.80f, -0.36f);
    glVertex2f(-0.80f, -0.50f);
    glVertex2f(-0.73f, -0.50f);
    glVertex2f(-0.73f, -0.36f);
    glEnd();
    // *****HOUSE OF THE KING 5,27,28,6 FINISH*****//


    // *****HOUSE OF THE KING 41,30,31,42 START*****//
    glBegin(GL_QUADS);
    glColor3ub(156, 100, 12);
    glVertex2f(-0.57f, -0.36f);
    glVertex2f(-0.57f, -0.50f);
    glVertex2f(-0.50f, -0.50f);
    glVertex2f(-0.50f, -0.36f);
    glEnd();
    // *****HOUSE OF THE KING 5,27,28,6 FINISH*****//

     // *****HOUSE OF THE KING 43,32,33,44 START*****//
    glBegin(GL_QUADS);
    glColor3ub(156, 100, 12);
    glVertex2f(-0.40f, -0.40f);
    glVertex2f(-0.40f, -0.50f);
    glVertex2f(-0.35f, -0.50f);
    glVertex2f(-0.35f, -0.40f);
    glEnd();
    // *****HOUSE OF THE KING 43,32,33,44 FINISH*****//

    // *****HOUSE OF THE KING 23,33,34,24 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.35f, -0.35f);
    glVertex2f(-0.35f, -0.50f);
    glVertex2f(-0.25f, -0.50f);
    glVertex2f(-0.25f, -0.35f);
    glEnd();
    // *****HOUSE OF THE KING 23,33,34,24 FINISH*****//

    // *****HOUSE OF THE KING 20,31,32,21 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.50f, -0.25f);
    glVertex2f(-0.50f, -0.50f);
    glVertex2f(-0.40f, -0.50f);
    glVertex2f(-0.40f, -0.25f);
    glEnd();
    // *****HOUSE OF THE KING 20,31,32,21 FINISH*****//

    // *****HOUSE OF THE KING 17,15,30,18 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.60f, -0.20f);
    glVertex2f(-0.60f, -0.50f);
    glVertex2f(-0.56f, -0.50f);
    glVertex2f(-0.56f, -0.20f);
    glEnd();
    // *****HOUSE OF THE KING 17,15,30,18 FINISH*****//

     // *****HOUSE OF THE KING 8,29,14,9 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.74f, -0.20f);
    glVertex2f(-0.74f, -0.50f);
    glVertex2f(-0.70f, -0.50f);
    glVertex2f(-0.70f, -0.20f);
    glEnd();
    // *****HOUSE OF THE KING 8,29,14,9 FINISH*****//

     // *****HOUSE OF THE KING 1,999,26,3 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.f, -0.5f);
    glVertex2f(-0.95f, -0.50f);
    glVertex2f(-0.95f, -0.35f);
    glEnd();
    // *****HOUSE OF THE KING 1,2,3 FINISH*****//


     // *****HOUSE OF THE KING 35,26,27,36 START*****//
    glBegin(GL_QUADS);
    glColor3ub(156, 100, 12);
    glVertex2f(-0.95f, -0.40f);
    glVertex2f(-0.95f, -0.5f);
    glVertex2f(-0.90f, -0.50f);
    glVertex2f(-0.90f, -0.40f);
    glEnd();
    // *****HOUSE OF THE KING 35,26,27,36 FINISH*****//

      // *****HOUSE OF THE KING 1,998,3 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.0f, -0.35f);
    glVertex2f(-0.95f, -0.35f);
    glEnd();
    // *****HOUSE OF THE KING 1,998,3 FINISH*****//

    // *****HOUSE OF THE KING FINISH*****//


        // *****ARAB SEA START*****//

    glBegin(GL_QUADS);
    glColor3ub(32, 238, 197);
    glVertex2f(-1.0f, -0.50f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(+1.0f, -1.0f);
    glVertex2f(+1.0f, -0.50f);
    glEnd();



    // *****ARAB SEA FINISH*****//

// *****DUBAI BASE START*****//

    glBegin(GL_QUADS);
    glColor3ub(81, 81, 81);
    glVertex2f(-1.0f, -0.50f);
    glVertex2f(-1.0f, -0.55f);
    glVertex2f(+1.0f, -0.55f);
    glVertex2f(+1.0f, -0.50f);
    glEnd();



    // *****DUBAI BASE FINISH*****//



    //====================================================================================================================================================

    //------------------------------------- Tree
    glScalef(0.2, 0.1, 0);
    glTranslatef(-4.9, -4.9f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(0.8, 0.8, 0); //Small Tree
    glTranslatef(0.40, -1.5f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(1.5, 1.5, 0);
    glTranslatef(0.60, -0.6f, 0.0f);//Small Tree
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    //---------------------=-=-=-

    glScalef(5.0, 5.0, 0);
    glTranslatef(0.5, 0.2f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(0.8, 0.8, 0); //Small Tree
    glTranslatef(0.40, -1.5f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(1.5, 1.5, 0);
    glTranslatef(0.60, -0.6f, 0.0f);//Small Tree
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    //---------------------=-=-=-


    glScalef(6.0, 6.0, 0);
    glTranslatef(0.5, 0.1f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(0.8, 0.8, 0); //Small Tree
    glTranslatef(0.40, -1.5f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(1.5, 1.5, 0);
    glTranslatef(0.60, -0.6f, 0.0f);//Small Tree
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    //---------------------=-=-=-


    glScalef(7.0, 7.0, 0);
    glTranslatef(0.5, 0.2f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(0.8, 0.8, 0); //Small Tree
    glTranslatef(0.40, -1.5f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(1.5, 1.5, 0);
    glTranslatef(0.60, -0.6f, 0.0f);//Small Tree
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    //---------------------=-=-=-


    glScalef(7.0, 7.0, 0);
    glTranslatef(0.5, 0.2f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(0.8, 0.8, 0); //Small Tree
    glTranslatef(0.40, -1.5f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(1.5, 1.5, 0);
    glTranslatef(0.60, -0.6f, 0.0f);//Small Tree
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    //---------------------=-=-=-


    glScalef(6.0, 6.0, 0);
    glTranslatef(0.5, 0.2f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(0.8, 0.8, 0); //Small Tree
    glTranslatef(0.40, -1.5f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(1.5, 1.5, 0);
    glTranslatef(0.60, -0.6f, 0.0f);//Small Tree
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    //---------------------=-=-=-


    glScalef(5.0, 5.0, 0);
    glTranslatef(0.5, 0.1f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(0.8, 0.8, 0); //Small Tree
    glTranslatef(0.40, -1.5f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(1.5, 1.5, 0);
    glTranslatef(0.60, -0.6f, 0.0f);//Small Tree
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    //---------------------=-=-=-


    glScalef(7.0, 7.0, 0);
    glTranslatef(0.5, 0.3f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(0.8, 0.8, 0); //Small Tree
    glTranslatef(0.40, -1.5f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(1.5, 1.5, 0);
    glTranslatef(0.60, -0.6f, 0.0f);//Small Tree
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    //---------------------=-=-=-


    glScalef(6.0, 6.0, 0);
    glTranslatef(0.5, 0.2f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(0.8, 0.8, 0); //Small Tree
    glTranslatef(0.40, -1.5f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(1.5, 1.5, 0);
    glTranslatef(0.60, -0.6f, 0.0f);//Small Tree
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    //---------------------=-=-=-


    glScalef(7.0, 7.0, 0);
    glTranslatef(0.5, 0.2f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(0.8, 0.8, 0); //Small Tree
    glTranslatef(0.40, -1.5f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(1.5, 1.5, 0);
    glTranslatef(0.60, -0.6f, 0.0f);//Small Tree
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    //---------------------=-=-=-


    glScalef(5.0, 5.0, 0);
    glTranslatef(0.5, 0.1f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(0.8, 0.8, 0); //Small Tree
    glTranslatef(0.40, -1.5f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(1.5, 1.5, 0);
    glTranslatef(0.60, -0.6f, 0.0f);//Small Tree
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    //---------------------=-=-=-


    glScalef(7.0, 7.0, 0);
    glTranslatef(0.5, 0.2f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(0.8, 0.8, 0); //Small Tree
    glTranslatef(0.40, -1.5f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(1.5, 1.5, 0);
    glTranslatef(0.60, -0.6f, 0.0f);//Small Tree
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    //---------------------=-=-=-


    glScalef(6.0, 6.0, 0);
    glTranslatef(0.5, 0.2f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(0.8, 0.8, 0); //Small Tree
    glTranslatef(0.40, -1.5f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(1.5, 1.5, 0);
    glTranslatef(0.60, -0.6f, 0.0f);//Small Tree
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    //---------------------=-=-=-


    glScalef(7.0, 7.0, 0);
    glTranslatef(0.5, 0.2f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.20f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(0.8, 0.8, 0); //Small Tree
    glTranslatef(0.40, -1.5f, 0.0f);
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();

    glScalef(1.5, 1.5, 0);
    glTranslatef(0.60, -0.6f, 0.0f);//Small Tree
    glBegin(GL_QUADS); //Tree Body
    glColor3ub(176, 179, 179);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Tree Leaf
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glScalef(0.8, 0.8, 0);
    glTranslatef(0.0, 0.15f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 149, 16);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.30f, 0.0f);
    glVertex2f(0.30f, 0.0f);
    glEnd();
    glLoadIdentity();
    //---------------------=-=-=-

    //------------------------------------- Tree End


    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);
    // *****DUBAI CRUISE SHIP START*****//

    // ** B,D,C,A START** //
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(+0.75f, -0.60f);
    glVertex2f(+0.75f, -0.70f);
    glVertex2f(+0.80f, -0.70f);
    glVertex2f(+0.80f, -0.60f);
    glEnd();
    // ** B,D,C,A FINISH** //

     // ** T1,T2,T3,T4 START** //
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(+0.83f, -0.60f);
    glVertex2f(+0.83f, -0.70f);
    glVertex2f(+0.88f, -0.70f);
    glVertex2f(+0.88f, -0.60f);
    glEnd();
    // ** T1,T2,T3,T4 FINISH** //


       // ** G,H,F,E START** //
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(+0.65f, -0.70f);
    glVertex2f(+0.60f, -0.75f);
    glVertex2f(+0.90f, -0.75f);
    glVertex2f(+0.90f, -0.70f);
    glEnd();
    // ** G,H,F,E FINISH** //

      // ** H,I,J,F START** //
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(+0.60f, -0.75f);
    glVertex2f(+0.55f, -0.80f);
    glVertex2f(+0.90f, -0.80f);
    glVertex2f(+0.90f, -0.75f);
    glEnd();
    // ** H,I,J,F FINISH** //


    // ** K,L,M,N START** //
    glBegin(GL_QUADS);
    glColor3ub(111, 44, 100);
    glVertex2f(+0.50f, -0.80f);
    glVertex2f(+0.55f, -0.90f);
    glVertex2f(+0.95f, -0.90f);
    glVertex2f(+0.95f, -0.80f);
    glEnd();
    // ** K,L,M,N FINISH** //

     // ** O,P,Q,R START** //
    glBegin(GL_QUADS);
    glColor3ub(175, 204, 220);
    glVertex2f(+0.55f, -0.83f);
    glVertex2f(+0.55f, -0.86f);
    glVertex2f(+0.60f, -0.86f);
    glVertex2f(+0.60f, -0.83f);
    glEnd();
    // ** O,P,Q,R FINISH** //

     // *****DUBAI CRUISE SHIP FINISH*****//


       // *** SAIL BOAT START *** //

    // ** A,G,H,B START ** //
    glBegin(GL_QUADS);
    glColor3ub(1, 6, 8);
    glVertex2f(-0.80f, -0.6f);
    glVertex2f(-0.80f, -0.85f);
    glVertex2f(-0.79f, -0.85f);
    glVertex2f(-0.79f, -0.6f);
    glEnd();
    // ** A,G,H,B FINISH** //

     // ** K,L,M,N START ** //
    glBegin(GL_QUADS);
    glColor3ub(255, 0, 12);
    glVertex2f(-1.0f, -0.85f);
    glVertex2f(-0.95f, -0.90f);
    glVertex2f(-0.65f, -0.90f);
    glVertex2f(-0.60f, -0.85f);
    glEnd();
    // ** K,L,M,N FINISH** //

    // ** K,L,M,N START ** //
    glBegin(GL_TRIANGLES);
    glColor3ub(251, 252, 252);
    glVertex2f(-0.79f, -0.60f);
    glVertex2f(-0.79f, -0.80f);
    glVertex2f(-0.65f, -0.80f);
    glEnd();
    // ** K,L,M,N FINISH** //

    // ** A,C,D START ** //
    glBegin(GL_TRIANGLES);
    glColor3ub(223, 255, 0);
    glVertex2f(-0.80f, -0.60f);
    glVertex2f(-0.9f, -0.82f);
    glVertex2f(-0.80f, -0.82f);
    glEnd();
    // ** A,C,D FINISH** //
    glPopMatrix();
    glLoadIdentity();
    // *** SAIL BOAT FINISH *** //


     // *****DUBAI CARRIER SHIP START*****//

    // ** A,B,C,D START** //
    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(231, 76, 60);
    glVertex2f(-0.25f, -0.85f);
    glVertex2f(-0.24f, -0.88f);
    glVertex2f(-0.10f, -0.88f);
    glVertex2f(-0.10f, -0.85f);
    glEnd();
    // ** A,B,C,D FINISH** //

     // ** B,E,F,C START** //
    glBegin(GL_QUADS);
    glColor3ub(66, 73, 73);
    glVertex2f(-0.24f, -0.88f);
    glVertex2f(-0.20f, -1.0f);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(-0.10f, -0.88f);
    glEnd();
    // ** B,E,F,C FINISH** //

    // ** G,F,V,U START** //
    glBegin(GL_QUADS);
    glColor3ub(66, 73, 73);
    glVertex2f(-0.05f, -0.95f);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(0.25f, -1.0f);
    glVertex2f(0.25f, -0.95f);
    glEnd();
    // ** G,F,V,U FINISH** //

     // ** R,Q,T,S START** //
    glBegin(GL_QUADS);
    glColor3ub(231, 76, 60);
    glVertex2f(+0.20f, -0.75f);
    glVertex2f(+0.20f, -0.95f);
    glVertex2f(0.27f, -0.95f);
    glVertex2f(0.27f, -0.75f);
    glEnd();
    // ** R,Q,T,S  FINISH** //



     // ** Y,V,W,X START** //
    glBegin(GL_QUADS);
    glColor3ub(66, 73, 73);
    glVertex2f(+0.25f, -0.90f);
    glVertex2f(+0.25f, -1.0f);
    glVertex2f(0.30f, -1.0f);
    glVertex2f(0.35f, -0.90f);
    glEnd();
    // ** Y,V,W,X FINISH** //

     // ** N,M,P,O START** //
    glBegin(GL_QUADS);
    glColor3ub(244, 208, 63);
    glVertex2f(+0.05f, -0.85f);
    glVertex2f(+0.05f, -0.95f);
    glVertex2f(+0.18f, -0.95f);
    glVertex2f(+0.18f, -0.85f);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
    // ** H,I,J,K FINISH** //


    // ***** THE SUN START *****//
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(244, 255, 2);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    // ***** THE SUN FINISH *****//


    // *******    ZEPPLIN START     ********

    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);

    // ** A,B,E,Z START ** //
    glBegin(GL_QUADS);
    glColor3ub(14, 3, 94);
    glVertex2f(0.13f, 0.90f);
    glVertex2f(0.10f, 0.85f);
    glVertex2f(0.15f, 0.85f);
    glVertex2f(0.15f, 0.90f);
    glEnd();
    // ** A,B,E,Z FINISH ** //

     // ** B,C,D,E START ** //
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(0.10f, 0.85f);
    glVertex2f(0.13f, 0.80f);
    glVertex2f(0.15f, 0.80f);
    glVertex2f(0.15f, 0.85f);
    glEnd();
    // ** B,C,D,E FINISH ** //



    // ** Z,D,G,F START ** //
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(0.15f, 0.90f);
    glVertex2f(0.15f, 0.80f);
    glVertex2f(0.30f, 0.80f);
    glVertex2f(0.30f, 0.90f);
    glEnd();
    // ** Z,D,G,F FINISH ** //

    // ** M,J,K,L START ** //
    glBegin(GL_QUADS);
    glColor3ub(231, 8, 8);
    glVertex2f(0.35f, 0.92f);
    glVertex2f(0.35f, 0.82f);
    glVertex2f(0.40f, 0.85f);
    glVertex2f(0.40f, 0.92f);
    glEnd();
    // ** M,J,K,L FINISH ** //

     // ** F,G,I,H START ** //
    glBegin(GL_QUADS);
    glColor3ub(231, 8, 8);
    glVertex2f(0.30f, 0.90f);
    glVertex2f(0.30f, 0.80f);
    glVertex2f(0.35f, 0.82f);
    glVertex2f(0.35f, 0.87f);
    glEnd();
    // ** F,G,I,H FINISH ** //


     // ** N,O,P,Q START ** //
    glBegin(GL_QUADS);
    glColor3ub(231, 8, 8);
    glVertex2f(0.17f, 0.87f);
    glVertex2f(0.17f, 0.84f);
    glVertex2f(0.19f, 0.84f);
    glVertex2f(0.19f, 0.87f);
    glEnd();
    // ** N,O,P,Q FINISH ** //

   // TRANSLATE OF WINDOW  COPY :01  START   //

    // ** N,O,P,Q START ** //
    glBegin(GL_QUADS);
    glColor3ub(231, 8, 8);
    glVertex2f(0.21f, 0.87f);
    glVertex2f(0.21f, 0.84f);
    glVertex2f(0.23f, 0.84f);
    glVertex2f(0.23f, 0.87f);
    glEnd();
    // ** N,O,P,Q FINISH ** //
    // TRANSLATE OF WINDOW  COPY : 01 FINISH   //

    // TRANSLATE OF WINDOW  COPY :01  START   //

    // ** N,O,P,Q START ** //
    glBegin(GL_QUADS);
    glColor3ub(231, 8, 8);
    glVertex2f(0.25f, 0.87f);
    glVertex2f(0.25f, 0.84f);
    glVertex2f(0.27f, 0.84f);
    glVertex2f(0.27f, 0.87f);
    glEnd();
    // ** N,O,P,Q FINISH ** //
    // TRANSLATE OF WINDOW  COPY : 01 FINISH   //


     // ** X,Z,Y,V START ** //
    glBegin(GL_QUADS);
    glColor3ub(231, 8, 8);
    glVertex2f(0.18f, 0.82f);
    glVertex2f(0.25f, 0.70f);
    glVertex2f(0.30f, 0.70f);
    glVertex2f(0.25f, 0.82f);
    glEnd();
    // ** X,Z,Y,V FINISH ** //


      // ** OPPOSITE FIN START ** //
    glBegin(GL_QUADS);
    glColor3ub(231, 8, 8);
    glVertex2f(0.18f, 0.90f);
    glVertex2f(0.25f, 0.90f);
    glVertex2f(0.30f, 0.95f);
    glVertex2f(0.25f, 0.95f);
    glEnd();
    // ** OPPOSITE FIN FINISH ** //

    // ** STRING LINE START ** //
    glBegin(GL_QUADS);
    glColor3ub(44, 0, 131);
    glVertex2f(0.40f, 0.87f);
    glVertex2f(0.40f, 0.86f);
    glVertex2f(0.48f, 0.86f);
    glVertex2f(0.48f, 0.87f);
    glEnd();
    // ** STRING LINE FINISH ** //

           // *******    ZEPPLIN FINISH     ********

    // *** FLAG OF UNITED ARAB EMIRATES **** //

    // A,B,C,D
    glBegin(GL_QUADS);
    glColor3ub(250, 21, 3);
    glVertex2f(0.48f, 0.91f);
    glVertex2f(0.48f, 0.82f);
    glVertex2f(0.53f, 0.82f);
    glVertex2f(0.53f, 0.91f);
    glEnd();

    // D,E,H,G
    glBegin(GL_QUADS);
    glColor3ub(4, 126, 28);
    glVertex2f(0.53f, 0.91f);
    glVertex2f(0.53f, 0.88f);
    glVertex2f(0.75f, 0.88f);
    glVertex2f(0.75f, 0.91f);
    glEnd();


    // E,F,I,H
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(0.53f, 0.88f);
    glVertex2f(0.53f, 0.85f);
    glVertex2f(0.75f, 0.85f);
    glVertex2f(0.75f, 0.88f);
    glEnd();


    // F,C,J,I
    glBegin(GL_QUADS);
    glColor3ub(10, 10, 10);
    glVertex2f(0.53f, 0.85f);
    glVertex2f(0.53f, 0.82f);
    glVertex2f(0.75f, 0.82f);
    glVertex2f(0.75f, 0.85f);
    glEnd();

    glPopMatrix();
    glLoadIdentity();


    // *** FLAG OF UNITED ARAB EMIRATES FINISH**** //


    glFlush();   // Render now
}

//==============================================***************************************************   NIGHT     ***************===========================================================================================


void night() {
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    int i;
    GLfloat x = -0.4f; GLfloat y = +0.65f; GLfloat radius = .16f;
    int triangleAmount = 100000; //# of triangles used to draw circle
    GLfloat twicePi = 2.0f * PI;

    glLoadIdentity();

    // STAR START //

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.85f, 0.65f);
    glVertex2f(-0.84f, 0.62f);
    glVertex2f(-0.82f, 0.64f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.84f, 0.62f);
    glVertex2f(-0.85f, 0.61f);
    glVertex2f(-0.84f, 0.64f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.84f, 0.62f);
    glVertex2f(-0.80f, 0.61f);
    glVertex2f(-0.82f, 0.64f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.84f, 0.64f);
    glVertex2f(-0.82f, 0.62f);
    glVertex2f(-0.80f, 0.65f);
    glEnd();
    // STAR FINISH //

    // COPY OF 01 STAR  START //
    glTranslatef(+0.30f, -0.20f, 0.0f);

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.85f, 0.65f);
    glVertex2f(-0.84f, 0.62f);
    glVertex2f(-0.82f, 0.64f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.84f, 0.62f);
    glVertex2f(-0.85f, 0.61f);
    glVertex2f(-0.84f, 0.64f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.84f, 0.62f);
    glVertex2f(-0.80f, 0.61f);
    glVertex2f(-0.82f, 0.64f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.84f, 0.64f);
    glVertex2f(-0.82f, 0.62f);
    glVertex2f(-0.80f, 0.65f);
    glEnd();

    glTranslatef(+0.30f, -0.20f, 0.0f);

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.85f, 0.65f);
    glVertex2f(-0.84f, 0.62f);
    glVertex2f(-0.82f, 0.64f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.84f, 0.62f);
    glVertex2f(-0.85f, 0.61f);
    glVertex2f(-0.84f, 0.64f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.84f, 0.62f);
    glVertex2f(-0.80f, 0.61f);
    glVertex2f(-0.82f, 0.64f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.84f, 0.64f);
    glVertex2f(-0.82f, 0.62f);
    glVertex2f(-0.80f, 0.65f);
    glEnd();

    glTranslatef(+0.60f, 0.20f, 0.0f);

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.85f, 0.65f);
    glVertex2f(-0.84f, 0.62f);
    glVertex2f(-0.82f, 0.64f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.84f, 0.62f);
    glVertex2f(-0.85f, 0.61f);
    glVertex2f(-0.84f, 0.64f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.84f, 0.62f);
    glVertex2f(-0.80f, 0.61f);
    glVertex2f(-0.82f, 0.64f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.84f, 0.64f);
    glVertex2f(-0.82f, 0.62f);
    glVertex2f(-0.80f, 0.65f);
    glEnd();

    glTranslatef(+0.50f, 0.20f, 0.0f);

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.85f, 0.65f);
    glVertex2f(-0.84f, 0.62f);
    glVertex2f(-0.82f, 0.64f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.84f, 0.62f);
    glVertex2f(-0.85f, 0.61f);
    glVertex2f(-0.84f, 0.64f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.84f, 0.62f);
    glVertex2f(-0.80f, 0.61f);
    glVertex2f(-0.82f, 0.64f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.84f, 0.64f);
    glVertex2f(-0.82f, 0.62f);
    glVertex2f(-0.80f, 0.65f);
    glEnd();

    glLoadIdentity();



    // COPY OF 01 STAR FINISH




    // *****BURJ KHALIFA START*****//
    // *****BURJ KHALIFA ADCB START*****//
    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(0.01f, 0.70f);
    glVertex2f(0.01f, 0.58f);
    glVertex2f(0.03f, 0.60f);
    glVertex2f(0.03f, 0.70f);
    glEnd();
    // *****BURJ KHALIFA ADCB FINISH*****//

    // *****BURJ KHALIFA 456C START*****//
    glBegin(GL_QUADS);
    glColor3ub(133, 193, 233);
    glVertex2f(-0.03f, 0.55f);
    glVertex2f(-0.03f, 0.40f);
    glVertex2f(0.03f, 0.40f);
    glVertex2f(0.03f, 0.60f);
    glEnd();
    // *****BURJ KHALIFA 456C FINISH*****//

    // *****BURJ KHALIFA 8,9,10,7 START*****//
    glBegin(GL_QUADS);
    glColor3ub(87, 101, 116);
    glVertex2f(-0.05f, 0.40f);
    glVertex2f(-0.05f, -0.47f);
    glVertex2f(0.00f, -0.47f);
    glVertex2f(0.00f, 0.45f);
    glEnd();
    // *****BURJ KHALIFA 8,9,10,7 FINISH*****//

     // *****BURJ KHALIFA 11,13,14,12 START*****//
    glBegin(GL_QUADS);
    glColor3ub(26, 82, 118);
    glVertex2f(-0.09f, 0.15f);
    glVertex2f(-0.09f, -0.47f);
    glVertex2f(-0.02f, -0.47f);
    glVertex2f(-0.02f, 0.18f);
    glEnd();
    // *****BURJ KHALIFA 11,13,14,12 FINISH*****//

     // *****BURJ KHALIFA 15,17,18,16 START*****//
    glBegin(GL_QUADS);
    glColor3ub(16, 79, 107);
    glVertex2f(0.02f, 0.18f);
    glVertex2f(+0.02f, -0.47f);
    glVertex2f(+0.09f, -0.47f);
    glVertex2f(+0.09f, 0.15f);
    glEnd();
    // *****BURJ KHALIFA 15,17,18,16 FINISH*****//

    // *****BURJ KHALIFA 23,25,9,24 START*****//
    glBegin(GL_QUADS);
    glColor3ub(133, 146, 158);
    glVertex2f(-0.11f, -0.05f);
    glVertex2f(-0.11f, -0.47f);
    glVertex2f(-0.05f, -0.47f);
    glVertex2f(-0.05f, 0.00f);
    glEnd();
    // *****BURJ KHALIFA 23,25,9,24 FINISH*****//

     // *****BURJ KHALIFA 26,28,29,27 START*****//
    glBegin(GL_QUADS);
    glColor3ub(41, 128, 185);
    glVertex2f(-0.13f, -0.30f);
    glVertex2f(-0.13f, -0.47f);
    glVertex2f(-0.08f, -0.47f);
    glVertex2f(-0.08f, -0.25f);
    glEnd();
    // *****BURJ KHALIFA 26,28,29,27 FINISH*****//

     // *****BURJ KHALIFA 19,22,21,20 START*****//
    glBegin(GL_QUADS);
    glColor3ub(131, 145, 146);
    glVertex2f(+0.05f, 0.00f);
    glVertex2f(+0.05f, -0.47f);
    glVertex2f(+0.11f, -0.47f);
    glVertex2f(0.11f, -0.05f);
    glEnd();
    // *****BURJ KHALIFA 19,22,21,20 FINISH*****//

    // *****BURJ KHALIFA 30,33,32,31 START*****//
    glBegin(GL_QUADS);
    glColor3ub(46, 134, 193);
    glVertex2f(+0.08f, -0.25f);
    glVertex2f(+0.08f, -0.47f);
    glVertex2f(+0.13f, -0.47f);
    glVertex2f(+0.13f, -0.30f);
    glEnd();
    // *****BURJ KHALIFA 30,33,32,31 FINISH*****//

    // *****BURJ KHALIFA Z1,10,22,Z2 START*****//
    glBegin(GL_QUADS);
    glColor3ub(241, 196, 15);
    glVertex2f(+0.00f, 0.40f);
    glVertex2f(+0.00f, -0.47f);
    glVertex2f(+0.05f, -0.47f);
    glVertex2f(+0.05f, +0.40f);
    glEnd();
    // *****BURJ KHALIFA Z1,10,22,Z2 FINISH*****//

    // *****BURJ KHALIFA 34,35,36,37 START*****//
    glBegin(GL_QUADS);
    glColor3ub(107, 105, 94);
    glVertex2f(-0.15f, -0.47f);
    glVertex2f(-0.15f, -0.50f);
    glVertex2f(+0.15f, -0.50f);
    glVertex2f(+0.15f, -0.47f);
    glEnd();
    // *****BURJ KHALIFA 34,35,36,37 FINISH*****//


     // *****BURJ KHALIFA FINISH*****//

    // *****BURJ KHALIFA RIGHT:01 START*****//

      // *****BURJ KHALIFA RIGHT:01  2,5,6,3 START*****//
    glBegin(GL_QUADS);
    glColor3ub(26, 188, 156);
    glVertex2f(+0.20f, 0.10f);
    glVertex2f(+0.20f, -0.50f);
    glVertex2f(+0.40f, -0.50f);
    glVertex2f(+0.40f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:01  2,5,6,3 FINISH*****//

      // *****BURJ KHALIFA RIGHT:01  1,2,3 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(21, 67, 96);
    glVertex2f(+0.30f, 0.30f);
    glVertex2f(+0.20f, +0.10f);
    glVertex2f(+0.40f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:01  1,2,3 FINISH*****//

      // *****BURJ KHALIFA RIGHT:01  4,2,3 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(244, 43, 8);
    glVertex2f(+0.30f, 0.25f);
    glVertex2f(+0.20f, +0.10f);
    glVertex2f(+0.40f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:01  4,2,3 FINISH*****//

     // *****BURJ KHALIFA RIGHT:01  2,7,9 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(245, 205, 5);
    glVertex2f(+0.20f, 0.10f);
    glVertex2f(+0.28f, -0.50f);
    glVertex2f(+0.28f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:01  2,7,9 FINISH*****//

      // *****BURJ KHALIFA RIGHT:01  10,8,3 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(245, 205, 5);
    glVertex2f(+0.32f, +0.10f);
    glVertex2f(+0.32f, -0.50f);
    glVertex2f(+0.40f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:01  10,8,3 FINISH*****//

    // *****BURJ KHALIFA RIGHT:01 FINISH*****//

     // *****BURJ KHALIFA RIGHT:02 START*****//

     // *****BURJ KHALIFA RIGHT:02  1,9,10,2 START*****//
    glBegin(GL_QUADS);
    glColor3ub(17, 178, 204);
    glVertex2f(+0.45f, +0.05f);
    glVertex2f(+0.45f, -0.05f);
    glVertex2f(+0.65f, -0.05f);
    glVertex2f(+0.65f, +0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  1,9,10,2 FINISH*****//

    // *****BURJ KHALIFA RIGHT:02  5,7,8,6 START*****//
    glBegin(GL_QUADS);
    glColor3ub(107, 97, 94);
    glVertex2f(+0.50f, +0.03f);
    glVertex2f(+0.50f, -0.02f);
    glVertex2f(+0.60f, -0.02f);
    glVertex2f(+0.60f, +0.03f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  5,7,8,6 FINISH*****//

     // *****BURJ KHALIFA RIGHT:02  9,4,3,10 START*****//
    glBegin(GL_QUADS);
    glColor3ub(107, 97, 94);
    glVertex2f(+0.45f, -0.05f);
    glVertex2f(+0.45f, -0.50f);
    glVertex2f(+0.65f, -0.50f);
    glVertex2f(+0.65f, -0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  9,4,3,10 FINISH*****//

     // *****BURJ KHALIFA RIGHT:02  11,13,14,12 START*****//
    glBegin(GL_QUADS);
    glColor3ub(241, 196, 15);
    glVertex2f(+0.52f, -0.05f);
    glVertex2f(+0.52f, -0.50f);
    glVertex2f(+0.57f, -0.50f);
    glVertex2f(+0.57f, -0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  11,13,14,12 FINISH*****//

      // *****BURJ KHALIFA RIGHT:02 FINISH*****//
      //
    // *****BURJ KHALIFA RIGHT:03 START*****//

     // *****BURJ KHALIFA RIGHT:03 1,2,3,4 START*****//
    glBegin(GL_QUADS);
    glColor3ub(67, 89, 108);
    glVertex2f(+0.70f, +0.30f);
    glVertex2f(+0.70f, +0.25f);
    glVertex2f(+0.73f, +0.25f);
    glVertex2f(+0.73f, +0.30f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:03  1,2,3,4 FINISH*****//


     // *****BURJ KHALIFA RIGHT:03 2,8,7,3 START*****//
    glBegin(GL_QUADS);
    glColor3ub(129, 186, 234);
    glVertex2f(+0.70f, +0.25f);
    glVertex2f(+0.70f, +0.00f);
    glVertex2f(+0.90f, +0.00f);
    glVertex2f(+0.73f, +0.25f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:03  2,8,7,3 FINISH*****//

      // *****BURJ KHALIFA RIGHT:03 8,5,6,7 START*****//
    glBegin(GL_QUADS);
    glColor3ub(44, 62, 80);
    glVertex2f(+0.70f, +0.00f);
    glVertex2f(+0.70f, -0.50f);
    glVertex2f(+0.90f, -0.50f);
    glVertex2f(+0.90f, +0.00f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:03  8,5,6,7 FINISH*****//

    // *****BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:03  A,B,C,D FINISH*****//

    // *****TRANSLATE OF NO:01 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.04f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:01 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

     // *****TRANSLATE OF NO:02 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.08f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:02 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

    // *****TRANSLATE OF NO:03 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.12f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:03 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

     // *****TRANSLATE OF NO:04 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.16f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:04 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

     // *****TRANSLATE OF NO:05 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.20f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:05 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//


     // *****TRANSLATE OF NO:06 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.24f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:06 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

     // *****TRANSLATE OF NO:07 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.28f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:07 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

      // *****TRANSLATE OF NO:08 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.32f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:08 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

      // *****TRANSLATE OF NO:09 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.36f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:09 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//


      // *****TRANSLATE OF NO:10 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.40f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:10 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

    // *****TRANSLATE OF NO:11 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.44f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:11 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//







    // *****BURJ KHALIFA RIGHT:03 FINISH*****//


    // *****BURJ KHALIFA LEFT:01 START*****//

    // *****BURJ KHALIFA LEFT:01 H,J,K,I START*****//
    glBegin(GL_QUADS);
    glColor3ub(223, 255, 0);
    glVertex2f(-0.50f, +0.30f);
    glVertex2f(-0.50f, +0.20f);
    glVertex2f(-0.48f, +0.18f);
    glVertex2f(-0.48f, +0.30f);
    glEnd();
    // *****BURJ KHALIFA LEFT:01  H,J,K,I FINISH*****//


    // *****BURJ KHALIFA LEFT:01 J,31,33,L START*****//
    glBegin(GL_QUADS);
    glColor3ub(88, 138, 112);
    glVertex2f(-0.50f, +0.20f);
    glVertex2f(-0.50f, -0.50f);
    glVertex2f(-0.35f, -0.50f);
    glVertex2f(-0.35f, +0.05f);
    glEnd();
    // *****BURJ KHALIFA LEFT:01  J,31,33,L FINISH*****//

     // *****BURJ KHALIFA LEFT:01 M,O,P,N START*****//
    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.50f, +0.10f);
    glVertex2f(-0.50f, +0.05f);
    glVertex2f(-0.45f, +0.05f);
    glVertex2f(-0.45f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA LEFT:01  M,O,P,N FINISH*****//

      // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//


    // COPY OF NO:01  *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glTranslatef(0.0f, -0.04f, 0.0f);
    // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    glLoadIdentity();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//
    // COPY OF NO:01  *****BURJ KHALIFA LEFT:01 A,S,T,R FINISH*****//

      // COPY OF NO:02  *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glTranslatef(0.0f, -0.08f, 0.0f);
    // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    glLoadIdentity();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//
    // COPY OF NO:02  *****BURJ KHALIFA LEFT:01 A,S,T,R FINISH*****//


     // COPY OF NO:03  *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glTranslatef(0.0f, -0.12f, 0.0f);
    // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    glLoadIdentity();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//
    // COPY OF NO:03  *****BURJ KHALIFA LEFT:01 A,S,T,R FINISH*****//


     // COPY OF NO:04  *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glTranslatef(0.0f, -0.16f, 0.0f);
    // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    glLoadIdentity();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//
    // COPY OF NO:04  *****BURJ KHALIFA LEFT:01 A,S,T,R FINISH*****//

     // COPY OF NO:05  *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glTranslatef(0.0f, -0.20f, 0.0f);
    // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    glLoadIdentity();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//
    // COPY OF NO:05  *****BURJ KHALIFA LEFT:01 A,S,T,R FINISH*****//

    // *****BURJ KHALIFA LEFT:01 FINISH*****//


     // *****BURJ KHALIFA LEFT:02 START*****//

     // *****BURJ KHALIFA LEFT:02 E,F,G START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(81, 90, 90);
    glVertex2f(-0.60f, +0.40f);
    glVertex2f(-0.75f, +0.30f);
    glVertex2f(-0.70f, +0.30f);
    glEnd();
    // *****BURJ KHALIFA LEFT:02 E,F,G FINISH*****//

     // *****BURJ KHALIFA LEFT:02 F,29,14,G START*****//
    glBegin(GL_QUADS);
    glColor3ub(27, 38, 49);
    glVertex2f(-0.75f, +0.30f);
    glVertex2f(-0.75f, -0.50f);
    glVertex2f(-0.70f, -0.50f);
    glVertex2f(-0.70f, +0.30f);
    glEnd();
    // *****BURJ KHALIFA LEFT:02 F,29,14,G FINISH*****//

     // *****BURJ KHALIFA LEFT:02 E,G,14,15 START*****//
    glBegin(GL_QUADS);
    glColor3ub(113, 125, 126);
    glVertex2f(-0.60f, +0.40f);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, -0.50f);
    glVertex2f(-0.60f, -0.50f);
    glEnd();
    // *****BURJ KHALIFA LEFT:02 E,G,14,15 FINISH*****//

    // *****BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    // *****BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

      // *****TRANSLATE OF NO:01 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.04f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:01 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

      // *****TRANSLATE OF NO:02 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.08f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:02 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:03 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.12f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:03 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:04 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.16f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:04 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//


     // *****TRANSLATE OF NO:05 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.20f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:05 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:06 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.24f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:06 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:07 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.28f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:07 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:08 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.32f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:08 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:09 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.36f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:09 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

    // *****TRANSLATE OF NO:10 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.40f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:10 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:11 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.44f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:11 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

    // *****TRANSLATE OF NO:12 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.48f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:12 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

    // *****TRANSLATE OF NO:13 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.52f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:13 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//







    // *****BURJ KHALIFA LEFT:02 FINISH*****//



     // TRANSLATION AND SCALING OF BURJ KHALIFA RIGHT:2 START //


    glTranslatef(-0.5f, 0.0f, 0.0f); // Translate x right and y up
    glScalef(0.5, 2, 0);
    // *****BURJ KHALIFA RIGHT:02 START*****//

    // *****BURJ KHALIFA RIGHT:02  1,9,10,2 START*****//
    glBegin(GL_QUADS);
    glColor3ub(17, 178, 204);
    glVertex2f(+0.45f, +0.05f);
    glVertex2f(+0.45f, -0.05f);
    glVertex2f(+0.65f, -0.05f);
    glVertex2f(+0.65f, +0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  1,9,10,2 FINISH*****//

    // *****BURJ KHALIFA RIGHT:02  5,7,8,6 START*****//
    glBegin(GL_QUADS);
    glColor3ub(107, 97, 94);
    glVertex2f(+0.50f, +0.03f);
    glVertex2f(+0.50f, -0.02f);
    glVertex2f(+0.60f, -0.02f);
    glVertex2f(+0.60f, +0.03f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  5,7,8,6 FINISH*****//

     // *****BURJ KHALIFA RIGHT:02  9,4,3,10 START*****//
    glBegin(GL_QUADS);
    glColor3ub(107, 97, 94);
    glVertex2f(+0.45f, -0.05f);
    glVertex2f(+0.45f, -0.50f);
    glVertex2f(+0.65f, -0.50f);
    glVertex2f(+0.65f, -0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  9,4,3,10 FINISH*****//

     // *****BURJ KHALIFA RIGHT:02  11,13,14,12 START*****//
    glBegin(GL_QUADS);
    glColor3ub(241, 196, 15);
    glVertex2f(+0.52f, -0.05f);
    glVertex2f(+0.52f, -0.50f);
    glVertex2f(+0.57f, -0.50f);
    glVertex2f(+0.57f, -0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  11,13,14,12 FINISH*****//

      // *****BURJ KHALIFA RIGHT:02 FINISH*****//
    glLoadIdentity();                // Reset the model-view matrix


    // TRANSLATION AND SCALING OF BURJ KHALIFA RIGHT:2 FINISH //


























    // *****HOUSE OF THE KING START*****//

    // *****HOUSE OF THE KING 4,5,6 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(223, 255, 0);
    glVertex2f(-0.85f, -0.20f);
    glVertex2f(-0.90f, -0.25f);
    glVertex2f(-0.80f, -0.25f);
    glEnd();
    // *****HOUSE OF THE KING 4,5,6 FINISH*****//

    // *****HOUSE OF THE KING 7,8,9 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(223, 255, 0);
    glVertex2f(-0.72f, -0.15f);
    glVertex2f(-0.74f, -0.20f);
    glVertex2f(-0.70f, -0.20f);
    glEnd();
    // *****HOUSE OF THE KING 7,8,9 FINISH*****//

     // *****HOUSE OF THE KING 10,11,12 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(223, 255, 0);
    glVertex2f(-0.65f, -0.255f);
    glVertex2f(-0.70f, -0.30f);
    glVertex2f(-0.60f, -0.30f);
    glEnd();
    // *****HOUSE OF THE KING 10,11,12 FINISH*****//

    // *****HOUSE OF THE KING 11,14,15,12 START*****//
    glBegin(GL_QUADS);
    glColor3ub(223, 255, 0);
    glVertex2f(-0.70f, -0.30f);
    glVertex2f(-0.70f, -0.50f);
    glVertex2f(-0.60f, -0.50f);
    glVertex2f(-0.60f, -0.30f);
    glEnd();
    // *****HOUSE OF THE KING 39,14,15,40 FINISH*****//


    // *****HOUSE OF THE KING 13,14,15 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(223, 255, 0);
    glVertex2f(-0.65f, -0.35f);
    glVertex2f(-0.70f, -0.50f);
    glVertex2f(-0.60f, -0.50f);
    glEnd();
    // *****HOUSE OF THE KING 13,14,15 FINISH*****//


     // *****HOUSE OF THE KING 16,17,18 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(223, 255, 0);
    glVertex2f(-0.58f, -0.15f);
    glVertex2f(-0.60f, -0.20f);
    glVertex2f(-0.56f, -0.20f);
    glEnd();
    // *****HOUSE OF THE KING 16,17,18 FINISH*****//

     // *****HOUSE OF THE KING 19,20,21 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(223, 255, 0);
    glVertex2f(-0.45f, -0.20f);
    glVertex2f(-0.50f, -0.25f);
    glVertex2f(-0.40f, -0.25f);
    glEnd();
    // *****HOUSE OF THE KING 19,20,21 FINISH*****//

      // *****HOUSE OF THE KING 22,23,24 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(223, 255, 0);
    glVertex2f(-0.30f, -0.30f);
    glVertex2f(-0.35f, -0.35f);
    glVertex2f(-0.25f, -0.35f);
    glEnd();
    // *****HOUSE OF THE KING 22,23,24 FINISH*****//

     // *****HOUSE OF THE KING 5,27,28,6 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.90f, -0.25f);
    glVertex2f(-0.90f, -0.50f);
    glVertex2f(-0.80f, -0.50f);
    glVertex2f(-0.80f, -0.25f);
    glEnd();
    // *****HOUSE OF THE KING 5,27,28,6 FINISH*****//

    // *****HOUSE OF THE KING 37,28,29,38 START*****//
    glBegin(GL_QUADS);
    glColor3ub(156, 100, 12);
    glVertex2f(-0.80f, -0.36f);
    glVertex2f(-0.80f, -0.50f);
    glVertex2f(-0.73f, -0.50f);
    glVertex2f(-0.73f, -0.36f);
    glEnd();
    // *****HOUSE OF THE KING 5,27,28,6 FINISH*****//


    // *****HOUSE OF THE KING 41,30,31,42 START*****//
    glBegin(GL_QUADS);
    glColor3ub(156, 100, 12);
    glVertex2f(-0.57f, -0.36f);
    glVertex2f(-0.57f, -0.50f);
    glVertex2f(-0.50f, -0.50f);
    glVertex2f(-0.50f, -0.36f);
    glEnd();
    // *****HOUSE OF THE KING 5,27,28,6 FINISH*****//

     // *****HOUSE OF THE KING 43,32,33,44 START*****//
    glBegin(GL_QUADS);
    glColor3ub(156, 100, 12);
    glVertex2f(-0.40f, -0.40f);
    glVertex2f(-0.40f, -0.50f);
    glVertex2f(-0.35f, -0.50f);
    glVertex2f(-0.35f, -0.40f);
    glEnd();
    // *****HOUSE OF THE KING 43,32,33,44 FINISH*****//

    // *****HOUSE OF THE KING 23,33,34,24 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.35f, -0.35f);
    glVertex2f(-0.35f, -0.50f);
    glVertex2f(-0.25f, -0.50f);
    glVertex2f(-0.25f, -0.35f);
    glEnd();
    // *****HOUSE OF THE KING 23,33,34,24 FINISH*****//

    // *****HOUSE OF THE KING 20,31,32,21 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.50f, -0.25f);
    glVertex2f(-0.50f, -0.50f);
    glVertex2f(-0.40f, -0.50f);
    glVertex2f(-0.40f, -0.25f);
    glEnd();
    // *****HOUSE OF THE KING 20,31,32,21 FINISH*****//

    // *****HOUSE OF THE KING 17,15,30,18 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.60f, -0.20f);
    glVertex2f(-0.60f, -0.50f);
    glVertex2f(-0.56f, -0.50f);
    glVertex2f(-0.56f, -0.20f);
    glEnd();
    // *****HOUSE OF THE KING 17,15,30,18 FINISH*****//

     // *****HOUSE OF THE KING 8,29,14,9 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.74f, -0.20f);
    glVertex2f(-0.74f, -0.50f);
    glVertex2f(-0.70f, -0.50f);
    glVertex2f(-0.70f, -0.20f);
    glEnd();
    // *****HOUSE OF THE KING 8,29,14,9 FINISH*****//

     // *****HOUSE OF THE KING 1,999,26,3 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.f, -0.5f);
    glVertex2f(-0.95f, -0.50f);
    glVertex2f(-0.95f, -0.35f);
    glEnd();
    // *****HOUSE OF THE KING 1,2,3 FINISH*****//


     // *****HOUSE OF THE KING 35,26,27,36 START*****//
    glBegin(GL_QUADS);
    glColor3ub(156, 100, 12);
    glVertex2f(-0.95f, -0.40f);
    glVertex2f(-0.95f, -0.5f);
    glVertex2f(-0.90f, -0.50f);
    glVertex2f(-0.90f, -0.40f);
    glEnd();
    // *****HOUSE OF THE KING 35,26,27,36 FINISH*****//

      // *****HOUSE OF THE KING 1,998,3 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(223, 255, 0);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.0f, -0.35f);
    glVertex2f(-0.95f, -0.35f);
    glEnd();
    // *****HOUSE OF THE KING 1,998,3 FINISH*****//

    // *****HOUSE OF THE KING FINISH*****//


        // *****ARAB SEA START*****//

    glBegin(GL_QUADS);
    glColor3ub(32, 188, 177);
    glVertex2f(-1.0f, -0.50f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(+1.0f, -1.0f);
    glVertex2f(+1.0f, -0.50f);
    glEnd();



    // *****ARAB SEA FINISH*****//

// *****DUBAI BASE START*****//

    glBegin(GL_QUADS);
    glColor3ub(255, 253, 0);
    glVertex2f(-1.0f, -0.50f);
    glVertex2f(-1.0f, -0.55f);
    glVertex2f(+1.0f, -0.55f);
    glVertex2f(+1.0f, -0.50f);
    glEnd();



    // *****DUBAI BASE FINISH*****//

     // *****DUBAI CRUISE SHIP START*****//

     // ** B,D,C,A START** //
    glPushMatrix(); //Birds
    glTranslatef(position, 0.0f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(+0.75f, -0.60f);
    glVertex2f(+0.75f, -0.70f);
    glVertex2f(+0.80f, -0.70f);
    glVertex2f(+0.80f, -0.60f);
    glEnd();
    // ** B,D,C,A FINISH** //

     // ** T1,T2,T3,T4 START** //
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(+0.83f, -0.60f);
    glVertex2f(+0.83f, -0.70f);
    glVertex2f(+0.88f, -0.70f);
    glVertex2f(+0.88f, -0.60f);
    glEnd();
    // ** T1,T2,T3,T4 FINISH** //


       // ** G,H,F,E START** //
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(+0.65f, -0.70f);
    glVertex2f(+0.60f, -0.75f);
    glVertex2f(+0.90f, -0.75f);
    glVertex2f(+0.90f, -0.70f);
    glEnd();
    // ** G,H,F,E FINISH** //

      // ** H,I,J,F START** //
    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(+0.60f, -0.75f);
    glVertex2f(+0.55f, -0.80f);
    glVertex2f(+0.90f, -0.80f);
    glVertex2f(+0.90f, -0.75f);
    glEnd();
    // ** H,I,J,F FINISH** //


    // ** K,L,M,N START** //
    glBegin(GL_QUADS);
    glColor3ub(111, 44, 100);
    glVertex2f(+0.50f, -0.80f);
    glVertex2f(+0.55f, -0.90f);
    glVertex2f(+0.95f, -0.90f);
    glVertex2f(+0.95f, -0.80f);
    glEnd();
    // ** K,L,M,N FINISH** //

     // ** O,P,Q,R START** //
    glBegin(GL_QUADS);
    glColor3ub(175, 204, 220);
    glVertex2f(+0.55f, -0.83f);
    glVertex2f(+0.55f, -0.86f);
    glVertex2f(+0.60f, -0.86f);
    glVertex2f(+0.60f, -0.83f);
    glEnd();

    glPopMatrix();
    j += 1.0f;
    glLoadIdentity();
    // ** O,P,Q,R FINISH** //


     // *****DUBAI CRUISE SHIP FINISH*****//



     // *****DUBAI CARRIER SHIP START*****//

    // ** A,B,C,D START** //
    glBegin(GL_QUADS);
    glColor3ub(231, 76, 60);
    glVertex2f(-0.25f, -0.85f);
    glVertex2f(-0.24f, -0.88f);
    glVertex2f(-0.10f, -0.88f);
    glVertex2f(-0.10f, -0.85f);
    glEnd();
    // ** A,B,C,D FINISH** //

     // ** B,E,F,C START** //
    glBegin(GL_QUADS);
    glColor3ub(66, 73, 73);
    glVertex2f(-0.24f, -0.88f);
    glVertex2f(-0.20f, -1.0f);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(-0.10f, -0.88f);
    glEnd();
    // ** B,E,F,C FINISH** //

    // ** G,F,V,U START** //
    glBegin(GL_QUADS);
    glColor3ub(66, 73, 73);
    glVertex2f(-0.05f, -0.95f);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(0.25f, -1.0f);
    glVertex2f(0.25f, -0.95f);
    glEnd();
    // ** G,F,V,U FINISH** //

     // ** R,Q,T,S START** //
    glBegin(GL_QUADS);
    glColor3ub(231, 76, 60);
    glVertex2f(+0.20f, -0.75f);
    glVertex2f(+0.20f, -0.95f);
    glVertex2f(0.27f, -0.95f);
    glVertex2f(0.27f, -0.75f);
    glEnd();
    // ** R,Q,T,S  FINISH** //



     // ** Y,V,W,X START** //
    glBegin(GL_QUADS);
    glColor3ub(66, 73, 73);
    glVertex2f(+0.25f, -0.90f);
    glVertex2f(+0.25f, -1.0f);
    glVertex2f(0.30f, -1.0f);
    glVertex2f(0.35f, -0.90f);
    glEnd();
    // ** Y,V,W,X FINISH** //

     // ** N,M,P,O START** //
    glBegin(GL_QUADS);
    glColor3ub(244, 208, 63);
    glVertex2f(+0.05f, -0.85f);
    glVertex2f(+0.05f, -0.95f);
    glVertex2f(+0.18f, -0.95f);
    glVertex2f(+0.18f, -0.85f);
    glEnd();
    // ** H,I,J,K FINISH** //


    // ***** THE SUN START *****//
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(214, 220, 222);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    // ***** THE SUN FINISH *****//

     // *******    ZEPPLIN START     ********

    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);

    // ** A,B,E,Z START ** //
    glBegin(GL_QUADS);
    glColor3ub(14, 3, 94);
    glVertex2f(0.13f, 0.90f);
    glVertex2f(0.10f, 0.85f);
    glVertex2f(0.15f, 0.85f);
    glVertex2f(0.15f, 0.90f);
    glEnd();
    // ** A,B,E,Z FINISH ** //

     // ** B,C,D,E START ** //
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(0.10f, 0.85f);
    glVertex2f(0.13f, 0.80f);
    glVertex2f(0.15f, 0.80f);
    glVertex2f(0.15f, 0.85f);
    glEnd();
    // ** B,C,D,E FINISH ** //



    // ** Z,D,G,F START ** //
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(0.15f, 0.90f);
    glVertex2f(0.15f, 0.80f);
    glVertex2f(0.30f, 0.80f);
    glVertex2f(0.30f, 0.90f);
    glEnd();
    // ** Z,D,G,F FINISH ** //

    // ** M,J,K,L START ** //
    glBegin(GL_QUADS);
    glColor3ub(231, 8, 8);
    glVertex2f(0.35f, 0.92f);
    glVertex2f(0.35f, 0.82f);
    glVertex2f(0.40f, 0.85f);
    glVertex2f(0.40f, 0.92f);
    glEnd();
    // ** M,J,K,L FINISH ** //

     // ** F,G,I,H START ** //
    glBegin(GL_QUADS);
    glColor3ub(231, 8, 8);
    glVertex2f(0.30f, 0.90f);
    glVertex2f(0.30f, 0.80f);
    glVertex2f(0.35f, 0.82f);
    glVertex2f(0.35f, 0.87f);
    glEnd();
    // ** F,G,I,H FINISH ** //


     // ** N,O,P,Q START ** //
    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(0.17f, 0.87f);
    glVertex2f(0.17f, 0.84f);
    glVertex2f(0.19f, 0.84f);
    glVertex2f(0.19f, 0.87f);
    glEnd();
    // ** N,O,P,Q FINISH ** //

   // TRANSLATE OF WINDOW  COPY :01  START   //

    // ** N,O,P,Q START ** //
    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(0.21f, 0.87f);
    glVertex2f(0.21f, 0.84f);
    glVertex2f(0.23f, 0.84f);
    glVertex2f(0.23f, 0.87f);
    glEnd();
    // ** N,O,P,Q FINISH ** //
    // TRANSLATE OF WINDOW  COPY : 01 FINISH   //

    // TRANSLATE OF WINDOW  COPY :01  START   //

    // ** N,O,P,Q START ** //
    glBegin(GL_QUADS);
    glColor3ub(255, 191, 0);
    glVertex2f(0.25f, 0.87f);
    glVertex2f(0.25f, 0.84f);
    glVertex2f(0.27f, 0.84f);
    glVertex2f(0.27f, 0.87f);
    glEnd();
    // ** N,O,P,Q FINISH ** //
    // TRANSLATE OF WINDOW  COPY : 01 FINISH   //


     // ** X,Z,Y,V START ** //
    glBegin(GL_QUADS);
    glColor3ub(231, 8, 8);
    glVertex2f(0.18f, 0.82f);
    glVertex2f(0.25f, 0.70f);
    glVertex2f(0.30f, 0.70f);
    glVertex2f(0.25f, 0.82f);
    glEnd();
    // ** X,Z,Y,V FINISH ** //


      // ** OPPOSITE FIN START ** //
    glBegin(GL_QUADS);
    glColor3ub(231, 8, 8);
    glVertex2f(0.18f, 0.90f);
    glVertex2f(0.25f, 0.90f);
    glVertex2f(0.30f, 0.95f);
    glVertex2f(0.25f, 0.95f);
    glEnd();
    // ** OPPOSITE FIN FINISH ** //

    // ** STRING LINE START ** //
    glBegin(GL_QUADS);
    glColor3ub(44, 0, 131);
    glVertex2f(0.40f, 0.87f);
    glVertex2f(0.40f, 0.86f);
    glVertex2f(0.48f, 0.86f);
    glVertex2f(0.48f, 0.87f);
    glEnd();
    // ** STRING LINE FINISH ** //

           // *******    ZEPPLIN FINISH     ********

    // *** FLAG OF UNITED ARAB EMIRATES **** //

    // A,B,C,D
    glBegin(GL_QUADS);
    glColor3ub(250, 21, 3);
    glVertex2f(0.48f, 0.91f);
    glVertex2f(0.48f, 0.82f);
    glVertex2f(0.53f, 0.82f);
    glVertex2f(0.53f, 0.91f);
    glEnd();

    // D,E,H,G
    glBegin(GL_QUADS);
    glColor3ub(4, 126, 28);
    glVertex2f(0.53f, 0.91f);
    glVertex2f(0.53f, 0.88f);
    glVertex2f(0.75f, 0.88f);
    glVertex2f(0.75f, 0.91f);
    glEnd();


    // E,F,I,H
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(0.53f, 0.88f);
    glVertex2f(0.53f, 0.85f);
    glVertex2f(0.75f, 0.85f);
    glVertex2f(0.75f, 0.88f);
    glEnd();


    // F,C,J,I
    glBegin(GL_QUADS);
    glColor3ub(10, 10, 10);
    glVertex2f(0.53f, 0.85f);
    glVertex2f(0.53f, 0.82f);
    glVertex2f(0.75f, 0.82f);
    glVertex2f(0.75f, 0.85f);
    glEnd();

    glPopMatrix();
    glLoadIdentity();


    // *** FLAG OF UNITED ARAB EMIRATES FINISH**** //

    glFlush();   // Render now
}

//=========================================================================================================================================================================================================

void rain() {
    glClearColor(0.55f, 0.55f, 0.55f, 1.0f); // Set background color to white and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    int i;
    GLfloat x = -0.4f; GLfloat y = +0.65f; GLfloat radius = .16f;
    int triangleAmount = 100000; //# of triangles used to draw circle
    GLfloat twicePi = 2.0f * PI;

    glLoadIdentity();


    // *****SKY START*****//
/*
glBegin(GL_QUADS);
glColor3ub(174, 214, 241);
glVertex2f(-1.0f, +1.0f);
glVertex2f(-1.0f, -0.50f);
glVertex2f(+1.0f, -0.50f);
glVertex2f(+1.0f, +1.0f);
glEnd();
*/
// *****SKY FINISH*****//




// *****BURJ KHALIFA START*****//
// *****BURJ KHALIFA ADCB START*****//
    glBegin(GL_QUADS);
    glColor3ub(41, 128, 185);
    glVertex2f(0.01f, 0.70f);
    glVertex2f(0.01f, 0.58f);
    glVertex2f(0.03f, 0.60f);
    glVertex2f(0.03f, 0.70f);
    glEnd();
    // *****BURJ KHALIFA ADCB FINISH*****//

    // *****BURJ KHALIFA 456C START*****//
    glBegin(GL_QUADS);
    glColor3ub(133, 193, 233);
    glVertex2f(-0.03f, 0.55f);
    glVertex2f(-0.03f, 0.40f);
    glVertex2f(0.03f, 0.40f);
    glVertex2f(0.03f, 0.60f);
    glEnd();
    // *****BURJ KHALIFA 456C FINISH*****//

    // *****BURJ KHALIFA 8,9,10,7 START*****//
    glBegin(GL_QUADS);
    glColor3ub(87, 101, 116);
    glVertex2f(-0.05f, 0.40f);
    glVertex2f(-0.05f, -0.47f);
    glVertex2f(0.00f, -0.47f);
    glVertex2f(0.00f, 0.45f);
    glEnd();
    // *****BURJ KHALIFA 8,9,10,7 FINISH*****//

     // *****BURJ KHALIFA 11,13,14,12 START*****//
    glBegin(GL_QUADS);
    glColor3ub(26, 82, 118);
    glVertex2f(-0.09f, 0.15f);
    glVertex2f(-0.09f, -0.47f);
    glVertex2f(-0.02f, -0.47f);
    glVertex2f(-0.02f, 0.18f);
    glEnd();
    // *****BURJ KHALIFA 11,13,14,12 FINISH*****//

     // *****BURJ KHALIFA 15,17,18,16 START*****//
    glBegin(GL_QUADS);
    glColor3ub(16, 79, 107);
    glVertex2f(0.02f, 0.18f);
    glVertex2f(+0.02f, -0.47f);
    glVertex2f(+0.09f, -0.47f);
    glVertex2f(+0.09f, 0.15f);
    glEnd();
    // *****BURJ KHALIFA 15,17,18,16 FINISH*****//

    // *****BURJ KHALIFA 23,25,9,24 START*****//
    glBegin(GL_QUADS);
    glColor3ub(64, 224, 208);
    glVertex2f(-0.11f, -0.05f);
    glVertex2f(-0.11f, -0.47f);
    glVertex2f(-0.05f, -0.47f);
    glVertex2f(-0.05f, 0.00f);
    glEnd();
    // *****BURJ KHALIFA 23,25,9,24 FINISH*****//

     // *****BURJ KHALIFA 26,28,29,27 START*****//
    glBegin(GL_QUADS);
    glColor3ub(52, 73, 94);
    glVertex2f(-0.13f, -0.30f);
    glVertex2f(-0.13f, -0.47f);
    glVertex2f(-0.08f, -0.47f);
    glVertex2f(-0.08f, -0.25f);
    glEnd();
    // *****BURJ KHALIFA 26,28,29,27 FINISH*****//

     // *****BURJ KHALIFA 19,22,21,20 START*****//
    glBegin(GL_QUADS);
    glColor3ub(64, 224, 208);
    glVertex2f(+0.05f, 0.00f);
    glVertex2f(+0.05f, -0.47f);
    glVertex2f(+0.11f, -0.47f);
    glVertex2f(0.11f, -0.05f);
    glEnd();
    // *****BURJ KHALIFA 19,22,21,20 FINISH*****//

    // *****BURJ KHALIFA 30,33,32,31 START*****//
    glBegin(GL_QUADS);
    glColor3ub(52, 73, 94);
    glVertex2f(+0.08f, -0.25f);
    glVertex2f(+0.08f, -0.47f);
    glVertex2f(+0.13f, -0.47f);
    glVertex2f(+0.13f, -0.30f);
    glEnd();
    // *****BURJ KHALIFA 30,33,32,31 FINISH*****//

    // *****BURJ KHALIFA Z1,10,22,Z2 START*****//
    glBegin(GL_QUADS);
    glColor3ub(40, 116, 166);
    glVertex2f(+0.00f, 0.40f);
    glVertex2f(+0.00f, -0.47f);
    glVertex2f(+0.05f, -0.47f);
    glVertex2f(+0.05f, +0.40f);
    glEnd();
    // *****BURJ KHALIFA Z1,10,22,Z2 FINISH*****//

    // *****BURJ KHALIFA 34,35,36,37 START*****//
    glBegin(GL_QUADS);
    glColor3ub(107, 105, 94);
    glVertex2f(-0.15f, -0.47f);
    glVertex2f(-0.15f, -0.50f);
    glVertex2f(+0.15f, -0.50f);
    glVertex2f(+0.15f, -0.47f);
    glEnd();
    // *****BURJ KHALIFA 34,35,36,37 FINISH*****//


     // *****BURJ KHALIFA FINISH*****//

    // *****BURJ KHALIFA RIGHT:01 START*****//

      // *****BURJ KHALIFA RIGHT:01  2,5,6,3 START*****//
    glBegin(GL_QUADS);
    glColor3ub(26, 188, 156);
    glVertex2f(+0.20f, 0.10f);
    glVertex2f(+0.20f, -0.50f);
    glVertex2f(+0.40f, -0.50f);
    glVertex2f(+0.40f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:01  2,5,6,3 FINISH*****//

      // *****BURJ KHALIFA RIGHT:01  1,2,3 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(21, 67, 96);
    glVertex2f(+0.30f, 0.30f);
    glVertex2f(+0.20f, +0.10f);
    glVertex2f(+0.40f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:01  1,2,3 FINISH*****//

      // *****BURJ KHALIFA RIGHT:01  4,2,3 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(244, 43, 8);
    glVertex2f(+0.30f, 0.25f);
    glVertex2f(+0.20f, +0.10f);
    glVertex2f(+0.40f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:01  4,2,3 FINISH*****//

     // *****BURJ KHALIFA RIGHT:01  2,7,9 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(245, 205, 5);
    glVertex2f(+0.20f, 0.10f);
    glVertex2f(+0.28f, -0.50f);
    glVertex2f(+0.28f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:01  2,7,9 FINISH*****//

      // *****BURJ KHALIFA RIGHT:01  10,8,3 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(245, 205, 5);
    glVertex2f(+0.32f, +0.10f);
    glVertex2f(+0.32f, -0.50f);
    glVertex2f(+0.40f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:01  10,8,3 FINISH*****//

    // *****BURJ KHALIFA RIGHT:01 FINISH*****//

     // *****BURJ KHALIFA RIGHT:02 START*****//

     // *****BURJ KHALIFA RIGHT:02  1,9,10,2 START*****//
    glBegin(GL_QUADS);
    glColor3ub(17, 178, 204);
    glVertex2f(+0.45f, +0.05f);
    glVertex2f(+0.45f, -0.05f);
    glVertex2f(+0.65f, -0.05f);
    glVertex2f(+0.65f, +0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  1,9,10,2 FINISH*****//

    // *****BURJ KHALIFA RIGHT:02  5,7,8,6 START*****//
    glBegin(GL_QUADS);
    glColor3ub(107, 97, 94);
    glVertex2f(+0.50f, +0.03f);
    glVertex2f(+0.50f, -0.02f);
    glVertex2f(+0.60f, -0.02f);
    glVertex2f(+0.60f, +0.03f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  5,7,8,6 FINISH*****//

     // *****BURJ KHALIFA RIGHT:02  9,4,3,10 START*****//
    glBegin(GL_QUADS);
    glColor3ub(107, 97, 94);
    glVertex2f(+0.45f, -0.05f);
    glVertex2f(+0.45f, -0.50f);
    glVertex2f(+0.65f, -0.50f);
    glVertex2f(+0.65f, -0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  9,4,3,10 FINISH*****//

     // *****BURJ KHALIFA RIGHT:02  11,13,14,12 START*****//
    glBegin(GL_QUADS);
    glColor3ub(241, 196, 15);
    glVertex2f(+0.52f, -0.05f);
    glVertex2f(+0.52f, -0.50f);
    glVertex2f(+0.57f, -0.50f);
    glVertex2f(+0.57f, -0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  11,13,14,12 FINISH*****//

      // *****BURJ KHALIFA RIGHT:02 FINISH*****//
      //
    // *****BURJ KHALIFA RIGHT:03 START*****//

     // *****BURJ KHALIFA RIGHT:03 1,2,3,4 START*****//
    glBegin(GL_QUADS);
    glColor3ub(67, 89, 108);
    glVertex2f(+0.70f, +0.30f);
    glVertex2f(+0.70f, +0.25f);
    glVertex2f(+0.73f, +0.25f);
    glVertex2f(+0.73f, +0.30f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:03  1,2,3,4 FINISH*****//


     // *****BURJ KHALIFA RIGHT:03 2,8,7,3 START*****//
    glBegin(GL_QUADS);
    glColor3ub(129, 186, 234);
    glVertex2f(+0.70f, +0.25f);
    glVertex2f(+0.70f, +0.00f);
    glVertex2f(+0.90f, +0.00f);
    glVertex2f(+0.73f, +0.25f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:03  2,8,7,3 FINISH*****//

      // *****BURJ KHALIFA RIGHT:03 8,5,6,7 START*****//
    glBegin(GL_QUADS);
    glColor3ub(44, 62, 80);
    glVertex2f(+0.70f, +0.00f);
    glVertex2f(+0.70f, -0.50f);
    glVertex2f(+0.90f, -0.50f);
    glVertex2f(+0.90f, +0.00f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:03  8,5,6,7 FINISH*****//

    // *****BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:03  A,B,C,D FINISH*****//

    // *****TRANSLATE OF NO:01 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.04f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:01 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

     // *****TRANSLATE OF NO:02 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.08f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:02 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

    // *****TRANSLATE OF NO:03 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.12f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:03 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

     // *****TRANSLATE OF NO:04 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.16f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:04 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

     // *****TRANSLATE OF NO:05 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.20f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:05 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//


     // *****TRANSLATE OF NO:06 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.24f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:06 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

     // *****TRANSLATE OF NO:07 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.28f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:07 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

      // *****TRANSLATE OF NO:08 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.32f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:08 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

      // *****TRANSLATE OF NO:09 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.36f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:09 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//


      // *****TRANSLATE OF NO:10 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.40f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:10 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

    // *****TRANSLATE OF NO:11 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.44f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:11 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//







    // *****BURJ KHALIFA RIGHT:03 FINISH*****//


    // *****BURJ KHALIFA LEFT:01 START*****//

    // *****BURJ KHALIFA LEFT:01 H,J,K,I START*****//
    glBegin(GL_QUADS);
    glColor3ub(7, 25, 248);
    glVertex2f(-0.50f, +0.30f);
    glVertex2f(-0.50f, +0.20f);
    glVertex2f(-0.48f, +0.18f);
    glVertex2f(-0.48f, +0.30f);
    glEnd();
    // *****BURJ KHALIFA LEFT:01  H,J,K,I FINISH*****//


    // *****BURJ KHALIFA LEFT:01 J,31,33,L START*****//
    glBegin(GL_QUADS);
    glColor3ub(88, 138, 112);
    glVertex2f(-0.50f, +0.20f);
    glVertex2f(-0.50f, -0.50f);
    glVertex2f(-0.35f, -0.50f);
    glVertex2f(-0.35f, +0.05f);
    glEnd();
    // *****BURJ KHALIFA LEFT:01  J,31,33,L FINISH*****//

     // *****BURJ KHALIFA LEFT:01 M,O,P,N START*****//
    glBegin(GL_QUADS);
    glColor3ub(218, 58, 39);
    glVertex2f(-0.50f, +0.10f);
    glVertex2f(-0.50f, +0.05f);
    glVertex2f(-0.45f, +0.05f);
    glVertex2f(-0.45f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA LEFT:01  M,O,P,N FINISH*****//

      // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(4, 18, 106);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//


    // COPY OF NO:01  *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glTranslatef(0.0f, -0.04f, 0.0f);
    // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(4, 18, 106);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    glLoadIdentity();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//
    // COPY OF NO:01  *****BURJ KHALIFA LEFT:01 A,S,T,R FINISH*****//

      // COPY OF NO:02  *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glTranslatef(0.0f, -0.08f, 0.0f);
    // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(4, 18, 106);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    glLoadIdentity();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//
    // COPY OF NO:02  *****BURJ KHALIFA LEFT:01 A,S,T,R FINISH*****//


     // COPY OF NO:03  *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glTranslatef(0.0f, -0.12f, 0.0f);
    // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(4, 18, 106);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    glLoadIdentity();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//
    // COPY OF NO:03  *****BURJ KHALIFA LEFT:01 A,S,T,R FINISH*****//


     // COPY OF NO:04  *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glTranslatef(0.0f, -0.16f, 0.0f);
    // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(4, 18, 106);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    glLoadIdentity();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//
    // COPY OF NO:04  *****BURJ KHALIFA LEFT:01 A,S,T,R FINISH*****//

     // COPY OF NO:05  *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glTranslatef(0.0f, -0.20f, 0.0f);
    // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(4, 18, 106);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    glLoadIdentity();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//
    // COPY OF NO:05  *****BURJ KHALIFA LEFT:01 A,S,T,R FINISH*****//

    // *****BURJ KHALIFA LEFT:01 FINISH*****//


     // *****BURJ KHALIFA LEFT:02 START*****//

     // *****BURJ KHALIFA LEFT:02 E,F,G START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(81, 90, 90);
    glVertex2f(-0.60f, +0.40f);
    glVertex2f(-0.75f, +0.30f);
    glVertex2f(-0.70f, +0.30f);
    glEnd();
    // *****BURJ KHALIFA LEFT:02 E,F,G FINISH*****//

     // *****BURJ KHALIFA LEFT:02 F,29,14,G START*****//
    glBegin(GL_QUADS);
    glColor3ub(27, 38, 49);
    glVertex2f(-0.75f, +0.30f);
    glVertex2f(-0.75f, -0.50f);
    glVertex2f(-0.70f, -0.50f);
    glVertex2f(-0.70f, +0.30f);
    glEnd();
    // *****BURJ KHALIFA LEFT:02 F,29,14,G FINISH*****//

     // *****BURJ KHALIFA LEFT:02 E,G,14,15 START*****//
    glBegin(GL_QUADS);
    glColor3ub(113, 125, 126);
    glVertex2f(-0.60f, +0.40f);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, -0.50f);
    glVertex2f(-0.60f, -0.50f);
    glEnd();
    // *****BURJ KHALIFA LEFT:02 E,G,14,15 FINISH*****//

    // *****BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    // *****BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

      // *****TRANSLATE OF NO:01 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.04f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:01 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

      // *****TRANSLATE OF NO:02 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.08f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:02 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:03 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.12f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:03 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:04 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.16f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:04 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//


     // *****TRANSLATE OF NO:05 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.20f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:05 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:06 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.24f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:06 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:07 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.28f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:07 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:08 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.32f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:08 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:09 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.36f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:09 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

    // *****TRANSLATE OF NO:10 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.40f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:10 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:11 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.44f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:11 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

    // *****TRANSLATE OF NO:12 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.48f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:12 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

    // *****TRANSLATE OF NO:13 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.52f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:13 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//







    // *****BURJ KHALIFA LEFT:02 FINISH*****//



     // TRANSLATION AND SCALING OF BURJ KHALIFA RIGHT:2 START //


    glTranslatef(-0.5f, 0.0f, 0.0f); // Translate x right and y up
    glScalef(0.5, 2, 0);
    // *****BURJ KHALIFA RIGHT:02 START*****//

    // *****BURJ KHALIFA RIGHT:02  1,9,10,2 START*****//
    glBegin(GL_QUADS);
    glColor3ub(17, 178, 204);
    glVertex2f(+0.45f, +0.05f);
    glVertex2f(+0.45f, -0.05f);
    glVertex2f(+0.65f, -0.05f);
    glVertex2f(+0.65f, +0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  1,9,10,2 FINISH*****//

    // *****BURJ KHALIFA RIGHT:02  5,7,8,6 START*****//
    glBegin(GL_QUADS);
    glColor3ub(107, 97, 94);
    glVertex2f(+0.50f, +0.03f);
    glVertex2f(+0.50f, -0.02f);
    glVertex2f(+0.60f, -0.02f);
    glVertex2f(+0.60f, +0.03f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  5,7,8,6 FINISH*****//

     // *****BURJ KHALIFA RIGHT:02  9,4,3,10 START*****//
    glBegin(GL_QUADS);
    glColor3ub(107, 97, 94);
    glVertex2f(+0.45f, -0.05f);
    glVertex2f(+0.45f, -0.50f);
    glVertex2f(+0.65f, -0.50f);
    glVertex2f(+0.65f, -0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  9,4,3,10 FINISH*****//

     // *****BURJ KHALIFA RIGHT:02  11,13,14,12 START*****//
    glBegin(GL_QUADS);
    glColor3ub(241, 196, 15);
    glVertex2f(+0.52f, -0.05f);
    glVertex2f(+0.52f, -0.50f);
    glVertex2f(+0.57f, -0.50f);
    glVertex2f(+0.57f, -0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  11,13,14,12 FINISH*****//

      // *****BURJ KHALIFA RIGHT:02 FINISH*****//
    glLoadIdentity();                // Reset the model-view matrix


    // TRANSLATION AND SCALING OF BURJ KHALIFA RIGHT:2 FINISH //




    // *****HOUSE OF THE KING START*****//

    // *****HOUSE OF THE KING 4,5,6 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.85f, -0.20f);
    glVertex2f(-0.90f, -0.25f);
    glVertex2f(-0.80f, -0.25f);
    glEnd();
    // *****HOUSE OF THE KING 4,5,6 FINISH*****//

    // *****HOUSE OF THE KING 7,8,9 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.72f, -0.15f);
    glVertex2f(-0.74f, -0.20f);
    glVertex2f(-0.70f, -0.20f);
    glEnd();
    // *****HOUSE OF THE KING 7,8,9 FINISH*****//

     // *****HOUSE OF THE KING 10,11,12 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.65f, -0.255f);
    glVertex2f(-0.70f, -0.30f);
    glVertex2f(-0.60f, -0.30f);
    glEnd();
    // *****HOUSE OF THE KING 10,11,12 FINISH*****//

    // *****HOUSE OF THE KING 11,14,15,12 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.70f, -0.30f);
    glVertex2f(-0.70f, -0.50f);
    glVertex2f(-0.60f, -0.50f);
    glVertex2f(-0.60f, -0.30f);
    glEnd();
    // *****HOUSE OF THE KING 39,14,15,40 FINISH*****//


    // *****HOUSE OF THE KING 13,14,15 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.65f, -0.35f);
    glVertex2f(-0.70f, -0.50f);
    glVertex2f(-0.60f, -0.50f);
    glEnd();
    // *****HOUSE OF THE KING 13,14,15 FINISH*****//


     // *****HOUSE OF THE KING 16,17,18 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.58f, -0.15f);
    glVertex2f(-0.60f, -0.20f);
    glVertex2f(-0.56f, -0.20f);
    glEnd();
    // *****HOUSE OF THE KING 16,17,18 FINISH*****//

     // *****HOUSE OF THE KING 19,20,21 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.45f, -0.20f);
    glVertex2f(-0.50f, -0.25f);
    glVertex2f(-0.40f, -0.25f);
    glEnd();
    // *****HOUSE OF THE KING 19,20,21 FINISH*****//

      // *****HOUSE OF THE KING 22,23,24 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.30f, -0.30f);
    glVertex2f(-0.35f, -0.35f);
    glVertex2f(-0.25f, -0.35f);
    glEnd();
    // *****HOUSE OF THE KING 22,23,24 FINISH*****//

     // *****HOUSE OF THE KING 5,27,28,6 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.90f, -0.25f);
    glVertex2f(-0.90f, -0.50f);
    glVertex2f(-0.80f, -0.50f);
    glVertex2f(-0.80f, -0.25f);
    glEnd();
    // *****HOUSE OF THE KING 5,27,28,6 FINISH*****//

    // *****HOUSE OF THE KING 37,28,29,38 START*****//
    glBegin(GL_QUADS);
    glColor3ub(156, 100, 12);
    glVertex2f(-0.80f, -0.36f);
    glVertex2f(-0.80f, -0.50f);
    glVertex2f(-0.73f, -0.50f);
    glVertex2f(-0.73f, -0.36f);
    glEnd();
    // *****HOUSE OF THE KING 5,27,28,6 FINISH*****//


    // *****HOUSE OF THE KING 41,30,31,42 START*****//
    glBegin(GL_QUADS);
    glColor3ub(156, 100, 12);
    glVertex2f(-0.57f, -0.36f);
    glVertex2f(-0.57f, -0.50f);
    glVertex2f(-0.50f, -0.50f);
    glVertex2f(-0.50f, -0.36f);
    glEnd();
    // *****HOUSE OF THE KING 5,27,28,6 FINISH*****//

     // *****HOUSE OF THE KING 43,32,33,44 START*****//
    glBegin(GL_QUADS);
    glColor3ub(156, 100, 12);
    glVertex2f(-0.40f, -0.40f);
    glVertex2f(-0.40f, -0.50f);
    glVertex2f(-0.35f, -0.50f);
    glVertex2f(-0.35f, -0.40f);
    glEnd();
    // *****HOUSE OF THE KING 43,32,33,44 FINISH*****//

    // *****HOUSE OF THE KING 23,33,34,24 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.35f, -0.35f);
    glVertex2f(-0.35f, -0.50f);
    glVertex2f(-0.25f, -0.50f);
    glVertex2f(-0.25f, -0.35f);
    glEnd();
    // *****HOUSE OF THE KING 23,33,34,24 FINISH*****//

    // *****HOUSE OF THE KING 20,31,32,21 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.50f, -0.25f);
    glVertex2f(-0.50f, -0.50f);
    glVertex2f(-0.40f, -0.50f);
    glVertex2f(-0.40f, -0.25f);
    glEnd();
    // *****HOUSE OF THE KING 20,31,32,21 FINISH*****//

    // *****HOUSE OF THE KING 17,15,30,18 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.60f, -0.20f);
    glVertex2f(-0.60f, -0.50f);
    glVertex2f(-0.56f, -0.50f);
    glVertex2f(-0.56f, -0.20f);
    glEnd();
    // *****HOUSE OF THE KING 17,15,30,18 FINISH*****//

     // *****HOUSE OF THE KING 8,29,14,9 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.74f, -0.20f);
    glVertex2f(-0.74f, -0.50f);
    glVertex2f(-0.70f, -0.50f);
    glVertex2f(-0.70f, -0.20f);
    glEnd();
    // *****HOUSE OF THE KING 8,29,14,9 FINISH*****//

     // *****HOUSE OF THE KING 1,999,26,3 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.f, -0.5f);
    glVertex2f(-0.95f, -0.50f);
    glVertex2f(-0.95f, -0.35f);
    glEnd();
    // *****HOUSE OF THE KING 1,2,3 FINISH*****//


     // *****HOUSE OF THE KING 35,26,27,36 START*****//
    glBegin(GL_QUADS);
    glColor3ub(156, 100, 12);
    glVertex2f(-0.95f, -0.40f);
    glVertex2f(-0.95f, -0.5f);
    glVertex2f(-0.90f, -0.50f);
    glVertex2f(-0.90f, -0.40f);
    glEnd();
    // *****HOUSE OF THE KING 35,26,27,36 FINISH*****//

      // *****HOUSE OF THE KING 1,998,3 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.0f, -0.35f);
    glVertex2f(-0.95f, -0.35f);
    glEnd();
    // *****HOUSE OF THE KING 1,998,3 FINISH*****//

    // *****HOUSE OF THE KING FINISH*****//


        // *****ARAB SEA START*****//

    glBegin(GL_QUADS);
    glColor3ub(32, 238, 197);
    glVertex2f(-1.0f, -0.50f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(+1.0f, -1.0f);
    glVertex2f(+1.0f, -0.50f);
    glEnd();



    // *****ARAB SEA FINISH*****//

// *****DUBAI BASE START*****//

    glBegin(GL_QUADS);
    glColor3ub(81, 81, 81);
    glVertex2f(-1.0f, -0.50f);
    glVertex2f(-1.0f, -0.55f);
    glVertex2f(+1.0f, -0.55f);
    glVertex2f(+1.0f, -0.50f);
    glEnd();



    // *****DUBAI BASE FINISH*****//

     // *****DUBAI CRUISE SHIP START*****//

     // ** B,D,C,A START** //
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(+0.75f, -0.60f);
    glVertex2f(+0.75f, -0.70f);
    glVertex2f(+0.80f, -0.70f);
    glVertex2f(+0.80f, -0.60f);
    glEnd();
    // ** B,D,C,A FINISH** //

     // ** T1,T2,T3,T4 START** //
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(+0.83f, -0.60f);
    glVertex2f(+0.83f, -0.70f);
    glVertex2f(+0.88f, -0.70f);
    glVertex2f(+0.88f, -0.60f);
    glEnd();
    // ** T1,T2,T3,T4 FINISH** //


       // ** G,H,F,E START** //
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(+0.65f, -0.70f);
    glVertex2f(+0.60f, -0.75f);
    glVertex2f(+0.90f, -0.75f);
    glVertex2f(+0.90f, -0.70f);
    glEnd();
    // ** G,H,F,E FINISH** //

      // ** H,I,J,F START** //
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(+0.60f, -0.75f);
    glVertex2f(+0.55f, -0.80f);
    glVertex2f(+0.90f, -0.80f);
    glVertex2f(+0.90f, -0.75f);
    glEnd();
    // ** H,I,J,F FINISH** //


    // ** K,L,M,N START** //
    glBegin(GL_QUADS);
    glColor3ub(111, 44, 100);
    glVertex2f(+0.50f, -0.80f);
    glVertex2f(+0.55f, -0.90f);
    glVertex2f(+0.95f, -0.90f);
    glVertex2f(+0.95f, -0.80f);
    glEnd();
    // ** K,L,M,N FINISH** //

     // ** O,P,Q,R START** //
    glBegin(GL_QUADS);
    glColor3ub(175, 204, 220);
    glVertex2f(+0.55f, -0.83f);
    glVertex2f(+0.55f, -0.86f);
    glVertex2f(+0.60f, -0.86f);
    glVertex2f(+0.60f, -0.83f);
    glEnd();
    // ** O,P,Q,R FINISH** //

     // *****DUBAI CRUISE SHIP FINISH*****//



     // *****DUBAI CARRIER SHIP START*****//

    // ** A,B,C,D START** //
    glPushMatrix(); //Birds
    glTranslatef(position, 0.0f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(231, 76, 60);
    glVertex2f(-0.25f, -0.85f);
    glVertex2f(-0.24f, -0.88f);
    glVertex2f(-0.10f, -0.88f);
    glVertex2f(-0.10f, -0.85f);
    glEnd();
    // ** A,B,C,D FINISH** //

     // ** B,E,F,C START** //
    glBegin(GL_QUADS);
    glColor3ub(66, 73, 73);
    glVertex2f(-0.24f, -0.88f);
    glVertex2f(-0.20f, -1.0f);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(-0.10f, -0.88f);
    glEnd();
    // ** B,E,F,C FINISH** //

    // ** G,F,V,U START** //
    glBegin(GL_QUADS);
    glColor3ub(66, 73, 73);
    glVertex2f(-0.05f, -0.95f);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(0.25f, -1.0f);
    glVertex2f(0.25f, -0.95f);
    glEnd();
    // ** G,F,V,U FINISH** //

     // ** R,Q,T,S START** //
    glBegin(GL_QUADS);
    glColor3ub(231, 76, 60);
    glVertex2f(+0.20f, -0.75f);
    glVertex2f(+0.20f, -0.95f);
    glVertex2f(0.27f, -0.95f);
    glVertex2f(0.27f, -0.75f);
    glEnd();
    // ** R,Q,T,S  FINISH** //



     // ** Y,V,W,X START** //
    glBegin(GL_QUADS);
    glColor3ub(66, 73, 73);
    glVertex2f(+0.25f, -0.90f);
    glVertex2f(+0.25f, -1.0f);
    glVertex2f(0.30f, -1.0f);
    glVertex2f(0.35f, -0.90f);
    glEnd();
    // ** Y,V,W,X FINISH** //

     // ** N,M,P,O START** //
    glBegin(GL_QUADS);
    glColor3ub(244, 208, 63);
    glVertex2f(+0.05f, -0.85f);
    glVertex2f(+0.05f, -0.95f);
    glVertex2f(+0.18f, -0.95f);
    glVertex2f(+0.18f, -0.85f);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
    // ** H,I,J,K FINISH** //


    // ***** THE SUN START *****//
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(244, 255, 2);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    // ***** THE SUN FINISH *****//






    glFlush();   // Render now
}

/////////////////////////////////////////////////////////////////////////////////////   MID DAY EFFECT  ***************************************************

void miday() {
    glClearColor(0.7f, 0.85f, 0.95f, 1.0f); // Set background color to white and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    int i;
    GLfloat x = -0.4f; GLfloat y = +0.65f; GLfloat radius = .16f;
    int triangleAmount = 100000; //# of triangles used to draw circle
    GLfloat twicePi = 2.0f * PI;

    glLoadIdentity();

    /*
        glBegin(GL_TRIANGLE_FAN); |||||||||||||||||||||||||||||||||*** SAMPLE CIRCLE ***
        glColor3ub(244, 255, 2);
        glVertex2f(x, y); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                x + (radius * cos(i * twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
        glEnd();


       glBegin(GL_TRIANGLES); |||||||||||||||||||||||||||||||||*** SAMPLE TRIANGLE ***
        glColor3ub(23, 32, 42);
        glVertex2f(-0.725f, 0.15f);
        glVertex2f(-1.0f, -0.25f);
        glVertex2f(-0.45f, -0.25f);
        glEnd();

        glBegin(GL_QUADS); |||||||||||||||||||||||||||||||||*** SAMPLE QUADS ***
        glColor3ub(0, 0, 0);
        glVertex2f(-0.90f, -0.25f);
        glVertex2f(-0.90f, -0.80f);
        glVertex2f(-0.55f, -0.80f);
        glVertex2f(-0.55f, -0.25f);
        glEnd();

        glBegin(GL_POLYGON); |||||||||||||||||||||||||||||||||***SAMPLE POLYGON * **
            glColor3ub(0, 0, 0);
        glVertex2f(-0.90f, -0.25f);
        glVertex2f(-0.90f, -0.80f);
        glVertex2f(-0.55f, -0.80f);
        glVertex2f(-0.55f, -0.25f);
        glEnd();


        glTranslatef(+0.55f, 0.0f, 0.0f);  |||||||||||||||||||||||||||||||||***SAMPLE TRANSLATEF * **
        glBegin(GL_TRIANGLES); //House:2 Triangle
        glColor3ub(1, 5, 5);
        glVertex2f(-0.725f, 0.15f);
        glVertex2f(-1.0f, -0.25f);
        glVertex2f(-0.45f, -0.25f);
        glEnd();

        glScalef(0.5, 0.5, 0);             |||||||||||||||||||||||||||||||||***SAMPLE SCALE * **
        glTranslatef(+0.90f, -0.80f, 0.0f);
        glBegin(GL_TRIANGLES); //House:1 Triangle
        glColor3ub(5, 0, 0);
        glVertex2f(-0.725f, 0.15f);
        glVertex2f(-1.0f, -0.25f);
        glVertex2f(-0.45f, -0.25f);
        glEnd();

        */

        // *****SKY START*****//

    glBegin(GL_QUADS);
    glColor3ub(255, 127, 80);
    glVertex2f(-1.0f, +1.0f);
    glVertex2f(-1.0f, -0.50f);
    glVertex2f(+1.0f, -0.50f);
    glVertex2f(+1.0f, +1.0f);
    glEnd();

    // *****SKY FINISH*****//

    // *****BURJ KHALIFA START*****//
    // *****BURJ KHALIFA ADCB START*****//
    glBegin(GL_QUADS);
    glColor3ub(41, 128, 185);
    glVertex2f(0.01f, 0.70f);
    glVertex2f(0.01f, 0.58f);
    glVertex2f(0.03f, 0.60f);
    glVertex2f(0.03f, 0.70f);
    glEnd();
    // *****BURJ KHALIFA ADCB FINISH*****//

    // *****BURJ KHALIFA 456C START*****//
    glBegin(GL_QUADS);
    glColor3ub(133, 193, 233);
    glVertex2f(-0.03f, 0.55f);
    glVertex2f(-0.03f, 0.40f);
    glVertex2f(0.03f, 0.40f);
    glVertex2f(0.03f, 0.60f);
    glEnd();
    // *****BURJ KHALIFA 456C FINISH*****//

    // *****BURJ KHALIFA 8,9,10,7 START*****//
    glBegin(GL_QUADS);
    glColor3ub(87, 101, 116);
    glVertex2f(-0.05f, 0.40f);
    glVertex2f(-0.05f, -0.47f);
    glVertex2f(0.00f, -0.47f);
    glVertex2f(0.00f, 0.45f);
    glEnd();
    // *****BURJ KHALIFA 8,9,10,7 FINISH*****//

     // *****BURJ KHALIFA 11,13,14,12 START*****//
    glBegin(GL_QUADS);
    glColor3ub(26, 82, 118);
    glVertex2f(-0.09f, 0.15f);
    glVertex2f(-0.09f, -0.47f);
    glVertex2f(-0.02f, -0.47f);
    glVertex2f(-0.02f, 0.18f);
    glEnd();
    // *****BURJ KHALIFA 11,13,14,12 FINISH*****//

     // *****BURJ KHALIFA 15,17,18,16 START*****//
    glBegin(GL_QUADS);
    glColor3ub(16, 79, 107);
    glVertex2f(0.02f, 0.18f);
    glVertex2f(+0.02f, -0.47f);
    glVertex2f(+0.09f, -0.47f);
    glVertex2f(+0.09f, 0.15f);
    glEnd();
    // *****BURJ KHALIFA 15,17,18,16 FINISH*****//

    // *****BURJ KHALIFA 23,25,9,24 START*****//
    glBegin(GL_QUADS);
    glColor3ub(133, 146, 158);
    glVertex2f(-0.11f, -0.05f);
    glVertex2f(-0.11f, -0.47f);
    glVertex2f(-0.05f, -0.47f);
    glVertex2f(-0.05f, 0.00f);
    glEnd();
    // *****BURJ KHALIFA 23,25,9,24 FINISH*****//

     // *****BURJ KHALIFA 26,28,29,27 START*****//
    glBegin(GL_QUADS);
    glColor3ub(41, 128, 185);
    glVertex2f(-0.13f, -0.30f);
    glVertex2f(-0.13f, -0.47f);
    glVertex2f(-0.08f, -0.47f);
    glVertex2f(-0.08f, -0.25f);
    glEnd();
    // *****BURJ KHALIFA 26,28,29,27 FINISH*****//

     // *****BURJ KHALIFA 19,22,21,20 START*****//
    glBegin(GL_QUADS);
    glColor3ub(131, 145, 146);
    glVertex2f(+0.05f, 0.00f);
    glVertex2f(+0.05f, -0.47f);
    glVertex2f(+0.11f, -0.47f);
    glVertex2f(0.11f, -0.05f);
    glEnd();
    // *****BURJ KHALIFA 19,22,21,20 FINISH*****//

    // *****BURJ KHALIFA 30,33,32,31 START*****//
    glBegin(GL_QUADS);
    glColor3ub(46, 134, 193);
    glVertex2f(+0.08f, -0.25f);
    glVertex2f(+0.08f, -0.47f);
    glVertex2f(+0.13f, -0.47f);
    glVertex2f(+0.13f, -0.30f);
    glEnd();
    // *****BURJ KHALIFA 30,33,32,31 FINISH*****//

    // *****BURJ KHALIFA Z1,10,22,Z2 START*****//
    glBegin(GL_QUADS);
    glColor3ub(40, 116, 166);
    glVertex2f(+0.00f, 0.40f);
    glVertex2f(+0.00f, -0.47f);
    glVertex2f(+0.05f, -0.47f);
    glVertex2f(+0.05f, +0.40f);
    glEnd();
    // *****BURJ KHALIFA Z1,10,22,Z2 FINISH*****//

    // *****BURJ KHALIFA 34,35,36,37 START*****//
    glBegin(GL_QUADS);
    glColor3ub(107, 105, 94);
    glVertex2f(-0.15f, -0.47f);
    glVertex2f(-0.15f, -0.50f);
    glVertex2f(+0.15f, -0.50f);
    glVertex2f(+0.15f, -0.47f);
    glEnd();
    // *****BURJ KHALIFA 34,35,36,37 FINISH*****//


     // *****BURJ KHALIFA FINISH*****//

    // *****BURJ KHALIFA RIGHT:01 START*****//

      // *****BURJ KHALIFA RIGHT:01  2,5,6,3 START*****//
    glBegin(GL_QUADS);
    glColor3ub(26, 188, 156);
    glVertex2f(+0.20f, 0.10f);
    glVertex2f(+0.20f, -0.50f);
    glVertex2f(+0.40f, -0.50f);
    glVertex2f(+0.40f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:01  2,5,6,3 FINISH*****//

      // *****BURJ KHALIFA RIGHT:01  1,2,3 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(21, 67, 96);
    glVertex2f(+0.30f, 0.30f);
    glVertex2f(+0.20f, +0.10f);
    glVertex2f(+0.40f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:01  1,2,3 FINISH*****//

      // *****BURJ KHALIFA RIGHT:01  4,2,3 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(244, 43, 8);
    glVertex2f(+0.30f, 0.25f);
    glVertex2f(+0.20f, +0.10f);
    glVertex2f(+0.40f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:01  4,2,3 FINISH*****//

     // *****BURJ KHALIFA RIGHT:01  2,7,9 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(245, 205, 5);
    glVertex2f(+0.20f, 0.10f);
    glVertex2f(+0.28f, -0.50f);
    glVertex2f(+0.28f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:01  2,7,9 FINISH*****//

      // *****BURJ KHALIFA RIGHT:01  10,8,3 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(245, 205, 5);
    glVertex2f(+0.32f, +0.10f);
    glVertex2f(+0.32f, -0.50f);
    glVertex2f(+0.40f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:01  10,8,3 FINISH*****//

    // *****BURJ KHALIFA RIGHT:01 FINISH*****//

     // *****BURJ KHALIFA RIGHT:02 START*****//

     // *****BURJ KHALIFA RIGHT:02  1,9,10,2 START*****//
    glBegin(GL_QUADS);
    glColor3ub(17, 178, 204);
    glVertex2f(+0.45f, +0.05f);
    glVertex2f(+0.45f, -0.05f);
    glVertex2f(+0.65f, -0.05f);
    glVertex2f(+0.65f, +0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  1,9,10,2 FINISH*****//

    // *****BURJ KHALIFA RIGHT:02  5,7,8,6 START*****//
    glBegin(GL_QUADS);
    glColor3ub(107, 97, 94);
    glVertex2f(+0.50f, +0.03f);
    glVertex2f(+0.50f, -0.02f);
    glVertex2f(+0.60f, -0.02f);
    glVertex2f(+0.60f, +0.03f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  5,7,8,6 FINISH*****//

     // *****BURJ KHALIFA RIGHT:02  9,4,3,10 START*****//
    glBegin(GL_QUADS);
    glColor3ub(107, 97, 94);
    glVertex2f(+0.45f, -0.05f);
    glVertex2f(+0.45f, -0.50f);
    glVertex2f(+0.65f, -0.50f);
    glVertex2f(+0.65f, -0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  9,4,3,10 FINISH*****//

     // *****BURJ KHALIFA RIGHT:02  11,13,14,12 START*****//
    glBegin(GL_QUADS);
    glColor3ub(241, 196, 15);
    glVertex2f(+0.52f, -0.05f);
    glVertex2f(+0.52f, -0.50f);
    glVertex2f(+0.57f, -0.50f);
    glVertex2f(+0.57f, -0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  11,13,14,12 FINISH*****//

      // *****BURJ KHALIFA RIGHT:02 FINISH*****//
      //
    // *****BURJ KHALIFA RIGHT:03 START*****//

     // *****BURJ KHALIFA RIGHT:03 1,2,3,4 START*****//
    glBegin(GL_QUADS);
    glColor3ub(67, 89, 108);
    glVertex2f(+0.70f, +0.30f);
    glVertex2f(+0.70f, +0.25f);
    glVertex2f(+0.73f, +0.25f);
    glVertex2f(+0.73f, +0.30f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:03  1,2,3,4 FINISH*****//


     // *****BURJ KHALIFA RIGHT:03 2,8,7,3 START*****//
    glBegin(GL_QUADS);
    glColor3ub(129, 186, 234);
    glVertex2f(+0.70f, +0.25f);
    glVertex2f(+0.70f, +0.00f);
    glVertex2f(+0.90f, +0.00f);
    glVertex2f(+0.73f, +0.25f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:03  2,8,7,3 FINISH*****//

      // *****BURJ KHALIFA RIGHT:03 8,5,6,7 START*****//
    glBegin(GL_QUADS);
    glColor3ub(44, 62, 80);
    glVertex2f(+0.70f, +0.00f);
    glVertex2f(+0.70f, -0.50f);
    glVertex2f(+0.90f, -0.50f);
    glVertex2f(+0.90f, +0.00f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:03  8,5,6,7 FINISH*****//

    // *****BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:03  A,B,C,D FINISH*****//

    // *****TRANSLATE OF NO:01 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.04f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:01 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

     // *****TRANSLATE OF NO:02 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.08f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:02 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

    // *****TRANSLATE OF NO:03 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.12f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:03 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

     // *****TRANSLATE OF NO:04 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.16f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:04 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

     // *****TRANSLATE OF NO:05 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.20f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:05 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//


     // *****TRANSLATE OF NO:06 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.24f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:06 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

     // *****TRANSLATE OF NO:07 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.28f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:07 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

      // *****TRANSLATE OF NO:08 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.32f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:08 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

      // *****TRANSLATE OF NO:09 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.36f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:09 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//


      // *****TRANSLATE OF NO:10 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.40f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:10 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//

    // *****TRANSLATE OF NO:11 BURJ KHALIFA RIGHT:03 A,B,C,D START*****//
    glTranslatef(0.0f, -0.44f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(244, 246, 247);
    glVertex2f(+0.70f, -0.02f);
    glVertex2f(+0.70f, -0.04f);
    glVertex2f(+0.85f, -0.04f);
    glVertex2f(+0.85f, -0.02f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:11 BURJ KHALIFA RIGHT:03 A,B,C,D FINISH*****//







    // *****BURJ KHALIFA RIGHT:03 FINISH*****//


    // *****BURJ KHALIFA LEFT:01 START*****//

    // *****BURJ KHALIFA LEFT:01 H,J,K,I START*****//
    glBegin(GL_QUADS);
    glColor3ub(7, 25, 248);
    glVertex2f(-0.50f, +0.30f);
    glVertex2f(-0.50f, +0.20f);
    glVertex2f(-0.48f, +0.18f);
    glVertex2f(-0.48f, +0.30f);
    glEnd();
    // *****BURJ KHALIFA LEFT:01  H,J,K,I FINISH*****//


    // *****BURJ KHALIFA LEFT:01 J,31,33,L START*****//
    glBegin(GL_QUADS);
    glColor3ub(88, 138, 112);
    glVertex2f(-0.50f, +0.20f);
    glVertex2f(-0.50f, -0.50f);
    glVertex2f(-0.35f, -0.50f);
    glVertex2f(-0.35f, +0.05f);
    glEnd();
    // *****BURJ KHALIFA LEFT:01  J,31,33,L FINISH*****//

     // *****BURJ KHALIFA LEFT:01 M,O,P,N START*****//
    glBegin(GL_QUADS);
    glColor3ub(218, 58, 39);
    glVertex2f(-0.50f, +0.10f);
    glVertex2f(-0.50f, +0.05f);
    glVertex2f(-0.45f, +0.05f);
    glVertex2f(-0.45f, +0.10f);
    glEnd();
    // *****BURJ KHALIFA LEFT:01  M,O,P,N FINISH*****//

      // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(4, 18, 106);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//


    // COPY OF NO:01  *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glTranslatef(0.0f, -0.04f, 0.0f);
    // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(4, 18, 106);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    glLoadIdentity();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//
    // COPY OF NO:01  *****BURJ KHALIFA LEFT:01 A,S,T,R FINISH*****//

      // COPY OF NO:02  *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glTranslatef(0.0f, -0.08f, 0.0f);
    // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(4, 18, 106);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    glLoadIdentity();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//
    // COPY OF NO:02  *****BURJ KHALIFA LEFT:01 A,S,T,R FINISH*****//


     // COPY OF NO:03  *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glTranslatef(0.0f, -0.12f, 0.0f);
    // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(4, 18, 106);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    glLoadIdentity();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//
    // COPY OF NO:03  *****BURJ KHALIFA LEFT:01 A,S,T,R FINISH*****//


     // COPY OF NO:04  *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glTranslatef(0.0f, -0.16f, 0.0f);
    // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(4, 18, 106);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    glLoadIdentity();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//
    // COPY OF NO:04  *****BURJ KHALIFA LEFT:01 A,S,T,R FINISH*****//

     // COPY OF NO:05  *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glTranslatef(0.0f, -0.20f, 0.0f);
    // *****BURJ KHALIFA LEFT:01 A,S,T,R START*****//
    glBegin(GL_QUADS);
    glColor3ub(4, 18, 106);
    glVertex2f(-0.50f, +0.03f);
    glVertex2f(-0.50f, +0.01f);
    glVertex2f(-0.40f, +0.01f);
    glVertex2f(-0.40f, +0.03f);
    glEnd();
    glLoadIdentity();
    // *****BURJ KHALIFA LEFT:01  A,S,T,R FINISH*****//
    // COPY OF NO:05  *****BURJ KHALIFA LEFT:01 A,S,T,R FINISH*****//

    // *****BURJ KHALIFA LEFT:01 FINISH*****//


     // *****BURJ KHALIFA LEFT:02 START*****//

     // *****BURJ KHALIFA LEFT:02 E,F,G START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(81, 90, 90);
    glVertex2f(-0.60f, +0.40f);
    glVertex2f(-0.75f, +0.30f);
    glVertex2f(-0.70f, +0.30f);
    glEnd();
    // *****BURJ KHALIFA LEFT:02 E,F,G FINISH*****//

     // *****BURJ KHALIFA LEFT:02 F,29,14,G START*****//
    glBegin(GL_QUADS);
    glColor3ub(27, 38, 49);
    glVertex2f(-0.75f, +0.30f);
    glVertex2f(-0.75f, -0.50f);
    glVertex2f(-0.70f, -0.50f);
    glVertex2f(-0.70f, +0.30f);
    glEnd();
    // *****BURJ KHALIFA LEFT:02 F,29,14,G FINISH*****//

     // *****BURJ KHALIFA LEFT:02 E,G,14,15 START*****//
    glBegin(GL_QUADS);
    glColor3ub(113, 125, 126);
    glVertex2f(-0.60f, +0.40f);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, -0.50f);
    glVertex2f(-0.60f, -0.50f);
    glEnd();
    // *****BURJ KHALIFA LEFT:02 E,G,14,15 FINISH*****//

    // *****BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    // *****BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

      // *****TRANSLATE OF NO:01 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.04f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:01 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

      // *****TRANSLATE OF NO:02 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.08f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:02 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:03 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.12f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:03 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:04 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.16f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:04 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//


     // *****TRANSLATE OF NO:05 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.20f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:05 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:06 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.24f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:06 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:07 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.28f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:07 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:08 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.32f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:08 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:09 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.36f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:09 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

    // *****TRANSLATE OF NO:10 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.40f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:10 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

     // *****TRANSLATE OF NO:11 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.44f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:11 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

    // *****TRANSLATE OF NO:12 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.48f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:12 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//

    // *****TRANSLATE OF NO:13 BURJ KHALIFA LEFT:02 G,I,J,H START*****//
    glTranslatef(0.0f, -0.52f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(13, 73, 249);
    glVertex2f(-0.70f, +0.30f);
    glVertex2f(-0.70f, +0.28f);
    glVertex2f(-0.63f, +0.28f);
    glVertex2f(-0.63f, +0.30f);
    glEnd();
    glLoadIdentity();
    // *****TRANSLATE OF NO:13 BURJ KHALIFA LEFT:02 G,I,J,H FINISH*****//







    // *****BURJ KHALIFA LEFT:02 FINISH*****//



     // TRANSLATION AND SCALING OF BURJ KHALIFA RIGHT:2 START //


    glTranslatef(-0.5f, 0.0f, 0.0f); // Translate x right and y up
    glScalef(0.5, 2, 0);
    // *****BURJ KHALIFA RIGHT:02 START*****//

    // *****BURJ KHALIFA RIGHT:02  1,9,10,2 START*****//
    glBegin(GL_QUADS);
    glColor3ub(17, 178, 204);
    glVertex2f(+0.45f, +0.05f);
    glVertex2f(+0.45f, -0.05f);
    glVertex2f(+0.65f, -0.05f);
    glVertex2f(+0.65f, +0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  1,9,10,2 FINISH*****//

    // *****BURJ KHALIFA RIGHT:02  5,7,8,6 START*****//
    glBegin(GL_QUADS);
    glColor3ub(107, 97, 94);
    glVertex2f(+0.50f, +0.03f);
    glVertex2f(+0.50f, -0.02f);
    glVertex2f(+0.60f, -0.02f);
    glVertex2f(+0.60f, +0.03f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  5,7,8,6 FINISH*****//

     // *****BURJ KHALIFA RIGHT:02  9,4,3,10 START*****//
    glBegin(GL_QUADS);
    glColor3ub(107, 97, 94);
    glVertex2f(+0.45f, -0.05f);
    glVertex2f(+0.45f, -0.50f);
    glVertex2f(+0.65f, -0.50f);
    glVertex2f(+0.65f, -0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  9,4,3,10 FINISH*****//

     // *****BURJ KHALIFA RIGHT:02  11,13,14,12 START*****//
    glBegin(GL_QUADS);
    glColor3ub(241, 196, 15);
    glVertex2f(+0.52f, -0.05f);
    glVertex2f(+0.52f, -0.50f);
    glVertex2f(+0.57f, -0.50f);
    glVertex2f(+0.57f, -0.05f);
    glEnd();
    // *****BURJ KHALIFA RIGHT:02  11,13,14,12 FINISH*****//

      // *****BURJ KHALIFA RIGHT:02 FINISH*****//
    glLoadIdentity();                // Reset the model-view matrix


    // TRANSLATION AND SCALING OF BURJ KHALIFA RIGHT:2 FINISH //


























    // *****HOUSE OF THE KING START*****//

    // *****HOUSE OF THE KING 4,5,6 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.85f, -0.20f);
    glVertex2f(-0.90f, -0.25f);
    glVertex2f(-0.80f, -0.25f);
    glEnd();
    // *****HOUSE OF THE KING 4,5,6 FINISH*****//

    // *****HOUSE OF THE KING 7,8,9 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.72f, -0.15f);
    glVertex2f(-0.74f, -0.20f);
    glVertex2f(-0.70f, -0.20f);
    glEnd();
    // *****HOUSE OF THE KING 7,8,9 FINISH*****//

     // *****HOUSE OF THE KING 10,11,12 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.65f, -0.255f);
    glVertex2f(-0.70f, -0.30f);
    glVertex2f(-0.60f, -0.30f);
    glEnd();
    // *****HOUSE OF THE KING 10,11,12 FINISH*****//

    // *****HOUSE OF THE KING 11,14,15,12 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.70f, -0.30f);
    glVertex2f(-0.70f, -0.50f);
    glVertex2f(-0.60f, -0.50f);
    glVertex2f(-0.60f, -0.30f);
    glEnd();
    // *****HOUSE OF THE KING 39,14,15,40 FINISH*****//


    // *****HOUSE OF THE KING 13,14,15 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.65f, -0.35f);
    glVertex2f(-0.70f, -0.50f);
    glVertex2f(-0.60f, -0.50f);
    glEnd();
    // *****HOUSE OF THE KING 13,14,15 FINISH*****//


     // *****HOUSE OF THE KING 16,17,18 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.58f, -0.15f);
    glVertex2f(-0.60f, -0.20f);
    glVertex2f(-0.56f, -0.20f);
    glEnd();
    // *****HOUSE OF THE KING 16,17,18 FINISH*****//

     // *****HOUSE OF THE KING 19,20,21 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.45f, -0.20f);
    glVertex2f(-0.50f, -0.25f);
    glVertex2f(-0.40f, -0.25f);
    glEnd();
    // *****HOUSE OF THE KING 19,20,21 FINISH*****//

      // *****HOUSE OF THE KING 22,23,24 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-0.30f, -0.30f);
    glVertex2f(-0.35f, -0.35f);
    glVertex2f(-0.25f, -0.35f);
    glEnd();
    // *****HOUSE OF THE KING 22,23,24 FINISH*****//

     // *****HOUSE OF THE KING 5,27,28,6 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.90f, -0.25f);
    glVertex2f(-0.90f, -0.50f);
    glVertex2f(-0.80f, -0.50f);
    glVertex2f(-0.80f, -0.25f);
    glEnd();
    // *****HOUSE OF THE KING 5,27,28,6 FINISH*****//

    // *****HOUSE OF THE KING 37,28,29,38 START*****//
    glBegin(GL_QUADS);
    glColor3ub(156, 100, 12);
    glVertex2f(-0.80f, -0.36f);
    glVertex2f(-0.80f, -0.50f);
    glVertex2f(-0.73f, -0.50f);
    glVertex2f(-0.73f, -0.36f);
    glEnd();
    // *****HOUSE OF THE KING 5,27,28,6 FINISH*****//


    // *****HOUSE OF THE KING 41,30,31,42 START*****//
    glBegin(GL_QUADS);
    glColor3ub(156, 100, 12);
    glVertex2f(-0.57f, -0.36f);
    glVertex2f(-0.57f, -0.50f);
    glVertex2f(-0.50f, -0.50f);
    glVertex2f(-0.50f, -0.36f);
    glEnd();
    // *****HOUSE OF THE KING 5,27,28,6 FINISH*****//

     // *****HOUSE OF THE KING 43,32,33,44 START*****//
    glBegin(GL_QUADS);
    glColor3ub(156, 100, 12);
    glVertex2f(-0.40f, -0.40f);
    glVertex2f(-0.40f, -0.50f);
    glVertex2f(-0.35f, -0.50f);
    glVertex2f(-0.35f, -0.40f);
    glEnd();
    // *****HOUSE OF THE KING 43,32,33,44 FINISH*****//

    // *****HOUSE OF THE KING 23,33,34,24 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.35f, -0.35f);
    glVertex2f(-0.35f, -0.50f);
    glVertex2f(-0.25f, -0.50f);
    glVertex2f(-0.25f, -0.35f);
    glEnd();
    // *****HOUSE OF THE KING 23,33,34,24 FINISH*****//

    // *****HOUSE OF THE KING 20,31,32,21 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.50f, -0.25f);
    glVertex2f(-0.50f, -0.50f);
    glVertex2f(-0.40f, -0.50f);
    glVertex2f(-0.40f, -0.25f);
    glEnd();
    // *****HOUSE OF THE KING 20,31,32,21 FINISH*****//

    // *****HOUSE OF THE KING 17,15,30,18 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.60f, -0.20f);
    glVertex2f(-0.60f, -0.50f);
    glVertex2f(-0.56f, -0.50f);
    glVertex2f(-0.56f, -0.20f);
    glEnd();
    // *****HOUSE OF THE KING 17,15,30,18 FINISH*****//

     // *****HOUSE OF THE KING 8,29,14,9 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-0.74f, -0.20f);
    glVertex2f(-0.74f, -0.50f);
    glVertex2f(-0.70f, -0.50f);
    glVertex2f(-0.70f, -0.20f);
    glEnd();
    // *****HOUSE OF THE KING 8,29,14,9 FINISH*****//

     // *****HOUSE OF THE KING 1,999,26,3 START*****//
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.f, -0.5f);
    glVertex2f(-0.95f, -0.50f);
    glVertex2f(-0.95f, -0.35f);
    glEnd();
    // *****HOUSE OF THE KING 1,2,3 FINISH*****//


     // *****HOUSE OF THE KING 35,26,27,36 START*****//
    glBegin(GL_QUADS);
    glColor3ub(156, 100, 12);
    glVertex2f(-0.95f, -0.40f);
    glVertex2f(-0.95f, -0.5f);
    glVertex2f(-0.90f, -0.50f);
    glVertex2f(-0.90f, -0.40f);
    glEnd();
    // *****HOUSE OF THE KING 35,26,27,36 FINISH*****//

      // *****HOUSE OF THE KING 1,998,3 START*****//
    glBegin(GL_TRIANGLES);
    glColor3ub(241, 196, 15);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.0f, -0.35f);
    glVertex2f(-0.95f, -0.35f);
    glEnd();
    // *****HOUSE OF THE KING 1,998,3 FINISH*****//

    // *****HOUSE OF THE KING FINISH*****//


        // *****ARAB SEA START*****//

    glBegin(GL_QUADS);
    glColor3ub(32, 238, 197);
    glVertex2f(-1.0f, -0.50f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(+1.0f, -1.0f);
    glVertex2f(+1.0f, -0.50f);
    glEnd();



    // *****ARAB SEA FINISH*****//

// *****DUBAI BASE START*****//

    glBegin(GL_QUADS);
    glColor3ub(81, 81, 81);
    glVertex2f(-1.0f, -0.50f);
    glVertex2f(-1.0f, -0.55f);
    glVertex2f(+1.0f, -0.55f);
    glVertex2f(+1.0f, -0.50f);
    glEnd();



    // *****DUBAI BASE FINISH*****//


    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);
    // *****DUBAI CRUISE SHIP START*****//

    // ** B,D,C,A START** //
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(+0.75f, -0.60f);
    glVertex2f(+0.75f, -0.70f);
    glVertex2f(+0.80f, -0.70f);
    glVertex2f(+0.80f, -0.60f);
    glEnd();
    // ** B,D,C,A FINISH** //

     // ** T1,T2,T3,T4 START** //
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(+0.83f, -0.60f);
    glVertex2f(+0.83f, -0.70f);
    glVertex2f(+0.88f, -0.70f);
    glVertex2f(+0.88f, -0.60f);
    glEnd();
    // ** T1,T2,T3,T4 FINISH** //


       // ** G,H,F,E START** //
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(+0.65f, -0.70f);
    glVertex2f(+0.60f, -0.75f);
    glVertex2f(+0.90f, -0.75f);
    glVertex2f(+0.90f, -0.70f);
    glEnd();
    // ** G,H,F,E FINISH** //

      // ** H,I,J,F START** //
    glBegin(GL_QUADS);
    glColor3ub(8, 8, 8);
    glVertex2f(+0.60f, -0.75f);
    glVertex2f(+0.55f, -0.80f);
    glVertex2f(+0.90f, -0.80f);
    glVertex2f(+0.90f, -0.75f);
    glEnd();
    // ** H,I,J,F FINISH** //


    // ** K,L,M,N START** //
    glBegin(GL_QUADS);
    glColor3ub(111, 44, 100);
    glVertex2f(+0.50f, -0.80f);
    glVertex2f(+0.55f, -0.90f);
    glVertex2f(+0.95f, -0.90f);
    glVertex2f(+0.95f, -0.80f);
    glEnd();
    // ** K,L,M,N FINISH** //

     // ** O,P,Q,R START** //
    glBegin(GL_QUADS);
    glColor3ub(175, 204, 220);
    glVertex2f(+0.55f, -0.83f);
    glVertex2f(+0.55f, -0.86f);
    glVertex2f(+0.60f, -0.86f);
    glVertex2f(+0.60f, -0.83f);
    glEnd();
    // ** O,P,Q,R FINISH** //

     // *****DUBAI CRUISE SHIP FINISH*****//


       // *** SAIL BOAT START *** //

    // ** A,G,H,B START ** //
    glBegin(GL_QUADS);
    glColor3ub(1, 6, 8);
    glVertex2f(-0.80f, -0.6f);
    glVertex2f(-0.80f, -0.85f);
    glVertex2f(-0.79f, -0.85f);
    glVertex2f(-0.79f, -0.6f);
    glEnd();
    // ** A,G,H,B FINISH** //

     // ** K,L,M,N START ** //
    glBegin(GL_QUADS);
    glColor3ub(255, 0, 12);
    glVertex2f(-1.0f, -0.85f);
    glVertex2f(-0.95f, -0.90f);
    glVertex2f(-0.65f, -0.90f);
    glVertex2f(-0.60f, -0.85f);
    glEnd();
    // ** K,L,M,N FINISH** //

    // ** K,L,M,N START ** //
    glBegin(GL_TRIANGLES);
    glColor3ub(251, 252, 252);
    glVertex2f(-0.79f, -0.60f);
    glVertex2f(-0.79f, -0.80f);
    glVertex2f(-0.65f, -0.80f);
    glEnd();
    // ** K,L,M,N FINISH** //

    // ** A,C,D START ** //
    glBegin(GL_TRIANGLES);
    glColor3ub(223, 255, 0);
    glVertex2f(-0.80f, -0.60f);
    glVertex2f(-0.9f, -0.82f);
    glVertex2f(-0.80f, -0.82f);
    glEnd();
    // ** A,C,D FINISH** //
    glPopMatrix();
    glLoadIdentity();
    // *** SAIL BOAT FINISH *** //


     // *****DUBAI CARRIER SHIP START*****//

    // ** A,B,C,D START** //
    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(231, 76, 60);
    glVertex2f(-0.25f, -0.85f);
    glVertex2f(-0.24f, -0.88f);
    glVertex2f(-0.10f, -0.88f);
    glVertex2f(-0.10f, -0.85f);
    glEnd();
    // ** A,B,C,D FINISH** //

     // ** B,E,F,C START** //
    glBegin(GL_QUADS);
    glColor3ub(66, 73, 73);
    glVertex2f(-0.24f, -0.88f);
    glVertex2f(-0.20f, -1.0f);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(-0.10f, -0.88f);
    glEnd();
    // ** B,E,F,C FINISH** //

    // ** G,F,V,U START** //
    glBegin(GL_QUADS);
    glColor3ub(66, 73, 73);
    glVertex2f(-0.05f, -0.95f);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(0.25f, -1.0f);
    glVertex2f(0.25f, -0.95f);
    glEnd();
    // ** G,F,V,U FINISH** //

     // ** R,Q,T,S START** //
    glBegin(GL_QUADS);
    glColor3ub(231, 76, 60);
    glVertex2f(+0.20f, -0.75f);
    glVertex2f(+0.20f, -0.95f);
    glVertex2f(0.27f, -0.95f);
    glVertex2f(0.27f, -0.75f);
    glEnd();
    // ** R,Q,T,S  FINISH** //



     // ** Y,V,W,X START** //
    glBegin(GL_QUADS);
    glColor3ub(66, 73, 73);
    glVertex2f(+0.25f, -0.90f);
    glVertex2f(+0.25f, -1.0f);
    glVertex2f(0.30f, -1.0f);
    glVertex2f(0.35f, -0.90f);
    glEnd();
    // ** Y,V,W,X FINISH** //

     // ** N,M,P,O START** //
    glBegin(GL_QUADS);
    glColor3ub(244, 208, 63);
    glVertex2f(+0.05f, -0.85f);
    glVertex2f(+0.05f, -0.95f);
    glVertex2f(+0.18f, -0.95f);
    glVertex2f(+0.18f, -0.85f);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
    // ** H,I,J,K FINISH** //


    // ***** THE SUN START *****//
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 63, 0);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    // ***** THE SUN FINISH *****//


    // *******    ZEPPLIN START     ********

    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);

    // ** A,B,E,Z START ** //
    glBegin(GL_QUADS);
    glColor3ub(14, 3, 94);
    glVertex2f(0.13f, 0.90f);
    glVertex2f(0.10f, 0.85f);
    glVertex2f(0.15f, 0.85f);
    glVertex2f(0.15f, 0.90f);
    glEnd();
    // ** A,B,E,Z FINISH ** //

     // ** B,C,D,E START ** //
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(0.10f, 0.85f);
    glVertex2f(0.13f, 0.80f);
    glVertex2f(0.15f, 0.80f);
    glVertex2f(0.15f, 0.85f);
    glEnd();
    // ** B,C,D,E FINISH ** //



    // ** Z,D,G,F START ** //
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(0.15f, 0.90f);
    glVertex2f(0.15f, 0.80f);
    glVertex2f(0.30f, 0.80f);
    glVertex2f(0.30f, 0.90f);
    glEnd();
    // ** Z,D,G,F FINISH ** //

    // ** M,J,K,L START ** //
    glBegin(GL_QUADS);
    glColor3ub(231, 8, 8);
    glVertex2f(0.35f, 0.92f);
    glVertex2f(0.35f, 0.82f);
    glVertex2f(0.40f, 0.85f);
    glVertex2f(0.40f, 0.92f);
    glEnd();
    // ** M,J,K,L FINISH ** //

     // ** F,G,I,H START ** //
    glBegin(GL_QUADS);
    glColor3ub(231, 8, 8);
    glVertex2f(0.30f, 0.90f);
    glVertex2f(0.30f, 0.80f);
    glVertex2f(0.35f, 0.82f);
    glVertex2f(0.35f, 0.87f);
    glEnd();
    // ** F,G,I,H FINISH ** //


     // ** N,O,P,Q START ** //
    glBegin(GL_QUADS);
    glColor3ub(231, 8, 8);
    glVertex2f(0.17f, 0.87f);
    glVertex2f(0.17f, 0.84f);
    glVertex2f(0.19f, 0.84f);
    glVertex2f(0.19f, 0.87f);
    glEnd();
    // ** N,O,P,Q FINISH ** //

   // TRANSLATE OF WINDOW  COPY :01  START   //

    // ** N,O,P,Q START ** //
    glBegin(GL_QUADS);
    glColor3ub(231, 8, 8);
    glVertex2f(0.21f, 0.87f);
    glVertex2f(0.21f, 0.84f);
    glVertex2f(0.23f, 0.84f);
    glVertex2f(0.23f, 0.87f);
    glEnd();
    // ** N,O,P,Q FINISH ** //
    // TRANSLATE OF WINDOW  COPY : 01 FINISH   //

    // TRANSLATE OF WINDOW  COPY :01  START   //

    // ** N,O,P,Q START ** //
    glBegin(GL_QUADS);
    glColor3ub(231, 8, 8);
    glVertex2f(0.25f, 0.87f);
    glVertex2f(0.25f, 0.84f);
    glVertex2f(0.27f, 0.84f);
    glVertex2f(0.27f, 0.87f);
    glEnd();
    // ** N,O,P,Q FINISH ** //
    // TRANSLATE OF WINDOW  COPY : 01 FINISH   //


     // ** X,Z,Y,V START ** //
    glBegin(GL_QUADS);
    glColor3ub(255, 253, 0);
    glVertex2f(0.18f, 0.82f);
    glVertex2f(0.25f, 0.70f);
    glVertex2f(0.30f, 0.70f);
    glVertex2f(0.25f, 0.82f);
    glEnd();
    // ** X,Z,Y,V FINISH ** //


      // ** OPPOSITE FIN START ** //
    glBegin(GL_QUADS);
    glColor3ub(255, 253, 0);
    glVertex2f(0.18f, 0.90f);
    glVertex2f(0.25f, 0.90f);
    glVertex2f(0.30f, 0.95f);
    glVertex2f(0.25f, 0.95f);
    glEnd();
    // ** OPPOSITE FIN FINISH ** //

    // ** STRING LINE START ** //
    glBegin(GL_QUADS);
    glColor3ub(44, 0, 131);
    glVertex2f(0.40f, 0.87f);
    glVertex2f(0.40f, 0.86f);
    glVertex2f(0.48f, 0.86f);
    glVertex2f(0.48f, 0.87f);
    glEnd();
    // ** STRING LINE FINISH ** //

           // *******    ZEPPLIN FINISH     ********

    // *** FLAG OF UNITED ARAB EMIRATES **** //

    // A,B,C,D
    glBegin(GL_QUADS);
    glColor3ub(250, 21, 3);
    glVertex2f(0.48f, 0.91f);
    glVertex2f(0.48f, 0.82f);
    glVertex2f(0.53f, 0.82f);
    glVertex2f(0.53f, 0.91f);
    glEnd();

    // D,E,H,G
    glBegin(GL_QUADS);
    glColor3ub(4, 126, 28);
    glVertex2f(0.53f, 0.91f);
    glVertex2f(0.53f, 0.88f);
    glVertex2f(0.75f, 0.88f);
    glVertex2f(0.75f, 0.91f);
    glEnd();


    // E,F,I,H
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(0.53f, 0.88f);
    glVertex2f(0.53f, 0.85f);
    glVertex2f(0.75f, 0.85f);
    glVertex2f(0.75f, 0.88f);
    glEnd();


    // F,C,J,I
    glBegin(GL_QUADS);
    glColor3ub(10, 10, 10);
    glVertex2f(0.53f, 0.85f);
    glVertex2f(0.53f, 0.82f);
    glVertex2f(0.75f, 0.82f);
    glVertex2f(0.75f, 0.85f);
    glEnd();

    glPopMatrix();
    glLoadIdentity();


    // *** FLAG OF UNITED ARAB EMIRATES FINISH**** //


    glFlush();   // Render now
}






 void sound()
 {
     PlaySound("a.wav", NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
 }

 void sound2()
 {
     PlaySound(NULL, NULL, SND_ASYNC | SND_FILENAME);
 }

void handleKeypress(unsigned char key, int x, int y) {
    switch (key) {
        case 's':
        glLoadIdentity();
        sound();
        glutPostRedisplay();
        break;
    case 'x':
        sound2();
        glutPostRedisplay();
        break;
    case 'k':
        speed = 0.0f;
        break;
    case 'j':
        speed += 0.01f;
        break;
    case 'l':
        speed -= 0.01f;
        break;
    case 'i':
        speed = 0.1f;
        break;
    case 'd':
        glutDisplayFunc(day);
        glutPostRedisplay();
        break;
    case 'n':
        glutDisplayFunc(night);
        glutPostRedisplay();
        break;
    case 'r':
        glutDisplayFunc(rain);
        glutPostRedisplay();
        break;
    case 'z':
        glutDisplayFunc(miday);
        glutPostRedisplay();
        break;
    }
}



/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);  // Initialize GLUT
    glutInitWindowSize(1080, 720); // Set the window's initial width & height - non-square
    glutInitWindowPosition(150, 20); // Position the window's initial top-left corner
    glutCreateWindow("Dubai - The City of Gold"); // Create a window with the given title
    //glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutTimerFunc(100, update, 0);
    initGL(); // Our own OpenGL initialization
    glutIdleFunc(Idle);
    glutKeyboardFunc(handleKeypress);
    glutSpecialFunc(SpecialInput);
    glutDisplayFunc(night); //Night Function
    glutDisplayFunc(rain); //Rain Function
    glutDisplayFunc(day); //Day Function
    glutMainLoop();   // Enter the event-processing loop
    return 0;
}














