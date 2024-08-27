#include<iostream> 
#include <glad/glad.h>
#include <GLFW/glfw3.h>


using namespace std;

int main() {
	
	glfwInit();

	// Tell GLFW what version of OpenGlw we are using 3.3
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

	GLFWwindow* window = glfwCreateWindow(800,800,"Graficas por Computadora", NULL,NULL);

	if (!window){
		cout << "Failed to create GLFW window"<<endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	gladLoadGL();

	glViewport(0,0,800,800);
	glClearColor(.07f,.13f,.17f,1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(window);

	while(!glfwWindowShouldClose(window)){
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();

	return 0;
}