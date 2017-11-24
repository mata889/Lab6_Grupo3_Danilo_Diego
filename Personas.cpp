#include "Personas.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;


Personas::Personas(){
	this->nombre=" ";
	this->genero=" ";
	this->cabello=" ";
	this->ojos=" ";
	this->piel=" ";
	this->fertil=" ";
	srand(time(NULL));
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
	string Nombre, Genero, Cabello, Ojos, Piel, Fertil;
	cout<<"Ingrese un nombre para su abominacion"<<endl;
	cin>>Nombre;
	int r=rand()%1+1;
	//genero
	if (r==1) {
		Genero = "M";
	}else{
		Genero = "F";
	}
	//cabello

	//ojos
	if(this->ojos == "cafe" && P.getOjos() == "cafe"){
		int ro = rand()%100 + 1;
		if(ro <= 75){
			Ojos = "cafe";
		}else if(ro > 75 && ro < 93){
			Ojos = "verde";
		}else{
			Ojos = "azul";
		}
	}else if(this->ojos == "cafe" && P.getOjos() == "verde"){
		int ro = rand()%100 + 1;
		if(ro <= 50){
			Ojos = "cafe";
		}else if(ro > 50 && ro <= 87){
			Ojos = "verde";
		}else{
			Ojos = "azul";
		}
	}else if(this->ojos == "cafe" && P.getOjos() == "azul"){
		int ro = rand()%100 + 1;
		if(ro <= 50){
			Ojos = "cafe";
		}else{
			Ojos = "azul";
		}
	}

	//piel

	//Fertilidad

	Personas hijo;

	return hijo;
}
Personas Personas::operator*(Personas& P){
	Personas hijo;

	return hijo;
}
