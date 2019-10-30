#include <GL/glut.h>
#include <stdlib.h>
void trapesium (int posx,int posy,int s,int i,int h){
        glBegin(GL_TRIANGLES);
		glVertex2i(posx,posy);
		glVertex2i(posx+s,posy);
		glVertex2i(posx+s+(i-s/2),posy-h);
		glVertex2i(posx+s+(i-s/2),posy-h);
		glVertex2i(posx,posy);
		glVertex2i(posx-(i-s/2),posy-h);
		glEnd();
}

void load(void) {
        glClear(GL_COLOR_BUFFER_BIT);
        //hijau
		glColor3f(0,1,0);
		trapesium(-100,-150,80,90,90);
		//pink
		glColor3f(1,0,1);
		trapesium(-100,-50,70,90,90);
		//biru
		glColor3f(0,0,1);
		trapesium(-100,80,70,90,90);
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
	glutCreateWindow("TRAPESIUM 3 Warna");
	// melakukan rendering fungsi load yang telah dibuat
	glutDisplayFunc(load);
	// deklarasi ukuran sumbu x sebesar 320 satuan ke kiri, 320 satuan ke kanan, 240 satuan ke bawah dan 240 satuan ke atas
	gluOrtho2D(-320.,320.,-240.,240.);
	glutMainLoop();
}
