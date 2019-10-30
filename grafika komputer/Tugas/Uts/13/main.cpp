#include <stdlib.h>
#include <GL/glut.h>


void bangun (void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glVertex2i(100,0);
	glVertex2i(100,50);
	glVertex2i(50,100);
	glVertex2i(50,0);
	glVertex2i(-100,0);
	glVertex2i(-100,50);
	glEnd();
	glFlush();
}


main(int argc, char **argv) {
	glutInit(&argc, argv);
	// menentukan display mode awal (RGBA mode, single buffer, depth buffer)
	glutInitDisplayMode (GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
	// fungsi meletakkan posisi linux
	glutInitWindowPosition(100,100);
	// fungsi membuat window dengan ukuran sebesar 640 pixel x 480 pixel
	glutInitWindowSize(640,480);
    // fungsi membuat window dengan nama Pemrograman Glut
	glutCreateWindow("Bangun Simetris GL POLYGON");
	 // melakukan rendering fungsi bangun yang telah dibuat
	glutDisplayFunc(bangun);
	// deklarasi ukuran sumbu x sebesar 320 satuan ke kiri, 320 satuan ke kanan, 240 satuan ke bawah dan 240 satuan ke atas
	gluOrtho2D(-320.,320.,-240.,240.);
	glutMainLoop();
}
