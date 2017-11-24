#include "Personas.h"

Personas::Personas(){
	this->nombre=" ";
	this->genero=" ";
	this->cabello=" ";
	this->ojos=" ";
	this->piel=" ";
	this->fertil=" ";
}

Personas::Personas(string pNombre,string pGenero,string pCabello,string pOjos,string pPiel,string pFertil){
	nombre=pNombre;
	genero=pGenero;
	cabello=pCabello;
	ojos=pOjos;
	piel=pPiel;
	fertil=pFertil;
}

string Personas::getNombre(){
	return nombre;
}
string Personas::getGenero(){
	return genero;
}
string Personas::getCabello(){
	return genero;
}
string Personas::getOjos(){
	return ojos;
}
string Personas::getPiel(){
	return piel;
}
string Personas::getFertil(){
	return fertil;
}


void Personas::setNombre(string pNombre){
	nombre=pNombre;
}
void Personas::setGenero(string pGenero){
	genero=pGenero;
}
void Personas::setCabello(string pCabello){
	cabello=pCabello;
}
void Personas::setOjos(string pOjos){
	ojos=pOjos;
}
void Personas::setPiel(string pPiel){
	piel=pPiel;
}
void Personas::setFertil(string pFertil){
	fertil=pFertil;
}
Personas::~Personas(){
}
//operator
Personas Personas::operator+(Personas& P){
	Personas hijo;

	return hijo;
}
Personas Personas::operator*(Personas& P){
	Persona hijo;

	return hijo;
}
