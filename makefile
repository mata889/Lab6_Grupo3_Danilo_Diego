lab6: MainCondones.o Personas.o
	g++ MainCondones.o Persona.o -0 lab6

Main.o:	Personas.h MainCondones.cpp
	g++ -c MainCondones.cpp

Personas:	Personas.h Personas.cpp
	g++ -c Personas.cpp

clear:
	rm *.o run
