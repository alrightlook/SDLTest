SDLApp:main.cc
	gcc -o SDLApp `pkg-config --cflags --libs sdl2` main.cc
clear:
	rm -fr *.o
	rm -fr SDLApp