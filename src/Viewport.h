#ifndef VIEWPORT_H_
#define VIEWPORT_H_

#include <vector>
#include <fstream>
#include <sstream>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "Drawable.h"
#include "Camera.h"
#include "Molecule.h"

class Viewport{
private:
	Camera camera;
	GLFWwindow *window;
	int width, height;
	GLuint programID, VertexArrayID;
	Drawable test;
public:
	Viewport(Camera c, GLFWwindow *w, int wdth, int hght, GLuint shaders);

	void draw(Molecule &molecule);

	static GLuint loadShaders(const char* vertex_shader_filepath, const char* fragment_shader_filepath);
};

#endif