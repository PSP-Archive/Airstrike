#include <assert.h>
#include "sprite_types.h"
#include "players.h"

#include "gp2x.h"

int player_ishuman[MAXPLAYERS] = {1,0};
int player_points[MAXPLAYERS] = {0,0};
sprite_t *player_sprite[MAXPLAYERS] = {0,0};
char *player_name[MAXPLAYERS] = {"Blue Baron","Red Baron"};
controller_t *player_controller[MAXPLAYERS] = {0,0};

#ifdef GP2X
int player_keymap[MAXPLAYERS][MAX_CONTROLLER_KEYS][2] = 
  {
    {{GP2X_BUTTON_R,SIGNAL_FIRE},
     {GP2X_BUTTON_LEFT,SIGNAL_UP},
     {GP2X_BUTTON_RIGHT,SIGNAL_DOWN},
     {GP2X_BUTTON_X,SIGNAL_ACCELERATE},
     {GP2X_BUTTON_B,SIGNAL_NUM0}},
    //     {GP2X_BUTTON_A,SIGNAL_MIS}},
    {{GP2X_BUTTON_R,SIGNAL_FIRE},
     {GP2X_BUTTON_LEFT,SIGNAL_UP},
     {GP2X_BUTTON_RIGHT,SIGNAL_DOWN},
     {GP2X_BUTTON_X,SIGNAL_ACCELERATE},
     {GP2X_BUTTON_B,SIGNAL_NUM0}}
     //    {GP2X_BUTTON_A,SIGNAL_MIS}},
  };
#endif

#ifdef LINUXPC
int player_keymap[MAXPLAYERS][MAX_CONTROLLER_KEYS][2] = 
  {
    {{SDLK_PERIOD,SIGNAL_FIRE},
     {SDLK_LEFT,SIGNAL_UP},
     {SDLK_RIGHT,SIGNAL_DOWN},
     {SDLK_COMMA,SIGNAL_ACCELERATE},
     {SDLK_SPACE,SIGNAL_NUM0}},
    {{SDLK_LSHIFT,SIGNAL_FIRE},
     {SDLK_d,SIGNAL_UP},
     {SDLK_f,SIGNAL_DOWN},
     {SDLK_LCTRL,SIGNAL_ACCELERATE},
     {SDLK_TAB,SIGNAL_NUM0}}
  };

#endif

#ifdef LINUXJOY
int player_keymap[MAXPLAYERS][MAX_CONTROLLER_KEYS][2] = 
  {
    {{1,SIGNAL_FIRE},
     {0,SIGNAL_UP},
     {3,SIGNAL_DOWN},
     {4,SIGNAL_ACCELERATE},
     {7,SIGNAL_NUM0}},
    {{SDLK_LSHIFT,SIGNAL_FIRE},
     {SDLK_d,SIGNAL_UP},
     {SDLK_f,SIGNAL_DOWN},
     {SDLK_LCTRL,SIGNAL_ACCELERATE},
     {SDLK_TAB,SIGNAL_NUM0}}
  };

#endif


sprite_type_t *player_sprite_type[MAXPLAYERS] = {0,0};
int player_startpos[MAXPLAYERS][2];

void player_setai(int player)
{
  assert((player >= 0) && (player < MAXPLAYERS));

  if (player_controller[player])
    player_controller[player]->destroy(player_controller[player]);

  player_controller[player] = ai_controller_create();
  sprite_aquire(player_sprite[player],&(player_controller[player]->target));

  player_ishuman[player] = 0;
}

void player_sethuman(int player)
{
  assert((player >= 0) && (player < MAXPLAYERS));

  if (player_controller[player])
    player_controller[player]->destroy(player_controller[player]);

  player_controller[player] = keyboard_controller_create(player);
  sprite_aquire(player_sprite[player],&(player_controller[player]->target));

  player_ishuman[player] = 1;
}

