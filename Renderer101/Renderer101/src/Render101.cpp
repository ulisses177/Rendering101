/*
######## Project by Claxxvii #########
This project is on the tutorial of The ChernoProject
you can see it on the link bellow
https://youtu.be/OR4fNpBjmq8
The porpouse of this project is actually making a simple 3d render and 
maybe in the future an actual 3d engine with some asyinc computing parts.
Here is hoping....
########################################
*/




#include <iostream>
#include <GL\glew.h>
#include <GLFW/glfw3.h>


int main(void)
{
	//std::cout << "RENDER PROGRAM" << std::endl;
	//std::cin.get();
	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit())
		return -1;


	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(640, 480, "Render101", NULL, NULL);

	

	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	//GLEW only works after we created a openGl context, in other words, after we create a window
	if (glewInit() != GLEW_OK)
		std::cout << "Error! Glew Not Ok" << std::endl;
	
	std::cout << glGetString(GL_VERSION) << std::endl;

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);
		
		glBegin(GL_TRIANGLES);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(0.0f, 0.5f);
		glVertex2f(0.5f, -0.5f);
		glEnd();

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;

}