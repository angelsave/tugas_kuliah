#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>

const double PI = 3.14;
int i;

//fungsi untuk membuat lingkaran
void lingkaran(int radius, int jumlah_titik, int x_tengah, int y_tengah) {
 glBegin(GL_POLYGON);

 //rumus untuk menempatkan vertex agar membentuk sebuah lingkaran
 for (i=0;i<=360;i++){
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+radius*cos(sudut);
        float y=y_tengah+radius*sin(sudut);
  glVertex2f(x,y);
 }
 glEnd();
}

void renderScene() {

 glColor3f(0, 1, 0);
 lingkaran(100,90,0,0);

 glFlush();
}


int main(int argc, char **argv){
		glutInit(&argc, argv);

		glutInitWindowPosition(100,100);
		glutInitWindowSize(500,500);

		glutCreateWindow("Lingkaran");
		gluOrtho2D(-205,350,-350,320);
		glutDisplayFunc(renderScene);
		glutMainLoop();
}
