#include <GL/glut.h>
#include <stdlib.h>
void SegiEmpat (int x, int y, int w, int h) {
        glBegin (GL_QUADS);
		glVertex2i (x,y);
		glVertex2i (w+x,y);
		glVertex2i (w+x,y-h);
		glVertex2i (x,y-h);
        glEnd();
}

void load(void) {
        glClear(GL_COLOR_BUFFER_BIT);
        //kuning
        glColor3f(1,1,0);
        SegiEmpat (-150,150,50,50);
        //ungu
        glColor3f(1,0,1);
        SegiEmpat (0,150,100,100);
        glColor3f(0,0,1);
        SegiEmpat (0,-100,150,100);
        glFlush();
}


main(int argc, char **argv) {
	glutInit(&argc, argv);
	// menentukan display mode awal (RGBA mode, single buffer, depth buffer)
	glutInitDisplayMode (GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
	// fungsi meletakkan posisi windows
	glutInitWindowPosition(100,100);
	// fungsi membuat window dengan ukuran sebesar 640 pixel x 480 pixel
	glutInitWindowSize(640,480);
	// fungsi membuat window dengan nama Pemrograman Glut
	glutCreateWindow("PERSEGI 3 Warna");
	// melakukan rendering fungsi load yang telah dibuat
	glutDisplayFunc(load);
	// deklarasi ukuran sumbu x sebesar 320 satuan ke kiri, 320 satuan ke kanan, 240 satuan ke bawah dan 240 satuan ke atas
	gluOrtho2D(-320.,320.,-240.,240.);
	glutMainLoop();
}
