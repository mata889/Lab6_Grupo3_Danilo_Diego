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
	this->genomaOjos=" ";
	this->genomaPiel=" ";
	this->genomaCabello=" ";
	srand(time(NULL));
}

Personas::Personas(string pNombre,string pGenero,string pCabello,string pOjos,string pPiel,string pFertil,string pGenomaOjos,string pGenomaPiel,string pGenomaCabello){
	nombre=pNombre;
	genero=pGenero;
	cabello=pCabello;
	ojos=pOjos;
	piel=pPiel;
	fertil=pFertil;
	genomaOjos=pGenomaOjos;
	genomaPiel=pGenomaPiel;
	genomaCabello=pGenomaCabello;
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
string Personas::getGenomaPiel(){
	return genomaPiel;
}
string Personas::getGenomaOjos(){
	return genomaOjos;
}
string Personas::getGenomaCabello(){
	return genomaCabello;
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
void Personas::setGenomaPiel(string pGenomaPiel){
	genomaPiel=pGenomaPiel;
}
void Personas::setGenomaOjos(string pGenomaOjos){
	genomaOjos=pGenomaOjos;
}
void Personas::setGenomaCabello(string pGenomaCabello){
	genomaCabello=pGenomaCabello;
}
Personas::~Personas(){
}
//operator
Personas Personas::operator+(Personas& P){
	string Nombre, Genero, Cabello, Ojos, Piel, Fertil, GenomaOjos,GenomaPiel,GenomaCabello;
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
			GenomaOjos = "AA";
		}else if(ro > 75 && ro < 93){
			Ojos = "verde";
			GenomaOjos = "aa";

		}else{
			Ojos = "azul";
			GenomaOjos = "aa";
		}
	}else if(this->ojos == "cafe" && P.getOjos() == "verde"){
		int ro = rand()%100 + 1;
		if(ro <= 50){
			Ojos = "cafe";
			GenomaOjos = "Aa";
		}else if(ro > 50 && ro <= 87){
			Ojos = "verde";
			GenomaOjos = "aa";
		}else{
			Ojos = "azul";
			GenomaOjos = "aa";
		}
	}else if(this->ojos == "cafe" && P.getOjos() == "azul"){
		int ro = rand()%100 + 1;
		if(ro <= 50){
			Ojos = "cafe";
			GenomaOjos = "Aa";
		}else{
			Ojos = "azul";
			GenomaOjos = "aa";
		}
	}else if(this->ojos == "verde" && P.getOjos() == "verde"){
		int ro = rand()%100 + 1;
		if(ro <= 75){
			Ojos = "verde";
			GenomaOjos = "aa";
		}else{
			Ojos = "azul";
			GenomaOjos = "aa";
		}
	}else if(this->ojos == "verde" && P.getOjos() == "azul"){
		int ro = rand()%100 + 1;
		if(ro <= 50){
			Ojos = "verde";
			GenomaOjos = "aa";
		}else{
			Ojos = "azul";
			GenomaOjos = "aa";
		}
	}else if(this->ojos == "azul" && P.getOjos() == "azul"){
		int ro = rand()%100+1;
		if(ro <= 99){
			Ojos = "azul";
			GenomaOjos = "aa";
		}else{
			Ojos = "verde";
			GenomaOjos = "aa";
		}
	}else if(this->ojos == "verde" && P.getOjos() == "cafe"){
		int ro = rand()%100+1;
		if(ro <= 50){
			Ojos = "cafe";
			GenomaOjos = "Aa";
		}else if(ro > 50 && ro <= 87){
			Ojos = "verde";
			GenomaOjos = "aa";
		}else{
			Ojos = "azul";
			GenomaOjos = "aa";
		}
	}else if(this->ojos == "azul" && P.getOjos() == "cafe"){
		int ro = rand()%100 + 1;
		if(ro <= 50){
			Ojos = "cafe";
			GenomaOjos = "Aa";
		}else{
			Ojos = "azul";
			GenomaOjos = "aa";
		}
	}else{
		int ro = rand()%100 + 1;
		if(ro <= 50){
			Ojos = "verde";
			GenomaOjos = "aa";
		}else{
			Ojos = "azul";
			GenomaOjos = "aa";
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
