#ifndef PERSONAS_H
#define PERSONAS_H
#include <iostream>
#include <string>
using namespace std;
class Personas{
private:
	string nombre;string genero;string cabello;string ojos;string piel;string fertil;
public:
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
	void setGenero(string);
	void setCabello(string);
	void setOjos(string);
	void setPiel(string);
	void setFertil(string);

	~Personas();
};
#endif
