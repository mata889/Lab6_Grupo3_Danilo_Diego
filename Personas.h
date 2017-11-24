#ifndef PERSONAS_H
#define PERSONAS_H
#include <iostream>
#include <string>
using namespace std;
class Personas{
private:
	string nombre;string genero;string cabello;string ojos;string piel;string fertil;
public:
	//Constructores
	Personas();
	Personas(string,string,string,string,string,string);
	//get
	string getNombre();
	string getGenero();
	string getCabello();
	string getOjos();
	string getPiel();
	string getFertil();
	//setC

	void setNombre(string);
	void setCabello(string);
	void setOjos(string);
	void setPiel(string);
	void setFertil(string);
	void setGenero(string);
	//delete
	~Personas();
	//operaciones sobrecargadas
	Personas operator+(Personas& P);
	Personas operator*(Personas& P);
};
#endif
