
#include <iostream>
#include <gl/freeglut.h>


using namespace std;

void RenderSceneCB()
{
	glClearColor(1.0f, 0.0f, 0.5f, 0.0f); //устанавливаем цвет
	glClear(GL_COLOR_BUFFER_BIT); //очистка буфера кадра
	glutSwapBuffers(); // меняем фоновый буфер и буфер кадра местами
}

int main(int argc,char** argv)
{
	glutInit(&argc, argv); // инициализация окна

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); //установка режима отображения
	glutInitWindowSize(1024, 768); //задаем размер, позицию окна, даем название
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Tutorial 01");

	glutDisplayFunc(RenderSceneCB); //работа в самой оконной системе
	glutMainLoop(); //зацикливаем и вызываем функцию отображения окна на экран

	asd
	return 0;
}
