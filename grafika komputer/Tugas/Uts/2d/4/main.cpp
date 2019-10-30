#include <GL/glut.h>
#include <stdlib.h>
void jajargenjang (int posx, int posy, int w, int h) {
        glBegin (GL_QUADS);
		glVertex2i (posx,posy);
		glVertex2i (w+posx+w,posy);
		glVertex2i (w+posx,posy-h);
		glVertex2i (posx-w,posy-h);
        glEnd();
}

void load(void) {
        glClear(GL_COLOR_BUFFER_BIT);
        //hijau
        glColor3f(0,1,0);
        jajargenjang(-80,80,50,50);
        //kuning
        glColor3f(1,1,0);
        jajargenjang(-100,-10,-50,50);
        //pink
        glColor3f(1,0,1);
        jajargenjang(80,10,50,50);
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
	glutCreateWindow("JajarGenjang 3 Warna");
	// melakukan rendering fungsi load yang telah dibuat
	glutDisplayFunc(load);
	// deklarasi ukuran sumbu x sebesar 320 satuan ke kiri, 320 satuan ke kanan, 240 satuan ke bawah dan 240 satuan ke atas
	gluOrtho2D(-320.,320.,-240.,240.);
	glutMainLoop();
}
