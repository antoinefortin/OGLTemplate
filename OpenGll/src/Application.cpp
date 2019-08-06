#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm.hpp>
#include <vec2.hpp>
#include <vec3.hpp>
#include <vec4.hpp>
#include <mat4x4.hpp>
#include <gtc/matrix_transform.hpp>
#include <gtc/type_ptr.hpp>

#include <SOIL2.h>

#include <iostream>



int main()
{
	glewInit();


	// Create window
	const int WINDOW_WIDTH = 640;
	const int WINDOW_HEIGHT = 480;
	int frameBufferWidth = 0;
	int frameBufferHeight= 0;

	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

	GLFWwindow* window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "HELLO OpenGL",NULL, NULL );

	glfwGetFramebufferSize(window, &frameBufferWidth, &frameBufferHeight);
	glViewport(0,0, frameBufferWidth, frameBufferHeight);

	glfwMakeContextCurrent(window); // important


	while (1)
	{
	
	
	}
	return 0;

}