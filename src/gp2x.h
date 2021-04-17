#ifndef _GP2X_H_
#define _GP2X_H_

#include <SDL/SDL.h>

#ifdef GP2X

#define GP2X_BUTTON_UP              (8)
#define GP2X_BUTTON_DOWN            (6)
#define GP2X_BUTTON_LEFT            (7)
#define GP2X_BUTTON_RIGHT           (9)
//#define GP2X_BUTTON_UPLEFT          (1)
//#define GP2X_BUTTON_UPRIGHT         (7)
//#define GP2X_BUTTON_DOWNLEFT        (3)
//#define GP2X_BUTTON_DOWNRIGHT       (5)
//#define GP2X_BUTTON_CLICK           (18)
#define GP2X_BUTTON_A               (2)
#define GP2X_BUTTON_B               (1)
#define GP2X_BUTTON_Y               (3)
#define GP2X_BUTTON_X               (5)
#define GP2X_BUTTON_R               (0)
#define GP2X_BUTTON_L               (4)
#define GP2X_BUTTON_START           (11)
#define GP2X_BUTTON_SELECT          (10)
//#define GP2X_BUTTON_VOLUP           (16)
//#define GP2X_BUTTON_VOLDOWN         (17)

#endif

#ifdef LINUXPC


#endif


SDL_Joystick *joystick;
int joystickButtons;

#endif
