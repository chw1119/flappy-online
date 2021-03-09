#ifndef __MOUSE_INTERATIVE
#define __MOUSE_INTERATIVE

#include "./../../module.h"

class Flappy::game::ui::MouseInteractive {
public:
	virtual void onMouseUp()    = 0;
	virtual void onMouseDown()  = 0;
	virtual void onMouseHover() = 0;
	virtual void onMouseOut()   = 0;
};

#endif