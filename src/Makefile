
TARGET = airstrike_psp
OBJS = players.o config.o mech.o sprite_types/bonusmachine.o sprite_types/biplane.o sprite_types/zeppelin.o \
	sprite_types/blueplane.o sprite_types/parachute.o sprite_types/cloud.o sprite_types/energymeter.o sprite_types/missile.o \
	sprite_types/bomb.o sprite_types/smoke.o sprite_types/mark.o sprite_types/fire.o sprite_types/bouncer.o sprite_types/airballoon.o \
	sprite_types/hangar.o sprite_types/bird.o sprite_types/puff.o sprite_types/message.o sprite_types/explosions.o \
	sprite_types/bullet.o sprite_types/dust.o sprite_types/cannon.o sprite_types.o level.o airstrike.o winds.o support/console.o \
	support/names.o support/maths.o support/text.o control.o sprite/sdlutils.o sprite/animation.o sprite/sprite.o sprite/bitmask.o \
	sprite/global.o sprite/dirty.o sound.o


INCDIR = 
CFLAGS = -O2 -G0 -Wall -Isprite -I. -Isupport -DINLINE=inline -DGP2X -DUSE_SOUND
#-DUSE_SOUND
CXXFLAGS = $(CFLAGS) -fno-exceptions -fno-rtti
ASFLAGS = $(CFLAGS)

LIBDIR =
LDFLAGS =

LIBS=-lSDL_mixer -lSDL_image -lSDL -lSDL_mixer -lpspaudiolib -lpspaudio -lmikmod -logg -lvorbisidec -lpspgum -lpspgu -lpsphprm -lpng -ljpeg -lz -lc -lm -lgcc -lstdc++
#-lvorbis 

EXTRA_TARGETS = EBOOT.PBP
PSP_EBOOT_TITLE = AirStrike by Cpasjuste
PSP_EBOOT_ICON = airstrike.png

PSPSDK=$(shell psp-config --pspsdk-path)
include $(PSPSDK)/lib/build.mak
