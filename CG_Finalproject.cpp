#include<iostream>
#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include<Windows.h>


GLfloat position = 0.0f;
GLfloat position2 =0.0f;
GLfloat speed = 0.02f;
GLfloat speed2 =0.01f;


GLfloat i= 0.0f;

void update(int value) {

    if(position > 1.0)
        position = -1.2f;

    position += speed;


	glutPostRedisplay();
	glutTimerFunc(100, update, 0);



}


void update2(int value) {


if(position2 < -1.0)
position2 = 0.7f;


position2 -= speed2;


glutPostRedisplay();
glutTimerFunc(100, update2, 0);

}



void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			speed += 0.009f;
			printf("clicked at (%d, %d)\n", x, y);
		}

	}
	else if(button ==GLUT_RIGHT_BUTTON)
    {
        if(state == GLUT_DOWN)
            {
            speed -=0.009f;
            printf("clicked at (%d, %d)\n", x, y);
        }
    }

	glutPostRedisplay();
}

void sky() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glBegin(GL_QUADS);
    glColor3ub(174, 225, 230); //sky
    glVertex2f(-1.0f, 0.3f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glEnd();
    }

    void nightSky()
{
    glBegin(GL_QUADS);
    glColor3ub(7, 11, 52); //nightsky

	glVertex2f(-1.0f, 0.3f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
    glEnd();
}

void sand(){

    glBegin(GL_QUADS);
    glColor3ub(230, 197, 131);  //sand
    glVertex2f(-1.0f, -0.3f);
	glVertex2f(1.0f, -0.3f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(-1.0f, 0.3f);
	glEnd();
    }
void nightSand()
{
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);  //nightsand
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(-1.0f, 0.3f);
    glEnd();
}
void ocean(){
	glBegin(GL_QUADS);
    glColor3ub(55, 159, 212);  //ocean
    glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f,-0.26f);
	glVertex2f(-1.0f, -0.26f);
	glEnd();
    }

    void nightOcan()
{
    glBegin(GL_QUADS);
    glColor3ub(6,66,115);  //nightocean
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f,-0.26f);
    glVertex2f(-1.0f, -0.26f);
    glEnd();
}

    void building(){

	glBegin(GL_QUADS);
    glColor3ub(50, 97, 135);  //building1
    glVertex2f(-0.3f, 0.3f);
	glVertex2f(-0.3f, 0.8f);
	glVertex2f(-0.65f, 0.8f);
	glVertex2f(-0.65f, 0.3f);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(186, 159, 149);  //building1(upper1)
    glVertex2f(-0.33f, 0.8f);
	glVertex2f(-0.33f, 0.83f);
	glVertex2f(-0.62f, 0.83f);
	glVertex2f(-0.62f, 0.8f);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(244, 245, 233);  //building1(upper2)
    glVertex2f(-0.35f, 0.83f);
	glVertex2f(-0.35f, 0.85f);
	glVertex2f(-0.6f, 0.85f);
	glVertex2f(-0.6f, 0.83f);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(186,159,149);  //building1(upper3)
    glVertex2f(-0.37f, 0.85f);
	glVertex2f(-0.37f, 0.88f);
	glVertex2f(-0.58f, 0.88f);
	glVertex2f(-0.58f, 0.85f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50, 97, 135);  //building1(upper4)
    glVertex2f(-0.38f, 0.85f);
	glVertex2f(-0.42f, 0.91f);
	glVertex2f(-0.52f, 0.91f);
	glVertex2f(-0.56f, 0.85f);
	glEnd();


	glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //building1(upper5)
    glVertex2f(-0.44f, 0.91f);
	glVertex2f(-0.44f, 0.93f);
	glVertex2f(-0.5f, 0.93f);
	glVertex2f(-0.5f, 0.91f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50, 97, 135);  //building1(upper6)
    glVertex2f(-0.46f, 0.93f);
	glVertex2f(-0.46f, 0.96f);
	glVertex2f(-0.48f, 0.96f);
	glVertex2f(-0.48f, 0.93f);
	glEnd();



    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //border1
    glVertex2f(-0.36f, 0.3f);
	glVertex2f(-0.36f, 0.8f);
	glVertex2f(-0.375f, 0.8f);
	glVertex2f(-0.375f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //border2
    glVertex2f(-0.47f, 0.3f);
	glVertex2f(-0.47f, 0.8f);
	glVertex2f(-0.485f, 0.8f);
	glVertex2f(-0.485f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //border3
    glVertex2f(-0.58f, 0.3f);
	glVertex2f(-0.58f, 0.8f);
	glVertex2f(-0.595f, 0.8f);
	glVertex2f(-0.595f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window1
    glVertex2f(-0.54f, 0.75f);
	glVertex2f(-0.54f, 0.78f);
	glVertex2f(-0.57f, 0.78f);
	glVertex2f(-0.57f, 0.75f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window
    glVertex2f(-0.5f, 0.75f);
	glVertex2f(-0.5f, 0.78f);
	glVertex2f(-0.53f, 0.78f);
	glVertex2f(-0.53f, 0.75f);
	glEnd();


    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window
    glVertex2f(-0.5f, 0.7f);
	glVertex2f(-0.5f, 0.73f);
	glVertex2f(-0.53f, 0.73f);
	glVertex2f(-0.53f, 0.7f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window
    glVertex2f(-0.5f, 0.65f);
	glVertex2f(-0.5f, 0.68f);
	glVertex2f(-0.53f, 0.68f);
	glVertex2f(-0.53f, 0.65f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window
    glVertex2f(-0.5f, 0.6f);
	glVertex2f(-0.5f, 0.63f);
	glVertex2f(-0.53f, 0.63f);
	glVertex2f(-0.53f, 0.6f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window
    glVertex2f(-0.5f, 0.55f);
	glVertex2f(-0.5f, 0.58f);
	glVertex2f(-0.53f, 0.58f);
	glVertex2f(-0.53f, 0.55f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window
    glVertex2f(-0.5f, 0.5f);
	glVertex2f(-0.5f, 0.53f);
	glVertex2f(-0.53f, 0.53f);
	glVertex2f(-0.53f, 0.5f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window
    glVertex2f(-0.5f, 0.45f);
	glVertex2f(-0.5f, 0.48f);
	glVertex2f(-0.53f, 0.48f);
	glVertex2f(-0.53f, 0.45f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window
    glVertex2f(-0.5f, 0.4f);
	glVertex2f(-0.5f, 0.43f);
	glVertex2f(-0.53f, 0.43f);
	glVertex2f(-0.53f, 0.4f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window
    glVertex2f(-0.5f, 0.35f);
	glVertex2f(-0.5f, 0.38f);
	glVertex2f(-0.53f, 0.38f);
	glVertex2f(-0.53f, 0.35f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window
    glVertex2f(-0.5f, 0.31f);
	glVertex2f(-0.5f, 0.34f);
	glVertex2f(-0.53f, 0.34f);
	glVertex2f(-0.53f, 0.31f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window
    glVertex2f(-0.54f, 0.7f);
	glVertex2f(-0.54f, 0.73f);
	glVertex2f(-0.57f, 0.73f);
	glVertex2f(-0.57f, 0.7f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window
    glVertex2f(-0.54f, 0.65f);
	glVertex2f(-0.54f, 0.68f);
	glVertex2f(-0.57f, 0.68f);
	glVertex2f(-0.57f, 0.65f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window
    glVertex2f(-0.54f, 0.6f);
	glVertex2f(-0.54f, 0.63f);
	glVertex2f(-0.57f, 0.63f);
	glVertex2f(-0.57f, 0.6f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window
    glVertex2f(-0.54f, 0.55f);
	glVertex2f(-0.54f, 0.58f);
	glVertex2f(-0.57f, 0.58f);
	glVertex2f(-0.57f, 0.55f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window
    glVertex2f(-0.54f, 0.5f);
	glVertex2f(-0.54f, 0.53f);
	glVertex2f(-0.57f, 0.53f);
	glVertex2f(-0.57f, 0.5f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window
    glVertex2f(-0.54f, 0.45f);
	glVertex2f(-0.54f, 0.48f);
	glVertex2f(-0.57f, 0.48f);
	glVertex2f(-0.57f, 0.45f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window
    glVertex2f(-0.54f, 0.4f);
	glVertex2f(-0.54f, 0.43f);
	glVertex2f(-0.57f, 0.43f);
	glVertex2f(-0.57f, 0.4f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window
    glVertex2f(-0.54f, 0.35f);
	glVertex2f(-0.54f, 0.38f);
	glVertex2f(-0.57f, 0.38f);
	glVertex2f(-0.57f, 0.35f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window
    glVertex2f(-0.54f, 0.31f);
	glVertex2f(-0.54f, 0.34f);
	glVertex2f(-0.57f, 0.34f);
	glVertex2f(-0.57f, 0.31f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window2
    glVertex2f(-0.43f, 0.75f);
	glVertex2f(-0.43f, 0.78f);
	glVertex2f(-0.46f, 0.78f);
	glVertex2f(-0.46f, 0.75f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window2
    glVertex2f(-0.43f, 0.7f);
	glVertex2f(-0.43f, 0.73f);
	glVertex2f(-0.46f, 0.73f);
	glVertex2f(-0.46f, 0.7f);
	glEnd();

	    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window2
    glVertex2f(-0.43f, 0.65f);
	glVertex2f(-0.43f, 0.68f);
	glVertex2f(-0.46f, 0.68f);
	glVertex2f(-0.46f, 0.65f);
	glEnd();

	    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window2
    glVertex2f(-0.43f, 0.6f);
	glVertex2f(-0.43f, 0.63f);
	glVertex2f(-0.46f, 0.63f);
	glVertex2f(-0.46f, 0.6f);
	glEnd();

	    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window2
    glVertex2f(-0.43f, 0.55f);
	glVertex2f(-0.43f, 0.58f);
	glVertex2f(-0.46f, 0.58f);
	glVertex2f(-0.46f, 0.55f);
	glEnd();

	    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window2
    glVertex2f(-0.43f, 0.5f);
	glVertex2f(-0.43f, 0.53f);
	glVertex2f(-0.46f, 0.53f);
	glVertex2f(-0.46f, 0.5f);
	glEnd();

	    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window2
    glVertex2f(-0.43f, 0.45f);
	glVertex2f(-0.43f, 0.48f);
	glVertex2f(-0.46f, 0.48f);
	glVertex2f(-0.46f, 0.45f);
	glEnd();

	    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window2
    glVertex2f(-0.43f, 0.4f);
	glVertex2f(-0.43f, 0.43f);
	glVertex2f(-0.46f, 0.43f);
	glVertex2f(-0.46f, 0.4f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window2
    glVertex2f(-0.43f, 0.35f);
	glVertex2f(-0.43f, 0.38f);
	glVertex2f(-0.46f, 0.38f);
	glVertex2f(-0.46f, 0.35f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window2
    glVertex2f(-0.43f, 0.31f);
	glVertex2f(-0.43f, 0.34f);
	glVertex2f(-0.46f, 0.34f);
	glVertex2f(-0.46f, 0.31f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window2
    glVertex2f(-0.39f, 0.75f);
	glVertex2f(-0.39f, 0.78f);
	glVertex2f(-0.42f, 0.78f);
	glVertex2f(-0.42f, 0.75f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window2
    glVertex2f(-0.39f, 0.7f);
	glVertex2f(-0.39f, 0.73f);
	glVertex2f(-0.42f, 0.73f);
	glVertex2f(-0.42f, 0.7f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window2
    glVertex2f(-0.39f, 0.65f);
	glVertex2f(-0.39f, 0.68f);
	glVertex2f(-0.42f, 0.68f);
	glVertex2f(-0.42f, 0.65f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window2
    glVertex2f(-0.39f, 0.6f);
	glVertex2f(-0.39f, 0.63f);
	glVertex2f(-0.42f, 0.63f);
	glVertex2f(-0.42f, 0.6f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window2
    glVertex2f(-0.39f, 0.55f);
	glVertex2f(-0.39f, 0.58f);
	glVertex2f(-0.42f, 0.58f);
	glVertex2f(-0.42f, 0.55f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window2
    glVertex2f(-0.39f, 0.5f);
	glVertex2f(-0.39f, 0.53f);
	glVertex2f(-0.42f, 0.53f);
	glVertex2f(-0.42f, 0.5f);

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window2
    glVertex2f(-0.39f, 0.45f);
	glVertex2f(-0.39f, 0.48f);
	glVertex2f(-0.42f, 0.48f);
	glVertex2f(-0.42f, 0.45f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window2
    glVertex2f(-0.39f, 0.4f);
	glVertex2f(-0.39f, 0.43f);
	glVertex2f(-0.42f, 0.43f);
	glVertex2f(-0.42f, 0.4f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window2
    glVertex2f(-0.39f, 0.35f);
	glVertex2f(-0.39f, 0.38f);
	glVertex2f(-0.42f, 0.38f);
	glVertex2f(-0.42f, 0.35f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //window2
    glVertex2f(-0.39f, 0.31f);
	glVertex2f(-0.39f, 0.34f);
	glVertex2f(-0.42f, 0.34f);
	glVertex2f(-0.42f, 0.31f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //building-gap
    glVertex2f(-0.65f, 0.3f);
	glVertex2f(-0.65f, 0.8f);
	glVertex2f(-0.67f, 0.8f);
	glVertex2f(-0.67f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50, 97, 135);  //building2L
    glVertex2f(-0.67f, 0.3f);
	glVertex2f(-0.67f, 0.75f);
	glVertex2f(-0.85f, 0.75f);
	glVertex2f(-0.85f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //building2L-border1
    glVertex2f(-0.7f, 0.3f);
	glVertex2f(-0.7f, 0.75f);
	glVertex2f(-0.715f, 0.75f);
	glVertex2f(-0.715f, 0.3f);
	glEnd();
    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //building2L-border2
    glVertex2f(-0.80f, 0.3f);
	glVertex2f(-0.80f, 0.75f);
	glVertex2f(-0.815f, 0.75f);
	glVertex2f(-0.815f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building2L-window1
    glVertex2f(-0.725f, 0.69f);
	glVertex2f(-0.725f, 0.73f);
	glVertex2f(-0.755f, 0.73f);
	glVertex2f(-0.755f, 0.69f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building2R-window1
    glVertex2f(-0.725f, 0.63f);
	glVertex2f(-0.725f, 0.67f);
	glVertex2f(-0.755f, 0.67f);
	glVertex2f(-0.755f, 0.63f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building2R-window1
    glVertex2f(-0.725f, 0.57f);
	glVertex2f(-0.725f, 0.61f);
	glVertex2f(-0.755f, 0.61f);
	glVertex2f(-0.755f, 0.57f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building2R-window1
    glVertex2f(-0.725f, 0.51f);
	glVertex2f(-0.725f, 0.55f);
	glVertex2f(-0.755f, 0.55f);
	glVertex2f(-0.755f, 0.51f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building2L-window1
    glVertex2f(-0.725f, 0.45f);
	glVertex2f(-0.725f, 0.49f);
	glVertex2f(-0.755f, 0.49f);
	glVertex2f(-0.755f, 0.45f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building2L-window1
    glVertex2f(-0.725f, 0.39f);
	glVertex2f(-0.725f, 0.43f);
	glVertex2f(-0.755f, 0.43f);
	glVertex2f(-0.755f, 0.39f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building2L-window1
    glVertex2f(-0.725f, 0.33f);
	glVertex2f(-0.725f, 0.37f);
	glVertex2f(-0.755f, 0.37f);
	glVertex2f(-0.755f, 0.33f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building2L-window2
    glVertex2f(-0.765f, 0.69f);
	glVertex2f(-0.765f, 0.73f);
	glVertex2f(-0.795f, 0.73f);
	glVertex2f(-0.795f, 0.69f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building2L-window2
    glVertex2f(-0.765f, 0.63f);
	glVertex2f(-0.765f, 0.67f);
	glVertex2f(-0.795f, 0.67f);
	glVertex2f(-0.795f, 0.63f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building2-window2
    glVertex2f(-0.765f, 0.57f);
	glVertex2f(-0.765f, 0.61f);
	glVertex2f(-0.795f, 0.61f);
	glVertex2f(-0.795f, 0.57f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building2l-window2
    glVertex2f(-0.765f, 0.51f);
	glVertex2f(-0.765f, 0.55f);
	glVertex2f(-0.795f, 0.55f);
	glVertex2f(-0.795f, 0.51f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building2L-window2
    glVertex2f(-0.765f, 0.45f);
	glVertex2f(-0.765f, 0.49f);
	glVertex2f(-0.795f, 0.49f);
	glVertex2f(-0.795f, 0.45f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building2RL-window2
    glVertex2f(-0.765f, 0.39f);
	glVertex2f(-0.765f, 0.43f);
	glVertex2f(-0.795f, 0.43f);
	glVertex2f(-0.795f, 0.39f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building2-window2
    glVertex2f(-0.765f, 0.33f);
	glVertex2f(-0.765f, 0.37f);
	glVertex2f(-0.795f, 0.37f);
	glVertex2f(-0.795f, 0.33f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(186,159,149);  //building2L-upper1
    glVertex2f(-0.67f, 0.75f);
	glVertex2f(-0.67f, 0.78f);
	glVertex2f(-0.85f, 0.78f);
	glVertex2f(-0.85f, 0.75f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //building2L-upper2
    glVertex2f(-0.69f, 0.78f);
	glVertex2f(-0.69f, 0.81f);
	glVertex2f(-0.83f, 0.81f);
	glVertex2f(-0.83f, 0.78f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50,97,135);  //building2-upper3
    glVertex2f(-0.71f, 0.81f);
	glVertex2f(-0.74f, 0.84f);
	glVertex2f(-0.77f, 0.84f);
	glVertex2f(-0.8f, 0.81f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //building-gap-2
    glVertex2f(-0.3f, 0.3f);
	glVertex2f(-0.3f, 0.8f);
    glVertex2f(-0.28f, 0.8f);
	glVertex2f(-0.28f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50, 97, 135);  //building3R
    glVertex2f(-0.28f, 0.3f);
	glVertex2f(-0.28f, 0.75f);
	glVertex2f(-0.1f, 0.75f);
	glVertex2f(-0.1f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //building3R-border1
    glVertex2f(-0.24f, 0.3f);
	glVertex2f(-0.24f, 0.75f);
	glVertex2f(-0.255f, 0.75f);
	glVertex2f(-0.255f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //building3R-border2
    glVertex2f(-0.13f, 0.3f);
	glVertex2f(-0.13f, 0.75f);
	glVertex2f(-0.145f, 0.75f);
	glVertex2f(-0.145f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building3R-window1
    glVertex2f(-0.155f, 0.69f);
	glVertex2f(-0.155f, 0.73f);
	glVertex2f(-0.185f, 0.73f);
	glVertex2f(-0.185f, 0.69f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building3R-window1
    glVertex2f(-0.155f, 0.63f);
	glVertex2f(-0.155f, 0.67f);
	glVertex2f(-0.185f, 0.67f);
	glVertex2f(-0.185f, 0.63f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building3R-window1
    glVertex2f(-0.155f, 0.57f);
	glVertex2f(-0.155f, 0.61f);
	glVertex2f(-0.185f, 0.61f);
	glVertex2f(-0.185f, 0.57f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building3R-window1
    glVertex2f(-0.155f, 0.51f);
	glVertex2f(-0.155f, 0.55f);
	glVertex2f(-0.185f, 0.55f);
	glVertex2f(-0.185f, 0.51f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building3R-window1
    glVertex2f(-0.155f, 0.45f);
	glVertex2f(-0.155f, 0.49f);
	glVertex2f(-0.185f, 0.49f);
	glVertex2f(-0.185f, 0.45f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building3R-window1
    glVertex2f(-0.155f, 0.39f);
	glVertex2f(-0.155f, 0.43f);
	glVertex2f(-0.185f, 0.43f);
	glVertex2f(-0.185f, 0.39f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building3R-window1
    glVertex2f(-0.155f, 0.33f);
	glVertex2f(-0.155f, 0.37f);
	glVertex2f(-0.185f, 0.37f);
	glVertex2f(-0.185f, 0.33f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building3R-window2
    glVertex2f(-0.195f, 0.69f);
	glVertex2f(-0.195f, 0.73f);
	glVertex2f(-0.225f, 0.73f);
	glVertex2f(-0.225f, 0.69f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building3R-window2
    glVertex2f(-0.195f, 0.63f);
	glVertex2f(-0.195f, 0.67f);
	glVertex2f(-0.225f, 0.67f);
	glVertex2f(-0.225f, 0.63f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building3R-window2
    glVertex2f(-0.195f, 0.57f);
	glVertex2f(-0.195f, 0.61f);
	glVertex2f(-0.225f, 0.61f);
	glVertex2f(-0.225f, 0.57f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building3R-window2
    glVertex2f(-0.195f, 0.51f);
	glVertex2f(-0.195f, 0.55f);
	glVertex2f(-0.225f, 0.55f);
	glVertex2f(-0.225f, 0.51f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building3R-window2
    glVertex2f(-0.195f, 0.45f);
	glVertex2f(-0.195f, 0.49f);
	glVertex2f(-0.225f, 0.49f);
	glVertex2f(-0.225f, 0.45f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building3R-window2
    glVertex2f(-0.195f, 0.39f);
	glVertex2f(-0.195f, 0.43f);
	glVertex2f(-0.225f, 0.43f);
	glVertex2f(-0.225f, 0.39f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27,199,255);  //building3R-window2
    glVertex2f(-0.195f, 0.33f);
	glVertex2f(-0.195f, 0.37f);
	glVertex2f(-0.225f, 0.37f);
	glVertex2f(-0.225f, 0.33f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(186,159,149);  //building3R-upper1
    glVertex2f(-0.28f, 0.75f);
	glVertex2f(-0.28f, 0.78f);
	glVertex2f(-0.1f, 0.78f);
	glVertex2f(-0.1, 0.75f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //building3R-upper2
    glVertex2f(-0.26f, 0.78f);
	glVertex2f(-0.26f, 0.81f);
	glVertex2f(-0.12f, 0.81f);
	glVertex2f(-0.12f, 0.78f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50,97,135);  //building3R-upper3
    glVertex2f(-0.25f, 0.81f);
	glVertex2f(-0.22f, 0.84f);
	glVertex2f(-0.18f, 0.84f);
	glVertex2f(-0.15, 0.81f);
	glEnd();
    }



    void nightbuilding()
{
	glBegin(GL_QUADS);
    glColor3ub(50, 97, 135);  //building1
    glVertex2f(-0.3f, 0.3f);
	glVertex2f(-0.3f, 0.8f);
	glVertex2f(-0.65f, 0.8f);
	glVertex2f(-0.65f, 0.3f);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(186, 159, 149);  //building1(upper1)
    glVertex2f(-0.33f, 0.8f);
	glVertex2f(-0.33f, 0.83f);
	glVertex2f(-0.62f, 0.83f);
	glVertex2f(-0.62f, 0.8f);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(244, 245, 233);  //building1(upper2)
    glVertex2f(-0.35f, 0.83f);
	glVertex2f(-0.35f, 0.85f);
	glVertex2f(-0.6f, 0.85f);
	glVertex2f(-0.6f, 0.83f);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(186,159,149);  //building1(upper3)
    glVertex2f(-0.37f, 0.85f);
	glVertex2f(-0.37f, 0.88f);
	glVertex2f(-0.58f, 0.88f);
	glVertex2f(-0.58f, 0.85f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50, 97, 135);  //building1(upper4)
    glVertex2f(-0.38f, 0.85f);
	glVertex2f(-0.42f, 0.91f);
	glVertex2f(-0.52f, 0.91f);
	glVertex2f(-0.56f, 0.85f);
	glEnd();


	glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //building1(upper5)
    glVertex2f(-0.44f, 0.91f);
	glVertex2f(-0.44f, 0.93f);
	glVertex2f(-0.5f, 0.93f);
	glVertex2f(-0.5f, 0.91f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50, 97, 135);  //building1(upper6)
    glVertex2f(-0.46f, 0.93f);
	glVertex2f(-0.46f, 0.96f);
	glVertex2f(-0.48f, 0.96f);
	glVertex2f(-0.48f, 0.93f);
	glEnd();



    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //border1
    glVertex2f(-0.36f, 0.3f);
	glVertex2f(-0.36f, 0.8f);
	glVertex2f(-0.375f, 0.8f);
	glVertex2f(-0.375f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //border2
    glVertex2f(-0.47f, 0.3f);
	glVertex2f(-0.47f, 0.8f);
	glVertex2f(-0.485f, 0.8f);
	glVertex2f(-0.485f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //border3
    glVertex2f(-0.58f, 0.3f);
	glVertex2f(-0.58f, 0.8f);
	glVertex2f(-0.595f, 0.8f);
	glVertex2f(-0.595f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window1
    glVertex2f(-0.54f, 0.75f);
	glVertex2f(-0.54f, 0.78f);
	glVertex2f(-0.57f, 0.78f);
	glVertex2f(-0.57f, 0.75f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window
    glVertex2f(-0.5f, 0.75f);
	glVertex2f(-0.5f, 0.78f);
	glVertex2f(-0.53f, 0.78f);
	glVertex2f(-0.53f, 0.75f);
	glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window
    glVertex2f(-0.5f, 0.7f);
	glVertex2f(-0.5f, 0.73f);
	glVertex2f(-0.53f, 0.73f);
	glVertex2f(-0.53f, 0.7f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window
    glVertex2f(-0.5f, 0.65f);
	glVertex2f(-0.5f, 0.68f);
	glVertex2f(-0.53f, 0.68f);
	glVertex2f(-0.53f, 0.65f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window
    glVertex2f(-0.5f, 0.6f);
	glVertex2f(-0.5f, 0.63f);
	glVertex2f(-0.53f, 0.63f);
	glVertex2f(-0.53f, 0.6f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window
    glVertex2f(-0.5f, 0.55f);
	glVertex2f(-0.5f, 0.58f);
	glVertex2f(-0.53f, 0.58f);
	glVertex2f(-0.53f, 0.55f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window
    glVertex2f(-0.5f, 0.5f);
	glVertex2f(-0.5f, 0.53f);
	glVertex2f(-0.53f, 0.53f);
	glVertex2f(-0.53f, 0.5f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window
    glVertex2f(-0.5f, 0.45f);
	glVertex2f(-0.5f, 0.48f);
	glVertex2f(-0.53f, 0.48f);
	glVertex2f(-0.53f, 0.45f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window
    glVertex2f(-0.5f, 0.4f);
	glVertex2f(-0.5f, 0.43f);
	glVertex2f(-0.53f, 0.43f);
	glVertex2f(-0.53f, 0.4f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window
    glVertex2f(-0.5f, 0.35f);
	glVertex2f(-0.5f, 0.38f);
	glVertex2f(-0.53f, 0.38f);
	glVertex2f(-0.53f, 0.35f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window
    glVertex2f(-0.5f, 0.31f);
	glVertex2f(-0.5f, 0.34f);
	glVertex2f(-0.53f, 0.34f);
	glVertex2f(-0.53f, 0.31f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window
    glVertex2f(-0.54f, 0.7f);
	glVertex2f(-0.54f, 0.73f);
	glVertex2f(-0.57f, 0.73f);
	glVertex2f(-0.57f, 0.7f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window
    glVertex2f(-0.54f, 0.65f);
	glVertex2f(-0.54f, 0.68f);
	glVertex2f(-0.57f, 0.68f);
	glVertex2f(-0.57f, 0.65f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window
    glVertex2f(-0.54f, 0.6f);
	glVertex2f(-0.54f, 0.63f);
	glVertex2f(-0.57f, 0.63f);
	glVertex2f(-0.57f, 0.6f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window
    glVertex2f(-0.54f, 0.55f);
	glVertex2f(-0.54f, 0.58f);
	glVertex2f(-0.57f, 0.58f);
	glVertex2f(-0.57f, 0.55f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window
    glVertex2f(-0.54f, 0.5f);
	glVertex2f(-0.54f, 0.53f);
	glVertex2f(-0.57f, 0.53f);
	glVertex2f(-0.57f, 0.5f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window
    glVertex2f(-0.54f, 0.45f);
	glVertex2f(-0.54f, 0.48f);
	glVertex2f(-0.57f, 0.48f);
	glVertex2f(-0.57f, 0.45f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window
    glVertex2f(-0.54f, 0.4f);
	glVertex2f(-0.54f, 0.43f);
	glVertex2f(-0.57f, 0.43f);
	glVertex2f(-0.57f, 0.4f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window
    glVertex2f(-0.54f, 0.35f);
	glVertex2f(-0.54f, 0.38f);
	glVertex2f(-0.57f, 0.38f);
	glVertex2f(-0.57f, 0.35f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window
    glVertex2f(-0.54f, 0.31f);
	glVertex2f(-0.54f, 0.34f);
	glVertex2f(-0.57f, 0.34f);
	glVertex2f(-0.57f, 0.31f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window2
    glVertex2f(-0.43f, 0.75f);
	glVertex2f(-0.43f, 0.78f);
	glVertex2f(-0.46f, 0.78f);
	glVertex2f(-0.46f, 0.75f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window2
    glVertex2f(-0.43f, 0.7f);
	glVertex2f(-0.43f, 0.73f);
	glVertex2f(-0.46f, 0.73f);
	glVertex2f(-0.46f, 0.7f);
	glEnd();

	    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window2
    glVertex2f(-0.43f, 0.65f);
	glVertex2f(-0.43f, 0.68f);
	glVertex2f(-0.46f, 0.68f);
	glVertex2f(-0.46f, 0.65f);
	glEnd();

	    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window2
    glVertex2f(-0.43f, 0.6f);
	glVertex2f(-0.43f, 0.63f);
	glVertex2f(-0.46f, 0.63f);
	glVertex2f(-0.46f, 0.6f);
	glEnd();

	    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window2
    glVertex2f(-0.43f, 0.55f);
	glVertex2f(-0.43f, 0.58f);
	glVertex2f(-0.46f, 0.58f);
	glVertex2f(-0.46f, 0.55f);
	glEnd();

	    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window2
    glVertex2f(-0.43f, 0.5f);
	glVertex2f(-0.43f, 0.53f);
	glVertex2f(-0.46f, 0.53f);
	glVertex2f(-0.46f, 0.5f);
	glEnd();

	    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window2
    glVertex2f(-0.43f, 0.45f);
	glVertex2f(-0.43f, 0.48f);
	glVertex2f(-0.46f, 0.48f);
	glVertex2f(-0.46f, 0.45f);
	glEnd();

	    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window2
    glVertex2f(-0.43f, 0.4f);
	glVertex2f(-0.43f, 0.43f);
	glVertex2f(-0.46f, 0.43f);
	glVertex2f(-0.46f, 0.4f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window2
    glVertex2f(-0.43f, 0.35f);
	glVertex2f(-0.43f, 0.38f);
	glVertex2f(-0.46f, 0.38f);
	glVertex2f(-0.46f, 0.35f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window2
    glVertex2f(-0.43f, 0.31f);
	glVertex2f(-0.43f, 0.34f);
	glVertex2f(-0.46f, 0.34f);
	glVertex2f(-0.46f, 0.31f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window2
    glVertex2f(-0.39f, 0.75f);
	glVertex2f(-0.39f, 0.78f);
	glVertex2f(-0.42f, 0.78f);
	glVertex2f(-0.42f, 0.75f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window2
    glVertex2f(-0.39f, 0.7f);
	glVertex2f(-0.39f, 0.73f);
	glVertex2f(-0.42f, 0.73f);
	glVertex2f(-0.42f, 0.7f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window2
    glVertex2f(-0.39f, 0.65f);
	glVertex2f(-0.39f, 0.68f);
	glVertex2f(-0.42f, 0.68f);
	glVertex2f(-0.42f, 0.65f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window2
    glVertex2f(-0.39f, 0.6f);
	glVertex2f(-0.39f, 0.63f);
	glVertex2f(-0.42f, 0.63f);
	glVertex2f(-0.42f, 0.6f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window2
    glVertex2f(-0.39f, 0.55f);
	glVertex2f(-0.39f, 0.58f);
	glVertex2f(-0.42f, 0.58f);
	glVertex2f(-0.42f, 0.55f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window2
    glVertex2f(-0.39f, 0.5f);
	glVertex2f(-0.39f, 0.53f);
	glVertex2f(-0.42f, 0.53f);
	glVertex2f(-0.42f, 0.5f);

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window2
    glVertex2f(-0.39f, 0.45f);
	glVertex2f(-0.39f, 0.48f);
	glVertex2f(-0.42f, 0.48f);
	glVertex2f(-0.42f, 0.45f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window2
    glVertex2f(-0.39f, 0.4f);
	glVertex2f(-0.39f, 0.43f);
	glVertex2f(-0.42f, 0.43f);
	glVertex2f(-0.42f, 0.4f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window2
    glVertex2f(-0.39f, 0.35f);
	glVertex2f(-0.39f, 0.38f);
	glVertex2f(-0.42f, 0.38f);
	glVertex2f(-0.42f, 0.35f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //window2
    glVertex2f(-0.39f, 0.31f);
	glVertex2f(-0.39f, 0.34f);
	glVertex2f(-0.42f, 0.34f);
	glVertex2f(-0.42f, 0.31f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //b-gap
    glVertex2f(-0.65f, 0.3f);
	glVertex2f(-0.65f, 0.8f);
	glVertex2f(-0.67f, 0.8f);
	glVertex2f(-0.67f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50, 97, 135);  //building2L
    glVertex2f(-0.67f, 0.3f);
	glVertex2f(-0.67f, 0.75f);
	glVertex2f(-0.85f, 0.75f);
	glVertex2f(-0.85f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //building2L-border1
    glVertex2f(-0.7f, 0.3f);
	glVertex2f(-0.7f, 0.75f);
	glVertex2f(-0.715f, 0.75f);
	glVertex2f(-0.715f, 0.3f);
	glEnd();
    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //building2L-border2
    glVertex2f(-0.80f, 0.3f);
	glVertex2f(-0.80f, 0.75f);
	glVertex2f(-0.815f, 0.75f);
	glVertex2f(-0.815f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building2L-window1
    glVertex2f(-0.725f, 0.69f);
	glVertex2f(-0.725f, 0.73f);
	glVertex2f(-0.755f, 0.73f);
	glVertex2f(-0.755f, 0.69f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building2R-window1
    glVertex2f(-0.725f, 0.63f);
	glVertex2f(-0.725f, 0.67f);
	glVertex2f(-0.755f, 0.67f);
	glVertex2f(-0.755f, 0.63f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building2R-window1
    glVertex2f(-0.725f, 0.57f);
	glVertex2f(-0.725f, 0.61f);
	glVertex2f(-0.755f, 0.61f);
	glVertex2f(-0.755f, 0.57f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building2R-window1
    glVertex2f(-0.725f, 0.51f);
	glVertex2f(-0.725f, 0.55f);
	glVertex2f(-0.755f, 0.55f);
	glVertex2f(-0.755f, 0.51f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building2L-window1
    glVertex2f(-0.725f, 0.45f);
	glVertex2f(-0.725f, 0.49f);
	glVertex2f(-0.755f, 0.49f);
	glVertex2f(-0.755f, 0.45f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building2L-window1
    glVertex2f(-0.725f, 0.39f);
	glVertex2f(-0.725f, 0.43f);
	glVertex2f(-0.755f, 0.43f);
	glVertex2f(-0.755f, 0.39f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building2L-window1
    glVertex2f(-0.725f, 0.33f);
	glVertex2f(-0.725f, 0.37f);
	glVertex2f(-0.755f, 0.37f);
	glVertex2f(-0.755f, 0.33f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building2L-window2
    glVertex2f(-0.765f, 0.69f);
	glVertex2f(-0.765f, 0.73f);
	glVertex2f(-0.795f, 0.73f);
	glVertex2f(-0.795f, 0.69f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building2L-window2
    glVertex2f(-0.765f, 0.63f);
	glVertex2f(-0.765f, 0.67f);
	glVertex2f(-0.795f, 0.67f);
	glVertex2f(-0.795f, 0.63f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building2-window2
    glVertex2f(-0.765f, 0.57f);
	glVertex2f(-0.765f, 0.61f);
	glVertex2f(-0.795f, 0.61f);
	glVertex2f(-0.795f, 0.57f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building2l-window2
    glVertex2f(-0.765f, 0.51f);
	glVertex2f(-0.765f, 0.55f);
	glVertex2f(-0.795f, 0.55f);
	glVertex2f(-0.795f, 0.51f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building2L-window2
    glVertex2f(-0.765f, 0.45f);
	glVertex2f(-0.765f, 0.49f);
	glVertex2f(-0.795f, 0.49f);
	glVertex2f(-0.795f, 0.45f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building2RL-window2
    glVertex2f(-0.765f, 0.39f);
	glVertex2f(-0.765f, 0.43f);
	glVertex2f(-0.795f, 0.43f);
	glVertex2f(-0.795f, 0.39f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building2-window2
    glVertex2f(-0.765f, 0.33f);
	glVertex2f(-0.765f, 0.37f);
	glVertex2f(-0.795f, 0.37f);
	glVertex2f(-0.795f, 0.33f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(186,159,149);  //building2L-upper1
    glVertex2f(-0.67f, 0.75f);
	glVertex2f(-0.67f, 0.78f);
	glVertex2f(-0.85f, 0.78f);
	glVertex2f(-0.85f, 0.75f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //building2L-upper2
    glVertex2f(-0.69f, 0.78f);
	glVertex2f(-0.69f, 0.81f);
	glVertex2f(-0.83f, 0.81f);
	glVertex2f(-0.83f, 0.78f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50,97,135);  //building2-upper3
    glVertex2f(-0.71f, 0.81f);
	glVertex2f(-0.74f, 0.84f);
	glVertex2f(-0.77f, 0.84f);
	glVertex2f(-0.8f, 0.81f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //b-gap-2
    glVertex2f(-0.3f, 0.3f);
	glVertex2f(-0.3f, 0.8f);
    glVertex2f(-0.28f, 0.8f);
	glVertex2f(-0.28f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50, 97, 135);  //building3R
    glVertex2f(-0.28f, 0.3f);
	glVertex2f(-0.28f, 0.75f);
	glVertex2f(-0.1f, 0.75f);
	glVertex2f(-0.1f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //building3R-border1
    glVertex2f(-0.24f, 0.3f);
	glVertex2f(-0.24f, 0.75f);
	glVertex2f(-0.255f, 0.75f);
	glVertex2f(-0.255f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //building3R-border2
    glVertex2f(-0.13f, 0.3f);
	glVertex2f(-0.13f, 0.75f);
	glVertex2f(-0.145f, 0.75f);
	glVertex2f(-0.145f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building3R-window1
    glVertex2f(-0.155f, 0.69f);
	glVertex2f(-0.155f, 0.73f);
	glVertex2f(-0.185f, 0.73f);
	glVertex2f(-0.185f, 0.69f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building3R-window1
    glVertex2f(-0.155f, 0.63f);
	glVertex2f(-0.155f, 0.67f);
	glVertex2f(-0.185f, 0.67f);
	glVertex2f(-0.185f, 0.63f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building3R-window1
    glVertex2f(-0.155f, 0.57f);
	glVertex2f(-0.155f, 0.61f);
	glVertex2f(-0.185f, 0.61f);
	glVertex2f(-0.185f, 0.57f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building3R-window1
    glVertex2f(-0.155f, 0.51f);
	glVertex2f(-0.155f, 0.55f);
	glVertex2f(-0.185f, 0.55f);
	glVertex2f(-0.185f, 0.51f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building3R-window1
    glVertex2f(-0.155f, 0.45f);
	glVertex2f(-0.155f, 0.49f);
	glVertex2f(-0.185f, 0.49f);
	glVertex2f(-0.185f, 0.45f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building3R-window1
    glVertex2f(-0.155f, 0.39f);
	glVertex2f(-0.155f, 0.43f);
	glVertex2f(-0.185f, 0.43f);
	glVertex2f(-0.185f, 0.39f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building3R-window1
    glVertex2f(-0.155f, 0.33f);
	glVertex2f(-0.155f, 0.37f);
	glVertex2f(-0.185f, 0.37f);
	glVertex2f(-0.185f, 0.33f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building3R-window2
    glVertex2f(-0.195f, 0.69f);
	glVertex2f(-0.195f, 0.73f);
	glVertex2f(-0.225f, 0.73f);
	glVertex2f(-0.225f, 0.69f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building3R-window2
    glVertex2f(-0.195f, 0.63f);
	glVertex2f(-0.195f, 0.67f);
	glVertex2f(-0.225f, 0.67f);
	glVertex2f(-0.225f, 0.63f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building3R-window2
    glVertex2f(-0.195f, 0.57f);
	glVertex2f(-0.195f, 0.61f);
	glVertex2f(-0.225f, 0.61f);
	glVertex2f(-0.225f, 0.57f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building3R-window2
    glVertex2f(-0.195f, 0.51f);
	glVertex2f(-0.195f, 0.55f);
	glVertex2f(-0.225f, 0.55f);
	glVertex2f(-0.225f, 0.51f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building3R-window2
    glVertex2f(-0.195f, 0.45f);
	glVertex2f(-0.195f, 0.49f);
	glVertex2f(-0.225f, 0.49f);
	glVertex2f(-0.225f, 0.45f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building3R-window2
    glVertex2f(-0.195f, 0.39f);
	glVertex2f(-0.195f, 0.43f);
	glVertex2f(-0.225f, 0.43f);
	glVertex2f(-0.225f, 0.39f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);  //building3R-window2
    glVertex2f(-0.195f, 0.33f);
	glVertex2f(-0.195f, 0.37f);
	glVertex2f(-0.225f, 0.37f);
	glVertex2f(-0.225f, 0.33f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(186,159,149);  //building3R-upper1
    glVertex2f(-0.28f, 0.75f);
	glVertex2f(-0.28f, 0.78f);
	glVertex2f(-0.1f, 0.78f);
	glVertex2f(-0.1, 0.75f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244,245,233);  //building3R-upper2
    glVertex2f(-0.26f, 0.78f);
	glVertex2f(-0.26f, 0.81f);
	glVertex2f(-0.12f, 0.81f);
	glVertex2f(-0.12f, 0.78f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50,97,135);  //building3R-upper3
    glVertex2f(-0.25f, 0.81f);
	glVertex2f(-0.22f, 0.84f);
	glVertex2f(-0.18f, 0.84f);
	glVertex2f(-0.15, 0.81f);
	glEnd();
}

    void tree(){

    glBegin(GL_QUADS);//tree1-leftG
    glColor3ub(143,47,9);
    glVertex2f(-0.89f,0.3f);
	glVertex2f(-0.89f,0.44f);
	glVertex2f(-0.91f, 0.44f);
    glVertex2f(-0.91f, 0.3f);
    glEnd();
    glBegin(GL_QUADS);//tree1-left
    glColor3ub(9,103,53);
    glVertex2f(-0.85f,0.44f);
	glVertex2f(-0.88f,0.5f);
	glVertex2f(-0.91f, 0.5f);
	glVertex2f(-0.94f, 0.44f);
    glEnd();//

    glBegin(GL_TRIANGLES);//tree
    glColor3ub(113,206,24);
    glVertex2f(-0.85f,0.48f);
	glVertex2f(-0.8975f,0.62f);
	glVertex2f(-0.945f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);//tree2-leftG
    glColor3ub(143,47,9);
    glVertex2f(-0.99f,0.3f);
	glVertex2f(-0.99f,0.43f);
	glVertex2f(-1.0f, 0.43f);
    glVertex2f(-1.0f, 0.3f);
    glEnd();

    glBegin(GL_QUADS);//tree2-left
    glColor3ub(9,103,53);
    glVertex2f(-0.93f,0.43f);
	glVertex2f(-0.96f,0.49f);
	glVertex2f(-0.99f, 0.49f);
    glVertex2f(-1.02f, 0.43f);
    glEnd();

    glBegin(GL_TRIANGLES);//tree2
    glColor3ub(113,206,24);
    glVertex2f(-0.94f,0.47f);
	glVertex2f(-1.02f,0.65f);
	glVertex2f(-1.05f, 0.47f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(143,47,9);  //tree-2R-body
    glVertex2f(-0.02f, 0.3f);
	glVertex2f(-0.02f, 0.455f);
	glVertex2f(-0.04f, 0.455f);
	glVertex2f(-0.04f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(9,103,53);  //tree-2R-1
    glVertex2f(0.03f, 0.455f);
	glVertex2f(-0.01f, 0.55f);
	glVertex2f(-0.04f, 0.55f);
	glVertex2f(-0.08f, 0.455f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(113,206,24);  //tree-2R-1
    glVertex2f(0.025f, 0.51f);
	glVertex2f(-0.0255f, 0.65f);
	glVertex2f(-0.075f, 0.51f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(143,47,9);  //tree-3R-G
    glVertex2f(0.1f, 0.3f);
	glVertex2f(0.1f, 0.455f);
	glVertex2f(0.13f, 0.455f);
	glVertex2f(0.13f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(9,103,53);  //tree-3R
    glVertex2f(0.17f, 0.455f);
	glVertex2f(0.13f, 0.55f);
	glVertex2f(0.10f, 0.55f);
	glVertex2f(0.06f, 0.455f);
	glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(113,206,24);  //tree-3R
    glVertex2f(0.165f, 0.5f);
	glVertex2f(0.115f, 0.68f);
	glVertex2f(0.06f, 0.5f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(143,47,9);  //tree-4R-G
    glVertex2f(0.3f, 0.3f);
	glVertex2f(0.3f, 0.455f);
	glVertex2f(0.33f, 0.455f);
	glVertex2f(0.33f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(9,103,53);  //tree-4R
    glVertex2f(0.36f, 0.455f);
	glVertex2f(0.33f, 0.5f);
	glVertex2f(0.3f, 0.5f);
	glVertex2f(0.27f, 0.455f);
	glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(113,206,24);  //tree-3R
    glVertex2f(0.365f, 0.48f);
	glVertex2f(0.3125f, 0.63f);
	glVertex2f(0.26f, 0.48f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(143,47,9);  //tree-4R-G
    glVertex2f(0.2f, 0.3f);
	glVertex2f(0.2f, 0.45f);
	glVertex2f(0.23f, 0.45f);
	glVertex2f(0.23f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(9,103,53);  //tree-4R
    glVertex2f(0.27f, 0.45f);
	glVertex2f(0.24f, 0.5f);
	glVertex2f(0.21f, 0.5f);
	glVertex2f(0.18f, 0.45f);
	glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(113,206,24);  //tree-4R
    glVertex2f(0.275f, 0.48f);
	glVertex2f(0.2225f, 0.6f);
	glVertex2f(0.17f, 0.48f);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(143,47,9);  //tree-5R-G
    glVertex2f(0.45f, 0.3f);
	glVertex2f(0.45f, 0.45f);
	glVertex2f(0.43f, 0.45f);
	glVertex2f(0.43f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(9,103,53);  //tree-5R
    glVertex2f(0.48f, 0.45f);
	glVertex2f(0.45f, 0.5f);
	glVertex2f(0.42f, 0.5f);
	glVertex2f(0.39f, 0.45f);
	glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(113,206,24);  //tree-5R
    glVertex2f(0.49f, 0.48f);
	glVertex2f(0.435f, 0.6f);
	glVertex2f(0.38f, 0.48f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(143,47,9);  //tree-6R-G
    glVertex2f(0.38f, 0.3f);
	glVertex2f(0.38f, 0.4f);
	glVertex2f(0.4f, 0.4f);
	glVertex2f(0.4f, 0.3f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(9,103,53);  //tree-6R
    glVertex2f(0.44f, 0.4f);
	glVertex2f(0.41f, 0.45f);
	glVertex2f(0.38f, 0.45f);
	glVertex2f(0.35f, 0.4f);
	glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(113,206,24);  //tree-6R
    glVertex2f(0.445f, 0.42f);
	glVertex2f(0.395f, 0.52f);
	glVertex2f(0.34f, 0.42f);
	glEnd();
    }
    void sun(){

	glBegin(GL_TRIANGLE_FAN);//SUN
    glColor3ub(255, 255, 0);
    glVertex2f(0.3, 0.8);
    for(i = 0.0f; i <= 360; i++)
    glVertex2f(0.12*cos(M_PI * i / 180.0) + 0.3, 0.15*sin(M_PI * i / 180.0) + 0.8);

    glEnd();
    }

    void moon()
{
    glBegin(GL_TRIANGLE_FAN);//MOON
    glColor3ub(255,255,255);
    glVertex2f(0.3, 0.8);
    for(i = 0.0f; i <= 360; i++)
    glVertex2f(0.12*cos(M_PI * i / 180.0) + 0.3, 0.15*sin(M_PI * i / 180.0) + 0.8);

    glEnd();
}
void star()
{
    glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(0.6f,0.59f);
	glEnd();

    glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(0.8f,0.70f);
	glEnd();

	glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(0.10f,0.80f);
	glEnd();

    glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(0.0f,0.80f);
	glEnd();

    glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(-0.1f,0.80f);
	glEnd();

    glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(0.4f,0.60f);
	glEnd();

    glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(0.2f,0.50f);
	glEnd();

	glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(-0.20f,0.95f);
	glEnd();

	glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(0.8f,0.90f);
	glEnd();

    glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(-0.95f,0.90f);
	glEnd();


}

    void sandCastle(){

	glBegin(GL_QUADS);   //Sand Castle
    glColor3ub(212, 165, 95);
    glVertex2f(-0.59f, 0.075f);
    glVertex2f(-0.59f, 0.175f);
    glVertex2f(-0.71f, 0.175f);
    glVertex2f(-0.71f, 0.075f);
    glVertex2f(-0.59f, 0.175f);
    glVertex2f(-0.59f, 0.2);
    glVertex2f(-0.63f, 0.2);
    glVertex2f(-0.63f, 0.175f);
    glVertex2f(-0.67f, 0.175f);
    glVertex2f(-0.67f, 0.2);
    glVertex2f(-0.71f,0.2);
    glVertex2f(-0.71f, 0.175f);

    glBegin(GL_QUADS);
    glColor3ub(194, 148, 79);
    glVertex2f(-0.535f, -0.025f);
    glVertex2f(-0.535f, 0.075f);
    glVertex2f(-0.765f, 0.075f);
    glVertex2f(-0.765f, -0.025f);
    glVertex2f(-0.535f,0.075f);
    glVertex2f(-0.535f, 0.1f);
    glVertex2f(-0.58f, 0.1f);
    glVertex2f(-0.58f,0.075f);
    glVertex2f(-0.6f, 0.075f);
    glVertex2f(-0.6f, 0.1f);
    glVertex2f(-0.7f, 0.1f);
    glVertex2f(-0.7f, 0.075f);
    glVertex2f(-0.72f, 0.075f);
    glVertex2f(-0.72f, 0.1f);
    glVertex2f(-0.765f, 0.1f);
    glVertex2f(-0.765f, 0.075f);

    glBegin(GL_QUADS);
    glColor3ub(173, 128, 61);
    glVertex2f(-0.5f, -0.1f);
    glVertex2f(-0.5f, -0.025f);
    glVertex2f(-0.8f, -0.025f);
    glVertex2f(-0.8f, -0.1f);
    glVertex2f(-0.5f, -0.025f);
    glVertex2f(-0.5f, 0.0f);
    glVertex2f(-0.525f,0.0f);
    glVertex2f(-0.525f, -0.025f);
    glVertex2f(-0.575f, -0.025f);
    glVertex2f(-0.575f, 0.0f);
    glVertex2f(-0.6f, 0.0f);
    glVertex2f(-0.6f, -0.025f);
    glVertex2f(-0.7f, -0.025f);
    glVertex2f(-0.7f, 0.0f);
    glVertex2f(-0.725f, 0.0f);
    glVertex2f(-0.725f, -0.025f);
    glVertex2f(-0.775f, -0.025f);
    glVertex2f(-0.775f, 0.0f);
    glVertex2f(-0.8f, 0.0f);
    glVertex2f(-0.8f, -0.025f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(-0.0f, 0.0f, 0.0f);
    glVertex2f(-0.65f, 0.175f);
    glVertex2f(-0.65f, 0.275f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.65f, 0.255f);
    glVertex2f(-0.65f, 0.275f);
    glVertex2f(-0.675f, 0.285f);
    glEnd();
    }

    void ship(){
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);


    glBegin(GL_QUADS);
    glColor3ub(98,97,95);//shipbody
	glVertex2f(0.3f, -0.9f);
	glVertex2f(0.8f, -0.9f);
	glVertex2f(1.0f, -0.6f);
	glVertex2f(0.1f, -0.6f);
	glEnd();

    glBegin(GL_QUADS);//1st row
    glColor3ub(37,19,15);
    glVertex2f(0.21f, -0.6f);
	glVertex2f(0.9f, -0.6f);
	glVertex2f(0.9f, -0.5f);
	glVertex2f(0.21f, -0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(45,45,45);//2nd row
    glVertex2f(0.25f, -0.5f);
	glVertex2f(0.83f, -0.5f);
	glVertex2f(0.83f, -0.4f);
	glVertex2f(0.25f, -0.4f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0.0,0.0,0.0);//1st piller
	glVertex2f(0.31f, -0.22f);
	glVertex2f(0.39f, -0.22f);
	glVertex2f(0.39f, -0.40f);
	glVertex2f(0.31f, -0.40f);
    glEnd();

    glBegin(GL_QUADS); //2nd piller
    glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.45f, -0.22f);
	glVertex2f(0.52f, -0.22f);
	glVertex2f(0.52f, -0.40f);
	glVertex2f(0.45f, -0.40f);
    glEnd();

    glBegin(GL_QUADS);//3rd piller
    glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.56f, -0.22f);
	glVertex2f(0.62f, -0.22f);
	glVertex2f(0.62f, -0.40f);
	glVertex2f(0.56f, -0.40f);
    glEnd();

    glBegin(GL_QUADS);//4th piller
    glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.66f, -0.22f);
	glVertex2f(0.73f, -0.22f);
	glVertex2f(0.73f, -0.40f);
	glVertex2f(0.66f, -0.40f);
    glEnd();

       glBegin(GL_QUADS);
    glColor3ub(247,247,247);//1st piller_white part
	glVertex2f(0.31f, -0.22f);
	glVertex2f(0.39f, -0.22f);
	glVertex2f(0.39f, -0.17f);
	glVertex2f(0.31f, -0.17f);
    glEnd();

    glBegin(GL_QUADS); //2nd piller_white part
    glColor3ub(247,247,247);
	glVertex2f(0.45f, -0.22f);
	glVertex2f(0.52f, -0.22f);
	glVertex2f(0.52f, -0.17f);
	glVertex2f(0.45f, -0.17f);
    glEnd();

    glBegin(GL_QUADS);//3rd piller_white part
    glColor3ub(247,247,247);
	glVertex2f(0.56f, -0.22f);
	glVertex2f(0.62f, -0.22f);
	glVertex2f(0.62f, -0.17f);
	glVertex2f(0.56f, -0.17f);
    glEnd();

    glBegin(GL_QUADS);//4th piller_white part
    glColor3ub(247,247,247);
	glVertex2f(0.66f, -0.22f);
	glVertex2f(0.73f, -0.22f);
	glVertex2f(0.73f, -0.17f);
	glVertex2f(0.66f, -0.17f);
    glEnd();


    glBegin(GL_QUADS);//piller brown
    glColor3ub(654,52,52);
    glVertex2f(0.17f, -0.6f);
    glVertex2f(0.20f, -0.6f);
    glVertex2f(0.20f, -0.0f);
    glVertex2f(0.17f, -0.0f);
    glEnd();


    glBegin(GL_QUADS);//pileer-violet
    glColor3ub(145,145,145);
    glVertex2f(0.19f, -0.0f);
    glVertex2f(0.21f,-0.0f);
    glVertex2f(0.21f, -0.6f);
    glVertex2f(0.19f, -0.6f);
    glEnd();

    glBegin(GL_TRIANGLES);//Flag
    glColor3ub(247,5,3);
    glVertex2f(-0.01f, -0.4);
	glVertex2f(0.17f, -0.4f);
	glVertex2f(0.17f, -0.01f);
	glEnd();



	glBegin(GL_QUADS);//1st ship window
    glColor3ub(247,247,247);
	glVertex2f(0.22f, -0.58f);
	glVertex2f(0.28f, -0.58f);
	glVertex2f(0.28f, -0.53f);
	glVertex2f(0.22f, -0.53f);
    glEnd();

    glBegin(GL_QUADS);//2nd row WINDOW
    glColor3ub(247,247,247);
    glVertex2f(0.40f, -0.58f);
	glVertex2f(0.34f, -0.58f);
	glVertex2f(0.34f, -0.53f);
	glVertex2f(0.40f, -0.53f);
    glEnd();

     glBegin(GL_QUADS);//3rd shipWINDOW
    glColor3ub(247,247,247);
    glVertex2f(0.51f, -0.58f);
	glVertex2f(0.45f, -0.58f);
	glVertex2f(0.45f, -0.53f);
	glVertex2f(0.51f, -0.53f);
    glEnd();


   glBegin(GL_QUADS);//4th ship window
    glColor3ub(247,247,247);
    glVertex2f(0.55f, -0.58f);
	glVertex2f(0.61f, -0.58f);
	glVertex2f(0.61f, -0.53f);
	glVertex2f(0.55f, -0.53f);
    glEnd();

    glBegin(GL_QUADS);//5th window
    glColor3ub(247,247,247);
	glVertex2f(0.65f, -0.58f);
	glVertex2f(0.71f, -0.58f);
	glVertex2f(0.71f, -0.53f);
	glVertex2f(0.65f, -0.53f);
    glEnd();

    glBegin(GL_QUADS);//6th window
    glColor3ub(247,247,247);
	glVertex2f(0.85f, -0.58f);
	glVertex2f(0.77f, -0.58f);
	glVertex2f(0.77f, -0.53f);
	glVertex2f(0.85f, -0.53f);
    glEnd();
    glPopMatrix();
    }
    void mountain(){


	glBegin(GL_TRIANGLES);
    glColor3ub(10, 95, 53);  //mountain1
    glVertex2f(0.6f, 0.29f);
	glVertex2f(1.0f, 0.29f);
	glVertex2f(1.0f, 0.9f);
	glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(7, 109, 45);  //mountain2
    glVertex2f(0.9f, 0.29f);
	glVertex2f(0.5f, 0.29f);
	glVertex2f(0.7f, 0.8f);
	glEnd();
    }
    void waterline(){
        glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

    glBegin(GL_LINES);
    glColor3ub(186, 186, 186);  //waterline
    glVertex2f(0.9f, -0.29f);
    glVertex2f(0.8f, -0.29f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);  //waterline
    glVertex2f(-0.6f, -0.84f);
    glVertex2f(-0.8f, -0.84f);
    glVertex2f(-0.8f,-0.85f);
    glVertex2f(-0.6f,-0.85f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(186, 186, 186);  //waterline
    glVertex2f(-0.6f, -0.6f);
    glVertex2f(0.0f, -0.6f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);  //waterline
    glVertex2f(-0.8f, -0.69f);
    glVertex2f(-0.1f, -0.69f);
    glVertex2f(-0.1f,-0.71f);
    glVertex2f(-0.8f,-0.71f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);  //waterline
    glVertex2f(0.82f, -0.9f);
    glVertex2f(0.1f, -0.9f);
    glVertex2f(0.1f,-0.92f);
    glVertex2f(0.8f,-0.92f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);  //waterline
    glVertex2f(-0.82f, -0.9f);
    glVertex2f(-0.12f, -0.9f);
    glVertex2f(-0.1f,-0.92f);
    glVertex2f(-0.8f,-0.92f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);  //waterline
    glVertex2f(-1.0f, -0.30f);
    glVertex2f(-0.1f, -0.30f);
    glVertex2f(-0.1f,-0.31f);
    glVertex2f(-1.0f,-0.31f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);  //waterline
    glVertex2f(-0.2f, -0.39f);
    glVertex2f(-0.6f, -0.39f);
    glVertex2f(-0.6f,-0.40f);
    glVertex2f(-0.2f,-0.40f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);  //waterline
    glVertex2f(-0.9f, -0.49f);
    glVertex2f(-0.7f, -0.49f);
    glVertex2f(-0.7f,-0.48f);
    glVertex2f(-0.9f,-0.48f);
    glEnd();
    glPopMatrix();
    }
void bird()
{
 glPushMatrix();
 glTranslatef(position2,0.0f, 0.0f);
 glBegin(GL_POLYGON);
 glColor3ub(0,0,0);
 glVertex2f(0.27f,0.64f);// 1st
 glVertex2f(0.30f,0.63f);
 glVertex2f(0.30f,0.63f);
 glVertex2f(0.29f,0.62f);
 glVertex2f(0.29f,0.62f);
 glVertex2f(0.29f,0.62f);
 glVertex2f(0.28f,0.61f);
 glVertex2f(0.28f,0.60f);
 glVertex2f(0.27f,0.62f);
 glVertex2f(0.26f,0.62f);
 glVertex2f(0.26f,0.62f);
 glVertex2f(0.26f,0.63f);
 glVertex2f(0.27f,0.64f);
 glEnd();

glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(0.29f,0.44f);// 2nd
glVertex2f(0.32f,0.43f);
glVertex2f(0.33f,0.43f);
glVertex2f(0.32f,0.42f);
glVertex2f(0.313f,0.422f);
glVertex2f(0.315f,0.414f);
glVertex2f(0.31f,0.40f);
glVertex2f(0.308f,0.417f);
glVertex2f(0.295f,0.414f);
glVertex2f(0.29f,0.422f);
glVertex2f(0.28f,0.43f);
glVertex2f(0.28f,0.431f);
glVertex2f(0.29f,0.43f);
glEnd();

 glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(0.37f,0.517f);// 3rd
glVertex2f(0.39f,0.505f);
glVertex2f(0.405f,0.497f);
glVertex2f(0.39f,0.4914f);
glVertex2f(0.39f,0.494f);
glVertex2f(0.39f,0.488f);
glVertex2f(0.385f,0.488f);
glVertex2f(0.38f,0.48f);
glVertex2f(0.37f,0.494f);
glVertex2f(0.36f,0.4914f);
glVertex2f(0.366f,0.5f);
glVertex2f(0.363f,0.511f);
glVertex2f(0.37f,0.511f);

 glEnd();
 glPopMatrix();

}
    void crab(){
    glBegin(GL_POLYGON);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.4f,0.1f);
    glVertex2f(0.44f,0.1f);
    glVertex2f(0.46f,0.15f);
    glVertex2f(0.44f,0.18f);
    glVertex2f(0.4f,0.18f);
    glVertex2f(0.38f,0.15f);
    glEnd();



    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.44f,0.18f);
    glVertex2f(0.47f,0.2f);
    glEnd();



    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.47f,0.2f);
    glVertex2f(0.49f,0.16f);
    glEnd();



    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.46f,0.15f);
    glVertex2f(0.48f,0.17f);
    glEnd();



    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.48f,0.17f);
    glVertex2f(0.5f,0.13f);
    glEnd();



    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.45f,0.13f);
    glVertex2f(0.47f,0.15f);
    glEnd();
    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.47f,0.15f);
    glVertex2f(0.49f,0.11f);
    glEnd();



    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.44f,0.1f);
    glVertex2f(0.46f,0.12f);
    glEnd();
    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.46f,0.12f);
    glVertex2f(0.48f,0.08f);
    glEnd();



    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.4f,0.18f);
    glVertex2f(0.38f,0.2f);
    glEnd();
    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.38f,0.2f);
    glVertex2f(0.36f,0.16f);
    glEnd();



    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.38f,0.15f);
    glVertex2f(0.36f,0.17f);
    glEnd();
    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.36f,0.17f);
    glVertex2f(0.34f,0.13f);
    glEnd();



    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.4f,0.1f);
    glVertex2f(0.38f,0.12f);
    glEnd();
    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.38f,0.12f);
    glVertex2f(0.36f,0.08f);
    glEnd();



    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.39f,0.13f);
    glVertex2f(0.37f,0.14f);
    glEnd();
    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.37f,0.14f);
    glVertex2f(0.35f,0.1f);
    glEnd();



    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.445f,0.17f);
    glVertex2f(0.475f,0.19f);
    glEnd();
    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.475f,0.19f);
    glVertex2f(0.485f,0.16f);
    glEnd();



    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.39f,0.17f);
    glVertex2f(0.37f,0.19f);
    glEnd();
    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.37f,0.19f);
    glVertex2f(0.35f,0.16f);
    glEnd();



    glPointSize(3.00);
    glBegin(GL_POINTS);
    glColor3ub(31,31,27);
    glVertex2f(0.41f,0.16f);
    glVertex2f(0.43f,0.16f);
    glEnd();



    glBegin(GL_POLYGON);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.2f,0.1f);
    glVertex2f(0.25f,0.1f);
    glVertex2f(0.27f,0.15f);
    glVertex2f(0.25f,0.2f);
    glVertex2f(0.2f,0.2f);
    glVertex2f(0.18f,0.15f);
    glEnd();

    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.25f,0.19f);
    glVertex2f(0.27f,0.20f);
    glEnd();

    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.27f,0.20f);
    glVertex2f(0.29f,0.15f);
    glEnd();

    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.25f,0.20f);
    glVertex2f(0.27f,0.21f);
    glEnd();

    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.27f,0.21f);
    glVertex2f(0.29f,0.18f);
    glEnd();

    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.26f,0.14f);
    glVertex2f(0.28f,0.16f);
    glEnd();

    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.28f,0.16f);
    glVertex2f(0.30f,0.12f);
    glEnd();

    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.26f,0.17f);
    glVertex2f(0.28f,0.18f);
    glEnd();

      glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.28f,0.18f);
    glVertex2f(0.30f,0.16f);
    glEnd();

    glBegin(GL_LINES);     //CRAB
    glColor3ub(220,88,33);
    glVertex2f(0.25f,0.10f);
    glVertex2f(0.27f,0.12f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(220,88,33);
    glVertex2f(0.27f,0.12f);//CRAB
    glVertex2f(0.29f,0.10f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(220,88,33);
    glVertex2f(0.17f,0.16f);//CRAB
    glVertex2f(0.19f,0.14f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(220,88,33);//CRAB
    glVertex2f(0.17f,0.16f);
    glVertex2f(0.15f,0.12f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(220,88,33);//CRAB
    glVertex2f(0.17f,0.19f);
    glVertex2f(0.21f,0.11f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(220,88,33);//CRAB
    glVertex2f(0.17f,0.19f);
    glVertex2f(0.14f,0.13f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(220,88,33);//CRAB
    glVertex2f(0.20f,0.19f);
    glVertex2f(0.17f,0.22f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(220,88,33);//CRAB
    glVertex2f(0.17f,0.22f);
    glVertex2f(0.15f,0.17f);
   glEnd();



   glBegin(GL_LINES);
    glColor3ub(220,88,33);//CRAB
    glVertex2f(0.17f,0.13f);
    glVertex2f(0.20f,0.11f);
   glEnd();

    glBegin(GL_LINES);
    glColor3ub(220,88,33);//CRAB
    glVertex2f(0.17f,0.13f);
    glVertex2f(0.15f,0.12f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(220,88,33);//CRAB
    glVertex2f(0.20f,0.10f);
    glVertex2f(0.17f,0.12f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(220,88,33);//CRAB
    glVertex2f(0.17f,0.12f);
    glVertex2f(0.15f,0.10f);
    glEnd();


    glPointSize(3.00);
    glBegin(GL_POINTS);
    glColor3ub(31,31,27);
    glVertex2f(0.24f,0.16f);
    glVertex2f(0.21f,0.16f);
    glEnd();

    }




void day()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    sand();
    sky();
    ocean();
    ship();
    sandCastle();
    crab();
    tree();
    mountain();
    building();
    sun();
    bird();
    waterline();
    glFlush();
}
void night()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();

   nightOcan();
   nightSand();
   nightSky();
   star();
   mountain();
   moon();
   tree();
   sandCastle();
   ship();
     nightbuilding();
     waterline();
glFlush();  // Render now
}
void handleKeypress(unsigned char key, int x, int y) {

    switch (key) {
        case 's':
            speed = 0.0f;
            break;
        case 'z':
            speed = 0.05f;
            break;
        case 'a':
            speed =-0.05f;
            break;
        case'n':
             glutDisplayFunc(night);
             glutPostRedisplay();
             break;
        case 'd':
            glutDisplayFunc(day);
            glutPostRedisplay();
            break;



	}

}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
    glutInitWindowSize(1200, 600);
    glutInitWindowPosition(100, 150);
    glutCreateWindow("SEA BEACH VIEW FROM HOTEL");
	glutDisplayFunc(day);
	init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
    glutTimerFunc(100, update, 0);
   glutTimerFunc(100, update2, 0);

	glutMainLoop();
	return 0;
}

