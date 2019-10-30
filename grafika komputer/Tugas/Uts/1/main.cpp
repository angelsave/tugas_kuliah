#include <GL/glut.h>

main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitWindowPosition(100,100); //inisialisasi posisi linux program
    glutInitWindowSize(640,480);	//inisialisasi ukuran linux program dengan width 640 pixel dan height 480 pixel
    gluOrtho2D(-320.,320.,-240.,240.); //inisialisasi ukuran sumbu x dan y sebesar 320 satuan ke kiri, 320 satuan ke kanan, 240 satuan ke bawah dan 240 satuan ke atas
	glutCreateWindow("Pemrograman GLUT");
	glutMainLoop();
	}
