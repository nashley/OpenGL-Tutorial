/*
	Example 1-1/2

	This is an unofficial port of the OpenGL tutorial to GLFW

	The original text and cooresponding code can be found here:
		http://www.glprogramming.com/red/chapter01.html#name2

	This particular program also borrows code from the GLFW "quick tutorial," which can be found here:
		http://www.glfw.org/docs/latest/quick.html
*/
#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>

static void error_callback(int error, const char* description){
	fputs(description, stderr);
}

static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GL_TRUE);
}

GLFWwindow* init(){

	GLFWwindow* window;

	glfwSetErrorCallback(error_callback);

	if (!glfwInit())
		exit(EXIT_FAILURE);

	window = glfwCreateWindow(640, 480, "01-1", NULL, NULL);
	if (!window){
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(window);
	glfwSetKeyCallback(window, key_callback);

	return window;
}

int run(GLFWwindow* window){
	
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glClear (GL_COLOR_BUFFER_BIT);
	glColor3f (1.0, 1.0, 1.0);
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);

	while(!glfwWindowShouldClose(window)){
		glBegin(GL_POLYGON);
			glVertex3f (0.25, 0.25, 0.0);
			glVertex3f (0.75, 0.25, 0.0);
			glVertex3f (0.75, 0.75, 0.0);
			glVertex3f (0.25, 0.75, 0.0);
		glEnd();
		glFlush();

		glfwSwapBuffers(window);
		glfwPollEvents();
	}
	glfwDestroyWindow(window);
	glfwTerminate();
	exit(EXIT_SUCCESS);
}

int main(){
	run(init());
}