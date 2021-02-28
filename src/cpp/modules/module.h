#ifndef __moduels
#define __modules

#ifndef API_ENTRY


#ifdef __DLL

#define API_ENTRY __declspec(dllexport)

#elif 

#define API_ENTRY __declspec(dllimport)

#endif


#endif

namespace Flappy {

	class Main;

	namespace io {

		namespace packet {
			
			class Packet;

			class LoginPacket;

			class BirdInformationPacket;

			class PacketTranslator;

		}

	}

	namespace game {

		namespace sprite {

			class Sprite;

			class Pipe;

			class Bird;

			class Ground;

			class Cloud;
				
			template<typename T>
			class Vector2;
		}

		namespace ui {
			class Button;

			class Images;
		}

		namespace contents {

		}
	}
}

#include "./../imports/glew-2.1.0/include/GL/glew.h

#include "./../imports/SDL2-2.0.12/include/SDL.h"
#include "./../imports/SDL2-2.0.12/include/SDL_opengl.h"

#include "./Main.hpp";

#endif