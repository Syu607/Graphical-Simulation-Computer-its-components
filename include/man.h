#ifndef MAN_H
#define MAN_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <GL\glut.h>

class Man {
public:void renderScene();
};
//untuk glu
GLUquadric *myQuad;
//def var posisi obj
int skalaX = 0, skalaY = 0, skalaZ = -30;
int walkstate = 0;

int Kepala = 0;
int Leher = 270;
int Torso = -90;
int Perut = 0;
int Pinggul = -90;
int PanggulKanan = 0;
int PanggulKiri = 0;

int BahuKanan = 0;
int BahuKiri = 0;
int TanganAL = 90;
int TanganAR = 90;
int SikutKanan = 0;
int SikutKiri = 0;
int TanganBL = 0;
int TanganBR = 0;
int TanganTL = 0;
int TanganTR = 0;

int PahaAL = 90;
int PahaAR = 90;
int LututKanan = 0;
int LututKiri = 0;
int BetisAL = 0;
int BetisAR = 0;
int TumitKanan = 0;
int TumitKiri = 0;
int KakiTL = 0;
int KakiTR = 0;

int state = 1;

void kepala()
{
    glPushMatrix();
	glColor3f(1.545, 0.271, 0.075);
	glutSolidSphere(1, 100, 100);
	glPopMatrix();
}

void leher()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	glRotatef((GLfloat) Leher, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 0.45, 0.4, 0.5, 100, 100);
	glPopMatrix();
}

void torso()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	glRotatef((GLfloat) Torso, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 0.8, 1.1, 1.8, 100, 100);
	glPopMatrix();
}

void perut()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.7, 100, 100);
	glPopMatrix();
}

void pinggul()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	glRotatef((GLfloat) Pinggul, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 1, 0.8, 1.3, 100, 100);
	glPopMatrix();
}

void panggulKanan()
{
    glPushMatrix();
    glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.4, 100, 100);
	glPopMatrix();
}

void panggulKiri()
{
    glPushMatrix();
    glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.4, 100, 100);
	glPopMatrix();
}

void sendi()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.4, 100, 100);
	glPopMatrix();
}

void bahuKanan()
{
    glPushMatrix();
    glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.4, 100, 100);
	glPopMatrix();
}

void bahuKiri()
{
    glPushMatrix();
    glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.4, 100, 100);
	glPopMatrix();
}

void tanganAL()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	//glRotatef((GLfloat) TanganAL, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 0.35, 0.3, 1.8, 100, 100);
	glPopMatrix();
}

void tanganAR()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	//glRotatef((GLfloat) TanganAR, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 0.35, 0.3, 1.8, 100, 100);
	glPopMatrix();
}

void sikut()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.3, 100, 100);
	glPopMatrix();
}

void sikutKanan()
{
    glPushMatrix();
    glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.3, 100, 100);
	glPopMatrix();
}

void sikutKiri()
{
    glPushMatrix();
    glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.3, 100, 100);
	glPopMatrix();
}

void tanganBL()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	//glRotatef((GLfloat) TanganBL, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 0.3, 0.25, 1.5, 100, 100);
	glPopMatrix();
}

void tanganBR()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	//glRotatef((GLfloat) TanganBR, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 0.3, 0.25, 1.5, 100, 100);
	glPopMatrix();
}

void tanganTR()
{
    glPushMatrix();
	myQuad = gluNewQuadric();
	glColor3f(0.545, 0.271, 0.075);
	glScalef(1, 1.5, 1);
	//glRotatef(90, 1.0, 0.0, 0.0);
	gluSphere(myQuad, 0.3, 100, 100);
	glPopMatrix();
}

void tanganTL()
{
    glPushMatrix();
	myQuad = gluNewQuadric();
	glColor3f(0.545, 0.271, 0.075);
	//glRotatef(90.0, 1.0, 0.0, 0.0);
	glScalef(1, 1.5, 1);
	gluSphere(myQuad, 0.3, 100, 100);
	glPopMatrix();
}

void pahaAL()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	//glRotatef((GLfloat) PahaAL, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 0.44, 0.33, 2, 100, 100);
	glPopMatrix();
}

void pahaAR()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	//glRotatef((GLfloat) PahaAR, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 0.44, 0.33, 2, 100, 100);
	glPopMatrix();
}

void lututKanan()
{
    glPushMatrix();
    glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.3, 100, 100);
	glPopMatrix();
}

