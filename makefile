lab6: MainCondones.o Personas.o
	g++ MainCondones.o Personas.o -o lab6

Main.o:	Personas.h MainCondones.cpp
	g++ -c MainCondones.cpp

Personas:	Personas.h Personas.cpp
	g++ -c Personas.cpp

clear:
	rm *.o run
