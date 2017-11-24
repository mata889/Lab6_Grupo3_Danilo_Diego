#ifndef PERSONAS_H
#define PERSONAS_H
#include <iostream>
#include <string>
using namespace std;
class Personas{
private:
	string nombre;string genero;string cabello;string ojos;string piel;string fertil,genomaOjos,genomaPiel,genomaCabello;
public:
	//Constructores
	Personas();
	Personas(string,string,string,string,string,string,string,string,string);
	//get
	string getNombre();
	string getGenero();
	string getCabello();
	string getOjos();
	string getPiel();
	string getFertil();

	string getGenomaOjos();
	string getGenomaPiel();
	string getGenomaCabello();
	//setC

	void setNombre(string);
	void setCabello(string);
	void setOjos(string);
	void setPiel(string);
	void setFertil(string);
	void setGenero(string);

	void setGenomaOjos(string);
	void setGenomaPiel(string);
	void setGenomaCabello(string);
	//delete
	~Personas();
	//operaciones sobrecargadas
	Personas* operator+(Personas&);
	Personas* operator*(Personas&);
};
#endif