void lututKiri()
{
    glPushMatrix();
    glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.3, 100, 100);
	glPopMatrix();
}

void betisAL()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	//glRotatef((GLfloat) BetisAL, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 0.35, 0.3, 1.8, 100, 100);
	glPopMatrix();
}

void betisAR()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	//glRotatef((GLfloat) BetisAR, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 0.35, 0.3, 1.8, 100, 100);
	glPopMatrix();
}

void tumitKanan()
{
    glPushMatrix();
    glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.3, 100, 100);
	glPopMatrix();
}

void tumitKiri()
{
    glPushMatrix();
    glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.3, 100, 100);
	glPopMatrix();
}

void kakiTL()
{
    glPushMatrix();
	myQuad = gluNewQuadric();
	glRotatef((GLfloat) KakiTL, 1.0, 0.0, 0.0);
	glColor3f(0.545, 0.271, 0.075);
	glScalef(1.3, 2, 1);
	gluSphere(myQuad, 0.3, 100, 100);
	glPopMatrix();
}

void kakiTR()
{
    glPushMatrix();
	myQuad = gluNewQuadric();
	glRotatef((GLfloat) KakiTR, 1.0, 0.0, 0.0);
	glColor3f(0.545, 0.271, 0.075);
	glScalef(1.3, 2, 1);
	gluSphere(myQuad, 0.3, 100, 100);
	glPopMatrix();
}

void Man::renderScene()
{
	glColor3f(1, 0, 0);
	glLoadIdentity();
	glTranslated(0, 0, skalaZ);
	glRotatef(0, 0, 0, 0);

	glPushMatrix();

	glPushMatrix(); //badan
	glTranslatef(0.0, 6.8, 0.0);
	kepala();
	glTranslatef(0.0, -1.5, 0.0);
	leher();
	glTranslatef(0.0, -1.8, 0.0);
	torso();
	glTranslatef(0.0, 0.0, -0.1);
	perut();
	glTranslatef(0.0, -1.4, 0.0);
	pinggul();
	glTranslatef(0.5, -0.3, 0.0);
	panggulKanan();
	glTranslatef(-1.0, 0.0, 0.0);
	panggulKiri();
	glPopMatrix();

	glPushMatrix(); //tangan kanan
	glTranslatef(1.4, 4.95, 0.0);
	bahuKanan();
	glTranslatef(0.0, 0.0, 0.0);
	glRotatef((GLfloat) TanganAR, 1.0, 0.0, 0.0);
	tanganAR();
	glTranslatef(0.0, 0.0, 1.95);
	sikutKanan();
	glTranslatef(0.0, 0.0, 0.15);
	glRotatef((GLfloat) TanganBR, 1.0, 0.0, 0.0);
	tanganBR();
	glTranslatef(0.0, 0.0, 1.85);
	glRotatef(90, 1.0, 0.0, 0.0);
	tanganTR();
    glPopMatrix();

    glPushMatrix(); //tangan kiri
    glTranslatef(-1.4, 4.95, 0.0);
	bahuKiri();
	glTranslatef(0.0, 0.0, 0.0);
	glRotatef((GLfloat) TanganAL, 1.0, 0.0, 0.0);
	tanganAL();
	glTranslatef(0.0, 0.0, 1.95);
	sikutKiri();
	glTranslatef(0.0, 0.0, 0.15);
	glRotatef((GLfloat) TanganBL, 1.0, 0.0, 0.0);
	tanganBL();
	glTranslatef(0.0, 0.0, 1.85);
	glRotatef(90, 1.0, 0.0, 0.0);
	tanganTL();
    glPopMatrix();

    glPushMatrix(); //kaki kanan
    glTranslatef(0.5, 1.5, 0.0);
    glRotatef((GLfloat) PahaAR, 1.0, 0.0, 0.0);
    pahaAR();
    glTranslatef(0.0, 0.0, 2.1);
    lututKanan();
    glTranslatef(0.0, 0.0, 0.1);
    glRotatef((GLfloat) BetisAR, 1.0, 0.0, 0.0);
    betisAR();
    glTranslatef(0.0, 0.0, 1.95);
    tumitKanan();
    glTranslatef(0.0, 0.5, 0.0);
    kakiTR();
    glPopMatrix();

    glPushMatrix(); //kaki kiri
    glTranslatef(-0.5, 1.5, 0.0);
    glRotatef((GLfloat) PahaAL, 1.0, 0.0, 0.0);
    pahaAL();
    glTranslatef(0.0, 0.0, 2.1);
    lututKiri();
    glTranslatef(0.0, 0.0, 0.1);
    glRotatef((GLfloat) BetisAL, 1.0, 0.0, 0.0);
    betisAL();
    glTranslatef(0.0, 0.0, 1.95);
    tumitKiri();
    glTranslatef(0.0, 0.5, 0.0);
    kakiTL();
    glPopMatrix();

	glPopMatrix();
    glFlush();
	glutSwapBuffers();
}

