#ifndef __Sprite
#define __Sprite
#include "./../../module.h"


class Flappy::game::sprite::Sprite {
private:


	GLuint vertexId;
public:
	API_ENTRY Sprite();
	API_ENTRY Sprite(int xSize, int ySize);


};


#endif