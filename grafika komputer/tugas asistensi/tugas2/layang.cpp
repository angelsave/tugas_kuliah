#include <stdlib.h>
#include <GL/glut.h>


void layang(int x,int y,int w, int h){
       glBegin(GL_QUADS);
              glVertex2i(x,y);// posisi A
              glVertex2i(x+w,y-h);// posisi B
              glVertex2i(x,y-3*h);// posisi C
              glVertex2i(x-w,y-h);// posisi D

       glEnd();
}

void renderScene(void){
       glClear(GL_COLOR_BUFFER_BIT);
       glColor3f(1,1,0); //kuning
       layang(-200,130,90,90);
       glColor3f(0,0,1); //biru
       layang(-10,70,90,90);
       glColor3f(0,1,0); //hijau
       layang(200,130,90,90);
       glFlush();
}




int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA); // menentukan display mode awal (RGBA mode, single buffer, depth buffer)
	glutInitWindowPosition(100,100); // fungsi meletakkan posisi windows
	glutInitWindowSize(640,480); // fungsi membuat windows dengan ukuran sebesar 640 pixel x 480 pixel

	glutCreateWindow("Layang-Layang"); // fungsi membuat window dengan nama Pemrograman Glut
	glutDisplayFunc(renderScene); // melakukan rendering fungsi renderScene yang telah dibuat
	gluOrtho2D(-320.,320.,-240.,240.); // delklarasi ukuran sumbu x sebesar 320 satuan ke kiri, 320 satuan ke kanan, 240 satuan ke bawah dan 240 satuan ke atas
	glutMainLoop();
}
