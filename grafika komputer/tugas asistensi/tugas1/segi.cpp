#include <stdlib.h>
#include <GL/glut.h>


void segiempat (int posx,int posy,int w,int h){
	glBegin(GL_QUAD_STRIP);
		glVertex2i(posx,posy);
		glVertex2i(posx+(w/2),posy-(h/2));
		glVertex2i(posx-(w/2),posy-(h/2));
		glVertex2i(posx,posy-h);
		glEnd();
}

void renderScene(void){
	glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(1,1,0);//kuning
		segiempat (80,-50,150,-150);
		glColor3f(0,0,1);//biru
		segiempat (-80,-50,150,-150);
		glColor3f(0,1,1);
		segiempat (0,-10,150,150);
		glFlush();

	}


int main (int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA); // menentukan display mode awal (RGBA mode, single buffer, depth buffer)
	glutInitWindowPosition(100,100); // fungsi meletakkan posisi windows
	glutInitWindowSize(480,480); // fungsi membuat windows dengan ukuran sebesar 640 pixel x 480 pixel

	glutCreateWindow("SEGIEMPAT"); // fungsi membuat window dengan nama Pemrograman Glut
	glutDisplayFunc(renderScene); // melakukan rendering fungsi renderScene yang telah dibuat
	gluOrtho2D(-320.,320.,-240.,240.); // delklarasi ukuran sumbu x sebesar 320 satuan ke kiri, 320 satuan ke kanan, 240 satuan ke bawah dan 240 satuan ke atas
	glutMainLoop();
}
