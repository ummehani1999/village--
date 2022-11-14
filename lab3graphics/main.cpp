#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define PI 3.1416
#include <windows.h>
int windowWidth=500;
int windowHeight=800;
bool flagScale=false;
double sun_move=0;
double nouka_move=0;
void drawFilledCircle(GLfloat x, GLfloat y, GLfloat radius){
	int i;
	int triangleAmount = 20;


	GLfloat twicePi = 2.0f * PI;


	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
void sun()
{    glColor3f(255,255,0);
    drawFilledCircle(36,47,1.5);
}

void pahar(void)
{

glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.5,0.5);    //pahar traiangle
    glVertex2f(0,40);
    glVertex2f(5,45.);
    glVertex2f(5,40);
glEnd();
glPopMatrix();

}

void boropahar(void)
{

glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.5,0.5);    //boropahar traiangle
    glVertex2f(0,40);
    glVertex2f(5,48);
    glVertex2f(5,40);
glEnd();
glPopMatrix();

}


void bari(void)
{

    glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1,0,0);   //dorja
    glVertex2f(4.5,8);
    glVertex2f(4.5,6);
    glVertex2f(5.5,6);
    glVertex2f(5.5,8);
glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0,0,1);    //chal
    glVertex2f(5,15);
    glVertex2f(2,10);
    glVertex2f(8,10);
glEnd();
glPopMatrix();



glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1,1,0);   //ghor
    glVertex2f(3,10);
    glVertex2f(7,10);
    glVertex2f(7,6);
    glVertex2f(3,6);
glEnd();
glPopMatrix();




}

void gach(void)
{
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);   //gach quad1
    glVertex2f(16,5);
    glVertex2f(17,5);
    glVertex2f(17,12);
    glVertex2f(16,12);
glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0,0.5,0.5);   //gach quad2
    glVertex2f(14,12);
    glVertex2f(19,12);
    glVertex2f(18,15);
    glVertex2f(15,15);
glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0,0.5,0.5);    //chal
    glVertex2f(14,15);
    glVertex2f(19,15);
    glVertex2f(16.5,20);
glEnd();
glPopMatrix();

}
void nouka(void)
{

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1,0,0);    //nouka
    glVertex2f(12,32);
    glVertex2f(18,32);
    glVertex2f(18,35);
    glVertex2f(12,35);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);    //grass triangle
    glVertex2f(18,32);
    glVertex2f(18,34.5);
    glVertex2f(19.5,36);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);    //grass triangle
    glVertex2f(12,32);
    glVertex2f(12,34.5);
    glVertex2f(10.5,36);
glEnd();
glPopMatrix();

}



void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-60,60,-60,60);

    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    //glViewport(0, 0 ,windowWidth ,windowHeight);


glPushMatrix();
    glTranslatef(sun_move,0,0);
    sun();
glPopMatrix();

glPushMatrix();
    glTranslatef(0,0,0);   //pahar1
    pahar();
glPopMatrix();

glPushMatrix();
    glTranslatef(4,0,0);   //pahar2
    pahar();
glPopMatrix();

glPushMatrix();
    glTranslatef(9,0,0);  //pahar3
    pahar();
glPopMatrix();

glPushMatrix();
    glTranslatef(14,0,0);  //boropahar4
    boropahar();
glPopMatrix();

glPushMatrix();
    glTranslatef(18,0,0);  //pahar5
    pahar();
glPopMatrix();

glPushMatrix();
    glTranslatef(22,0,0);  //pahar6
    pahar();
glPopMatrix();

glPushMatrix();
    glTranslatef(27,0,0);  //boropaharpahar7
    boropahar();
glPopMatrix();

glPushMatrix();
    glTranslatef(32,0,0);  //pahar8
    pahar();
glPopMatrix();

glPushMatrix();
    glTranslatef(37,0,0);  //boropahar9
    boropahar();
glPopMatrix();

glPushMatrix();
    glTranslatef(42,0,0);  //pahar3
    pahar();
glPopMatrix();

glPushMatrix();
    glTranslatef(47,0,0);  //pahar10
    pahar();
glPopMatrix();
glPushMatrix();glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);    //akash white
    glVertex2f(0.0,40.0);
    glVertex2f(50.0,40.0);
    glVertex2f(50.0,50.0);
    glVertex2f(0.0,50.0);
glEnd();
glPopMatrix();



glPushMatrix();
    glTranslatef(nouka_move,0,0);
    nouka();
glPopMatrix();



glPushMatrix();
    glTranslatef(0,0,0);  //bari1
    bari();
glPopMatrix();


glPushMatrix();
    glTranslatef(5,5,0);  //bar2
    bari();
glPopMatrix();


glPushMatrix();
    glTranslatef(0,10,0);  //bari3
    bari();
glPopMatrix();

glPushMatrix();
    glTranslatef(40,7,0);  //bari4
    bari();
glPopMatrix();


glPushMatrix();
    glTranslatef(35,15,0);  //bari5
    bari();
glPopMatrix();




glPushMatrix();
    glTranslatef(0,0,0);  //gach1
    gach();
glPopMatrix();


glPushMatrix();
    glTranslatef(8,2,0);  //gach2
    gach();
glPopMatrix();

glPushMatrix();
    glTranslatef(13,-4,0);  //gach3
    gach();
glPopMatrix();


glPushMatrix();
    glTranslatef(16,20,0);  //gach4
    gach();
glPopMatrix();

glPushMatrix();
    glTranslatef(30,20,0);  //gach5
    gach();
glPopMatrix();




glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0,1,0);    //grass triangle
    glVertex2f(0,40);
    glVertex2f(0,0);
    glVertex2f(35,0);
glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0,1,0);    //grass triangle
    glVertex2f(20,40);
    glVertex2f(50,0);
    glVertex2f(50,40);
glEnd();
glPopMatrix();












    glFlush();
    glutSwapBuffers();
}
void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {

    case 'S':
        flagScale=true;
        break;
    case 's':
        flagScale=false;
        break;



    case 60:	// Escape key
        exit(1);
    }
    glutPostRedisplay();
}

void animate()
{
	if (flagScale == true)
	{
		sun_move-= 0.005;
		if(sun_move <- 31)
			sun_move = -1;
	}
	if (flagScale == false)
	{
		sun_move = 0;

	}

	if (flagScale == true)
	{
		nouka_move+= 0.005;
		if(nouka_move > 7)
			nouka_move = -2;
	}
	if (flagScale == false)
	{
		nouka_move = 0;

	}



	glutPostRedisplay();
}
int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(20,50);
    glutInitWindowSize(2000,2000);
    glutCreateWindow("village scenary");

    glShadeModel( GL_SMOOTH );
    glEnable( GL_DEPTH_TEST );
glutKeyboardFunc(myKeyboardFunc);
    glutIdleFunc(animate);
    glClearColor(0.0f, 1.0f, 1.0f, 0.0f);
    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