void jalan()
{
    if (state < 15)
    {
        TanganAR = (TanganAR + 5) % 360;
        TanganAL = (TanganAL - 5) % 360;
        PahaAL = (PahaAL + 5) % 360;
        PahaAR = (PahaAR - 5) %360;
        glutPostRedisplay();
        state++;
    }
    else if (state >= 15 && state < 30)
    {
        TanganAR = (TanganAR - 5) % 360;
        TanganAL = (TanganAL + 5) % 360;
        PahaAL = (PahaAL - 5) % 360;
        PahaAR = (PahaAR + 5) %360;
        glutPostRedisplay();
        state++;
    }
    else if (state >= 30 && state < 45)
    {
        TanganAR = (TanganAR - 5) % 360;
        TanganAL = (TanganAL + 5) % 360;
        PahaAL = (PahaAL - 5) % 360;
        PahaAR = (PahaAR + 5) %360;
        glutPostRedisplay();
        state++;
    }
    else if (state >= 45 && state < 60)
    {
        TanganAR = (TanganAR + 5) % 360;
        TanganAL = (TanganAL - 5) % 360;
        PahaAL = (PahaAL + 5) % 360;
        PahaAR = (PahaAR - 5) %360;
        glutPostRedisplay();
        state++;
    }
    else
        state = 0;
}

void keyboard (unsigned char key, int x, int y)
{
    switch (key) {
        case 'u': //lengan atas kanan
            TanganAR = (TanganAR + 5) % 360;
            glutPostRedisplay();
            break;
        case 'i': //lengan atas kanan
            TanganAR = (TanganAR - 5) % 360;
            glutPostRedisplay();
            break;
        case 'o'://lengan bawah kanan
            TanganBR = (TanganBR + 5) % 360;
            glutPostRedisplay();
            break;
        case 'p': //lengan bawah kanan
            TanganBR = (TanganBR - 5) % 360;
            glutPostRedisplay();
            break;
        case 'h': //paha kanan
            PahaAR = (PahaAR + 5) % 360;
            glutPostRedisplay();
            break;
        case 'j': //paha kanan
            PahaAR = (PahaAR - 5) % 360;
            glutPostRedisplay();
            break;
        case 'k': //betis kanan
            BetisAR = (BetisAR + 5) % 360;
            glutPostRedisplay();
            break;
        case 'l': //betis kanan
            BetisAR = (BetisAR - 5) % 360;
            glutPostRedisplay();
            break;

        case 'q': //lengan atas kanan
            TanganAL = (TanganAL + 5) % 360;
            glutPostRedisplay();
            break;
        case 'w': //lengan atas kanan
            TanganAL = (TanganAL - 5) % 360;
            glutPostRedisplay();
            break;
        case 'e'://lengan bawah kanan
            TanganBL = (TanganBL + 5) % 360;
            glutPostRedisplay();
            break;
        case 'r': //lengan bawah kanan
            TanganBL = (TanganBL - 5) % 360;
            glutPostRedisplay();
            break;
        case 'a': //paha kanan
            PahaAL = (PahaAL + 5) % 360;
            glutPostRedisplay();
            break;
        case 's': //paha kanan
            PahaAL = (PahaAL - 5) % 360;
            glutPostRedisplay();
            break;
        case 'd': //betis kanan
            BetisAL = (BetisAL + 5) % 360;
            glutPostRedisplay();
            break;
        case 'f': //betis kanan
            BetisAL = (BetisAL - 5) % 360;
            glutPostRedisplay();
            break;
        case 'b': //walk
            walkstate++;
            if(walkstate % 2 == 0)
                glutIdleFunc(jalan);
            else
                glutIdleFunc(NULL);
            break;
        default:
            break;
    }
}

#endif MAN_H