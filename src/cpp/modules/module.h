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

#include "./Main.hpp";

#endif