#ifndef __Sprite
#define __Sprite

#include "./../../module.h"


class Flappy::game::sprite::Sprite {
private:

	float xSize;
	float ySize;

	float xPos;
	float yPos;

	float angle;

	GLuint vertexId;
	GLuint shaderid;

	Flappy::io::Buffer<float> vertexPositionData;

private:
	API_ENTRY void init(float xSize, float ySize, float xPos, float yPos);
public:
	API_ENTRY Sprite ();
	API_ENTRY Sprite (float xSize, float ySize);
	API_ENTRY Sprite (float xSize, float ySize, float xPos, float yPos);


	API_ENTRY Sprite(int size, float* bufferData);
	API_ENTRY Sprite(Flappy::io::Buffer<GLfloat> buffer);



};


#endif