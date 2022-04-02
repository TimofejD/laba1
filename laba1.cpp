
#include <iostream>
#include <gl/glew.h>
#include <gl/freeglut.h>
#include <glm/vec3.hpp>

GLuint VBO;

using namespace std;

void RenderSceneCB()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); //устанавливаем цвет
	glClear(GL_COLOR_BUFFER_BIT); //очистка буфера кадра
	
	glDrawArrays(GL_POINTS, 0, 1);
	glDisableVertexAttribArray(0);
	glutSwapBuffers(); // меняем фоновый буфер и буфер кадра местами
}

int main(int argc,char** argv)
{
	glutInit(&argc, argv); // инициализация окна

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); //установка режима отображения
	glutInitWindowSize(1024, 768); //задаем размер, позицию окна, даем название
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Tutorial 01");

	GLenum res = glewInit();
	if (res != GLEW_OK)
	{
		fprintf(stderr, "Error: '%s'\n", glewGetErrorString(res));
		return 1;
	}

	glm::vec3 Vertices[1];
	Vertices[0] = glm::vec3(0.0f, 0.0f, 0.0f);

	
	glGenBuffers(1, &VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertices), Vertices, GL_STATIC_DRAW);
	glEnableVertexAttribArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);


	glutDisplayFunc(RenderSceneCB); //работа в самой оконной системе
	glutMainLoop(); //зацикливаем и вызываем функцию отображения окна на экран
	
	return 0;
}
