#ifndef __BUTTON
#define __BUTTON

#include "./../../module.h"

class Flappy::game::ui::Button : public Flappy::game::ui::MouseInteractive {
private:
	int zindex;

	Flappy::game::sprite::Sprite* buttonSprite;

public:
	API_ENTRY Button();

	API_ENTRY virtual void onMouseUp();
	API_ENTRY virtual void onMouseDown();
	API_ENTRY virtual void onMouseHover();
	API_ENTRY virtual void onMouseOut();
};


#endif