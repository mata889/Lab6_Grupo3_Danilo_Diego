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
	return cabello;
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
Personas* Personas::operator+(Personas& P){
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
	if(this->cabello == "negro" && P.getCabello() == "negro"){
		string GP1 = this->genomaCabello;
		string GP2 = P.getGenomaCabello();
		//posibles genomas del hijo
		string GC1 = ""+GP1.at(0)+GP2.at(0);
		string GC2 = ""+GP1.at(0)+GP2.at(1);
		string GC3 = ""+GP1.at(1)+GP2.at(0);
		string GC4 = ""+GP1.at(1)+GP2.at(1);

		string GCH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GCH = GC1;
		}else if(ro == 2){
			GCH = GC2;
		}else if(ro == 3){
			GCH = GC3;
		}else{
			GCH = GC4;
		}
		Cabello = "negro";
	}else if(this->cabello == "negro" && P.getCabello() == "rubio"){
		string GP1 = this->genomaCabello;
		string GP2 = P.getGenomaCabello();
		//posibles genomas del hijo
		string GC1 = ""+GP1.at(0)+GP2.at(0);
		string GC2 = ""+GP1.at(0)+GP2.at(1);
		string GC3 = ""+GP1.at(1)+GP2.at(0);
		string GC4 = ""+GP1.at(1)+GP2.at(1);

		string GCH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GCH = GC1;
		}else if(ro == 2){
			GCH = GC2;
		}else if(ro == 3){
			GCH = GC3;
		}else{
			GCH = GC4;
		}
		if(GCH.at(0) == 'A' || GCH.at(1) == 'A'){
			Cabello = "negro";
		}else{
			Cabello = "rubio";
		}
	}else if(this->cabello == "negro" && P.getCabello() == "pelirojo"){
		string GP1 = this->genomaCabello;
		string GP2 = P.getGenomaCabello();
		//posibles genomas del hijo
		string GC1 = ""+GP1.at(0)+GP2.at(0);
		string GC2 = ""+GP1.at(0)+GP2.at(1);
		string GC3 = ""+GP1.at(1)+GP2.at(0);
		string GC4 = ""+GP1.at(1)+GP2.at(1);

		string GCH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GCH = GC1;
		}else if(ro == 2){
			GCH = GC2;
		}else if(ro == 3){
			GCH = GC3;
		}else{
			GCH = GC4;
		}
		if(GCH.at(0) == 'A' || GCH.at(1) == 'A'){
			Cabello = "negro";
		}else{
			Cabello = "pelirojo";
		}
	}else if(this->cabello == "pelirojo" && P.getCabello() == "rubio"){
		string GP1 = this->genomaCabello;
		string GP2 = P.getGenomaCabello();
		//posibles genomas del hijo
		string GC1 = ""+GP1.at(0)+GP2.at(0);
		string GC2 = ""+GP1.at(0)+GP2.at(1);
		string GC3 = ""+GP1.at(1)+GP2.at(0);
		string GC4 = ""+GP1.at(1)+GP2.at(1);

		string GCH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GCH = GC1;
		}else if(ro == 2){
			GCH = GC2;
		}else if(ro == 3){
			GCH = GC3;
		}else{
			GCH = GC4;
		}
		if(GCH.at(0) == 'A' || GCH.at(1) == 'A'){
			Cabello = "rubio";
		}else{
			Cabello = "pelirojo";
		}
	}else if(this->cabello == "pelirojo" && P.getCabello() == "pelirojo"){
		string GP1 = this->genomaCabello;
		string GP2 = P.getGenomaCabello();
		//posibles genomas del hijo
		string GC1 = ""+GP1.at(0)+GP2.at(0);
		string GC2 = ""+GP1.at(0)+GP2.at(1);
		string GC3 = ""+GP1.at(1)+GP2.at(0);
		string GC4 = ""+GP1.at(1)+GP2.at(1);

		string GCH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GCH = GC1;
		}else if(ro == 2){
			GCH = GC2;
		}else if(ro == 3){
			GCH = GC3;
		}else{
			GCH = GC4;
		}
		if(GCH.at(0) == 'A' || GCH.at(1) == 'A'){
			Cabello = "rubio";
		}else{
			Cabello = "pelirojo";
		}
	}else if(this->cabello == "pelirojo" && P.getCabello() == "negro"){
		string GP1 = this->genomaCabello;
		string GP2 = P.getGenomaCabello();
		//posibles genomas del hijo
		string GC1 = ""+GP1.at(0)+GP2.at(0);
		string GC2 = ""+GP1.at(0)+GP2.at(1);
		string GC3 = ""+GP1.at(1)+GP2.at(0);
		string GC4 = ""+GP1.at(1)+GP2.at(1);

		string GCH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GCH = GC1;
		}else if(ro == 2){
			GCH = GC2;
		}else if(ro == 3){
			GCH = GC3;
		}else{
			GCH = GC4;
		}
		if(GCH.at(0) == 'A' || GCH.at(1) == 'A'){
			Cabello = "negro";
		}else{
			Cabello = "pelirojo";
		}
	}else if(this->cabello == "rubio" && P.getCabello() == "rubio"){
		string GP1 = this->genomaCabello;
		string GP2 = P.getGenomaCabello();
		//posibles genomas del hijo
		string GC1 = ""+GP1.at(0)+GP2.at(0);
		string GC2 = ""+GP1.at(0)+GP2.at(1);
		string GC3 = ""+GP1.at(1)+GP2.at(0);
		string GC4 = ""+GP1.at(1)+GP2.at(1);

		string GCH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GCH = GC1;
		}else if(ro == 2){
			GCH = GC2;
		}else if(ro == 3){
			GCH = GC3;
		}else{
			GCH = GC4;
		}
		if(GCH.at(0) == 'A' || GCH.at(1) == 'A'){
			Cabello = "rubio";
		}else{
			Cabello = "rubio";
		}
	}else if(this->cabello == "rubio" && P.getCabello() == "pelirojo"){
		string GP1 = this->genomaCabello;
		string GP2 = P.getGenomaCabello();
		//posibles genomas del hijo
		string GC1 = ""+GP1.at(0)+GP2.at(0);
		string GC2 = ""+GP1.at(0)+GP2.at(1);
		string GC3 = ""+GP1.at(1)+GP2.at(0);
		string GC4 = ""+GP1.at(1)+GP2.at(1);

		string GCH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GCH = GC1;
		}else if(ro == 2){
			GCH = GC2;
		}else if(ro == 3){
			GCH = GC3;
		}else{
			GCH = GC4;
		}
		if(GCH.at(0) == 'A' || GCH.at(1) == 'A'){
			Cabello = "pelirojo";
		}else{
			Cabello = "rubio";
		}
	}else{
		string GP1 = this->genomaCabello;
		string GP2 = P.getGenomaCabello();
		//posibles genomas del hijo
		string GC1 = ""+GP1.at(0)+GP2.at(0);
		string GC2 = ""+GP1.at(0)+GP2.at(1);
		string GC3 = ""+GP1.at(1)+GP2.at(0);
		string GC4 = ""+GP1.at(1)+GP2.at(1);

		string GCH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GCH = GC1;
		}else if(ro == 2){
			GCH = GC2;
		}else if(ro == 3){
			GCH = GC3;
		}else{
			GCH = GC4;
		}
		if(GCH.at(0) == 'A' || GCH.at(1) == 'A'){
			Cabello = "negro";
		}else{
			Cabello = "rubio";
		}
	}
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
	if(this->piel ==  "Negro" && P.getPiel()=="Negro"){
		string GP1 = this->genomaPiel;
		string GP2 = P.getGenomaPiel();
		//posibles genomas del hijo
		string GH1 = ""+GP1.at(0)+GP2.at(0);
		string GH2 = ""+GP1.at(0)+GP2.at(1);
		string GH3 = ""+GP1.at(1)+GP2.at(0);
		string GH4 = ""+GP1.at(1)+GP2.at(1);

		string GPH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GPH = GH1;
		}else if(ro == 2){
			GPH = GH2;
		}else if(ro == 3){
			GPH = GH3;
		}else{
			GPH = GH4;
		}
		Piel = "negro";
	}else if(this->piel == "negro" && P.getPiel() == "trigueno"){
		string GP1 = this->genomaPiel;
		string GP2 = P.getGenomaPiel();
		//posibles genomas del hijo
		string GH1 = ""+GP1.at(0)+GP2.at(0);
		string GH2 = ""+GP1.at(0)+GP2.at(1);
		string GH3 = ""+GP1.at(1)+GP2.at(0);
		string GH4 = ""+GP1.at(1)+GP2.at(1);

		string GPH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GPH = GH1;
		}else if(ro == 2){
			GPH = GH2;
		}else if(ro == 3){
			GPH = GH3;
		}else{
			GPH = GH4;
		}
		if(GPH.at(0) == 'A' || GPH.at(1) == 'A'){
			Piel = "negro";
		}else{
			Piel = "trigueno";
		}
	}else if(this->piel == "negro" && P.getGenomaPiel() == "blanco"){
		string GP1 = this->genomaPiel;
		string GP2 = P.getGenomaPiel();
		//posibles genomas del hijo
		string GH1 = ""+GP1.at(0)+GP2.at(0);
		string GH2 = ""+GP1.at(0)+GP2.at(1);
		string GH3 = ""+GP1.at(1)+GP2.at(0);
		string GH4 = ""+GP1.at(1)+GP2.at(1);

		string GPH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GPH = GH1;
		}else if(ro == 2){
			GPH = GH2;
		}else if(ro == 3){
			GPH = GH3;
		}else{
			GPH = GH4;
		}
		if(GPH.at(0) == 'A' || GPH.at(1) == 'A'){
			Piel = "blanco";
		}else{
			Piel = "negro";
		}
	}else if(this->piel == "trigueno" && P.getPiel() == "trigueno"){
		string GP1 = this->genomaPiel;
		string GP2 = P.getGenomaPiel();
		//posibles genomas del hijo
		string GH1 = ""+GP1.at(0)+GP2.at(0);
		string GH2 = ""+GP1.at(0)+GP2.at(1);
		string GH3 = ""+GP1.at(1)+GP2.at(0);
		string GH4 = ""+GP1.at(1)+GP2.at(1);

		string GPH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GPH = GH1;
		}else if(ro == 2){
			GPH = GH2;
		}else if(ro == 3){
			GPH = GH3;
		}else{
			GPH = GH4;
		}
		if(GPH.at(0) == 'A' || GPH.at(1) == 'A'){
			Piel = "trigueno";
		}else{
			Piel = "trigueno";
		}
	}else if(this->piel == "trigueno" && P.getPiel()=="negro"){
		string GP1 = this->genomaPiel;
		string GP2 = P.getGenomaPiel();
		//posibles genomas del hijo
		string GH1 = ""+GP1.at(0)+GP2.at(0);
		string GH2 = ""+GP1.at(0)+GP2.at(1);
		string GH3 = ""+GP1.at(1)+GP2.at(0);
		string GH4 = ""+GP1.at(1)+GP2.at(1);

		string GPH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GPH = GH1;
		}else if(ro == 2){
			GPH = GH2;
		}else if(ro == 3){
			GPH = GH3;
		}else{
			GPH = GH4;
		}
		if(GPH.at(0) == 'A' || GPH.at(1) == 'A'){
			Piel = "trigurno";
		}else{
			Piel = "negro";
		}
	}else if(this->piel == "trigueno" && P.getPiel()=="blanco"){
		string GP1 = this->genomaPiel;
		string GP2 = P.getGenomaPiel();
		//posibles genomas del hijo
		string GH1 = ""+GP1.at(0)+GP2.at(0);
		string GH2 = ""+GP1.at(0)+GP2.at(1);
		string GH3 = ""+GP1.at(1)+GP2.at(0);
		string GH4 = ""+GP1.at(1)+GP2.at(1);

		string GPH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GPH = GH1;
		}else if(ro == 2){
			GPH = GH2;
		}else if(ro == 3){
			GPH = GH3;
		}else{
			GPH = GH4;
		}
		if(GPH.at(0) == 'A' || GPH.at(1) == 'A'){
			Piel = "blanco";
		}else{
			Piel = "trigueno";
		}
	}else if(this->piel == "blanco" && P.getPiel() == "blanco"){
		string GP1 = this->genomaPiel;
		string GP2 = P.getGenomaPiel();
		//posibles genomas del hijo
		string GH1 = ""+GP1.at(0)+GP2.at(0);
		string GH2 = ""+GP1.at(0)+GP2.at(1);
		string GH3 = ""+GP1.at(1)+GP2.at(0);
		string GH4 = ""+GP1.at(1)+GP2.at(1);

		string GPH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GPH = GH1;
		}else if(ro == 2){
			GPH = GH2;
		}else if(ro == 3){
			GPH = GH3;
		}else{
			GPH = GH4;
		}
		if(GPH.at(0) == 'A' || GPH.at(1) == 'A'){
			Piel = "blanco";
		}else{
			Piel = "trigueno";
		}
	}else if(this->piel == "blanco" && P.getPiel() == "negro"){
		string GP1 = this->genomaPiel;
		string GP2 = P.getGenomaPiel();
		//posibles genomas del hijo
		string GH1 = ""+GP1.at(0)+GP2.at(0);
		string GH2 = ""+GP1.at(0)+GP2.at(1);
		string GH3 = ""+GP1.at(1)+GP2.at(0);
		string GH4 = ""+GP1.at(1)+GP2.at(1);

		string GPH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GPH = GH1;
		}else if(ro == 2){
			GPH = GH2;
		}else if(ro == 3){
			GPH = GH3;
		}else{
			GPH = GH4;
		}
		if(GPH.at(0) == 'A' || GPH.at(1) == 'A'){
			Piel = "blanco";
		}else{
			Piel = "negro";
		}
	}else{
		string GP1 = this->genomaPiel;
		string GP2 = P.getGenomaPiel();
		//posibles genomas del hijo
		string GH1 = ""+GP1.at(0)+GP2.at(0);
		string GH2 = ""+GP1.at(0)+GP2.at(1);
		string GH3 = ""+GP1.at(1)+GP2.at(0);
		string GH4 = ""+GP1.at(1)+GP2.at(1);

		string GPH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GPH = GH1;
		}else if(ro == 2){
			GPH = GH2;
		}else if(ro == 3){
			GPH = GH3;
		}else{
			GPH = GH4;
		}
		if(GPH.at(0) == 'A' || GPH.at(1) == 'A'){
			Piel = "blanco";
		}else{
			Piel = "trigueno";
		}
	}

	//Fertilidad
	Fertil = "si";
	Personas* hijo = new Personas(Nombre, Genero, Cabello, Ojos, Piel, Fertil, GenomaOjos,GenomaPiel,GenomaCabello);
	return hijo;
}
Personas* Personas::operator*(Personas& P){
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
	if(this->cabello == "negro" && P.getCabello() == "negro"){
		string GP1 = this->genomaCabello;
		string GP2 = P.getGenomaCabello();
		//posibles genomas del hijo
		string GC1 = ""+GP1.at(0)+GP2.at(0);
		string GC2 = ""+GP1.at(0)+GP2.at(1);
		string GC3 = ""+GP1.at(1)+GP2.at(0);
		string GC4 = ""+GP1.at(1)+GP2.at(1);

		string GCH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GCH = GC1;
		}else if(ro == 2){
			GCH = GC2;
		}else if(ro == 3){
			GCH = GC3;
		}else{
			GCH = GC4;
		}
		Cabello = "negro";
	}else if(this->cabello == "negro" && P.getCabello() == "rubio"){
		string GP1 = this->genomaCabello;
		string GP2 = P.getGenomaCabello();
		//posibles genomas del hijo
		string GC1 = ""+GP1.at(0)+GP2.at(0);
		string GC2 = ""+GP1.at(0)+GP2.at(1);
		string GC3 = ""+GP1.at(1)+GP2.at(0);
		string GC4 = ""+GP1.at(1)+GP2.at(1);

		string GCH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GCH = GC1;
		}else if(ro == 2){
			GCH = GC2;
		}else if(ro == 3){
			GCH = GC3;
		}else{
			GCH = GC4;
		}
		if(GCH.at(0) == 'A' || GCH.at(1) == 'A'){
			Cabello = "negro";
		}else{
			Cabello = "rubio";
		}
	}else if(this->cabello == "negro" && P.getCabello() == "pelirojo"){
		string GP1 = this->genomaCabello;
		string GP2 = P.getGenomaCabello();
		//posibles genomas del hijo
		string GC1 = ""+GP1.at(0)+GP2.at(0);
		string GC2 = ""+GP1.at(0)+GP2.at(1);
		string GC3 = ""+GP1.at(1)+GP2.at(0);
		string GC4 = ""+GP1.at(1)+GP2.at(1);

		string GCH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GCH = GC1;
		}else if(ro == 2){
			GCH = GC2;
		}else if(ro == 3){
			GCH = GC3;
		}else{
			GCH = GC4;
		}
		if(GCH.at(0) == 'A' || GCH.at(1) == 'A'){
			Cabello = "negro";
		}else{
			Cabello = "pelirojo";
		}
	}else if(this->cabello == "pelirojo" && P.getCabello() == "rubio"){
		string GP1 = this->genomaCabello;
		string GP2 = P.getGenomaCabello();
		//posibles genomas del hijo
		string GC1 = ""+GP1.at(0)+GP2.at(0);
		string GC2 = ""+GP1.at(0)+GP2.at(1);
		string GC3 = ""+GP1.at(1)+GP2.at(0);
		string GC4 = ""+GP1.at(1)+GP2.at(1);

		string GCH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GCH = GC1;
		}else if(ro == 2){
			GCH = GC2;
		}else if(ro == 3){
			GCH = GC3;
		}else{
			GCH = GC4;
		}
		if(GCH.at(0) == 'A' || GCH.at(1) == 'A'){
			Cabello = "rubio";
		}else{
			Cabello = "pelirojo";
		}
	}else if(this->cabello == "pelirojo" && P.getCabello() == "pelirojo"){
		string GP1 = this->genomaCabello;
		string GP2 = P.getGenomaCabello();
		//posibles genomas del hijo
		string GC1 = ""+GP1.at(0)+GP2.at(0);
		string GC2 = ""+GP1.at(0)+GP2.at(1);
		string GC3 = ""+GP1.at(1)+GP2.at(0);
		string GC4 = ""+GP1.at(1)+GP2.at(1);

		string GCH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GCH = GC1;
		}else if(ro == 2){
			GCH = GC2;
		}else if(ro == 3){
			GCH = GC3;
		}else{
			GCH = GC4;
		}
		if(GCH.at(0) == 'A' || GCH.at(1) == 'A'){
			Cabello = "rubio";
		}else{
			Cabello = "pelirojo";
		}
	}else if(this->cabello == "pelirojo" && P.getCabello() == "negro"){
		string GP1 = this->genomaCabello;
		string GP2 = P.getGenomaCabello();
		//posibles genomas del hijo
		string GC1 = ""+GP1.at(0)+GP2.at(0);
		string GC2 = ""+GP1.at(0)+GP2.at(1);
		string GC3 = ""+GP1.at(1)+GP2.at(0);
		string GC4 = ""+GP1.at(1)+GP2.at(1);

		string GCH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GCH = GC1;
		}else if(ro == 2){
			GCH = GC2;
		}else if(ro == 3){
			GCH = GC3;
		}else{
			GCH = GC4;
		}
		if(GCH.at(0) == 'A' || GCH.at(1) == 'A'){
			Cabello = "negro";
		}else{
			Cabello = "pelirojo";
		}
	}else if(this->cabello == "rubio" && P.getCabello() == "rubio"){
		string GP1 = this->genomaCabello;
		string GP2 = P.getGenomaCabello();
		//posibles genomas del hijo
		string GC1 = ""+GP1.at(0)+GP2.at(0);
		string GC2 = ""+GP1.at(0)+GP2.at(1);
		string GC3 = ""+GP1.at(1)+GP2.at(0);
		string GC4 = ""+GP1.at(1)+GP2.at(1);

		string GCH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GCH = GC1;
		}else if(ro == 2){
			GCH = GC2;
		}else if(ro == 3){
			GCH = GC3;
		}else{
			GCH = GC4;
		}
		if(GCH.at(0) == 'A' || GCH.at(1) == 'A'){
			Cabello = "rubio";
		}else{
			Cabello = "rubio";
		}
	}else if(this->cabello == "rubio" && P.getCabello() == "pelirojo"){
		string GP1 = this->genomaCabello;
		string GP2 = P.getGenomaCabello();
		//posibles genomas del hijo
		string GC1 = ""+GP1.at(0)+GP2.at(0);
		string GC2 = ""+GP1.at(0)+GP2.at(1);
		string GC3 = ""+GP1.at(1)+GP2.at(0);
		string GC4 = ""+GP1.at(1)+GP2.at(1);

		string GCH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GCH = GC1;
		}else if(ro == 2){
			GCH = GC2;
		}else if(ro == 3){
			GCH = GC3;
		}else{
			GCH = GC4;
		}
		if(GCH.at(0) == 'A' || GCH.at(1) == 'A'){
			Cabello = "pelirojo";
		}else{
			Cabello = "rubio";
		}
	}else{
		string GP1 = this->genomaCabello;
		string GP2 = P.getGenomaCabello();
		//posibles genomas del hijo
		string GC1 = ""+GP1.at(0)+GP2.at(0);
		string GC2 = ""+GP1.at(0)+GP2.at(1);
		string GC3 = ""+GP1.at(1)+GP2.at(0);
		string GC4 = ""+GP1.at(1)+GP2.at(1);

		string GCH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GCH = GC1;
		}else if(ro == 2){
			GCH = GC2;
		}else if(ro == 3){
			GCH = GC3;
		}else{
			GCH = GC4;
		}
		if(GCH.at(0) == 'A' || GCH.at(1) == 'A'){
			Cabello = "negro";
		}else{
			Cabello = "rubio";
		}
	}
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
	if(this->piel ==  "Negro" && P.getPiel()=="Negro"){
		string GP1 = this->genomaPiel;
		string GP2 = P.getGenomaPiel();
		//posibles genomas del hijo
		string GH1 = ""+GP1.at(0)+GP2.at(0);
		string GH2 = ""+GP1.at(0)+GP2.at(1);
		string GH3 = ""+GP1.at(1)+GP2.at(0);
		string GH4 = ""+GP1.at(1)+GP2.at(1);

		string GPH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GPH = GH1;
		}else if(ro == 2){
			GPH = GH2;
		}else if(ro == 3){
			GPH = GH3;
		}else{
			GPH = GH4;
		}
		Piel = "negro";
	}else if(this->piel == "negro" && P.getPiel() == "trigueno"){
		string GP1 = this->genomaPiel;
		string GP2 = P.getGenomaPiel();
		//posibles genomas del hijo
		string GH1 = ""+GP1.at(0)+GP2.at(0);
		string GH2 = ""+GP1.at(0)+GP2.at(1);
		string GH3 = ""+GP1.at(1)+GP2.at(0);
		string GH4 = ""+GP1.at(1)+GP2.at(1);

		string GPH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GPH = GH1;
		}else if(ro == 2){
			GPH = GH2;
		}else if(ro == 3){
			GPH = GH3;
		}else{
			GPH = GH4;
		}
		if(GPH.at(0) == 'A' || GPH.at(1) == 'A'){
			Piel = "negro";
		}else{
			Piel = "trigueno";
		}
	}else if(this->piel == "negro" && P.getGenomaPiel() == "blanco"){
		string GP1 = this->genomaPiel;
		string GP2 = P.getGenomaPiel();
		//posibles genomas del hijo
		string GH1 = ""+GP1.at(0)+GP2.at(0);
		string GH2 = ""+GP1.at(0)+GP2.at(1);
		string GH3 = ""+GP1.at(1)+GP2.at(0);
		string GH4 = ""+GP1.at(1)+GP2.at(1);

		string GPH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GPH = GH1;
		}else if(ro == 2){
			GPH = GH2;
		}else if(ro == 3){
			GPH = GH3;
		}else{
			GPH = GH4;
		}
		if(GPH.at(0) == 'A' || GPH.at(1) == 'A'){
			Piel = "blanco";
		}else{
			Piel = "negro";
		}
	}else if(this->piel == "trigueno" && P.getPiel() == "trigueno"){
		string GP1 = this->genomaPiel;
		string GP2 = P.getGenomaPiel();
		//posibles genomas del hijo
		string GH1 = ""+GP1.at(0)+GP2.at(0);
		string GH2 = ""+GP1.at(0)+GP2.at(1);
		string GH3 = ""+GP1.at(1)+GP2.at(0);
		string GH4 = ""+GP1.at(1)+GP2.at(1);

		string GPH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GPH = GH1;
		}else if(ro == 2){
			GPH = GH2;
		}else if(ro == 3){
			GPH = GH3;
		}else{
			GPH = GH4;
		}
		if(GPH.at(0) == 'A' || GPH.at(1) == 'A'){
			Piel = "trigueno";
		}else{
			Piel = "trigueno";
		}
	}else if(this->piel == "trigueno" && P.getPiel()=="negro"){
		string GP1 = this->genomaPiel;
		string GP2 = P.getGenomaPiel();
		//posibles genomas del hijo
		string GH1 = ""+GP1.at(0)+GP2.at(0);
		string GH2 = ""+GP1.at(0)+GP2.at(1);
		string GH3 = ""+GP1.at(1)+GP2.at(0);
		string GH4 = ""+GP1.at(1)+GP2.at(1);

		string GPH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GPH = GH1;
		}else if(ro == 2){
			GPH = GH2;
		}else if(ro == 3){
			GPH = GH3;
		}else{
			GPH = GH4;
		}
		if(GPH.at(0) == 'A' || GPH.at(1) == 'A'){
			Piel = "trigurno";
		}else{
			Piel = "negro";
		}
	}else if(this->piel == "trigueno" && P.getPiel()=="blanco"){
		string GP1 = this->genomaPiel;
		string GP2 = P.getGenomaPiel();
		//posibles genomas del hijo
		string GH1 = ""+GP1.at(0)+GP2.at(0);
		string GH2 = ""+GP1.at(0)+GP2.at(1);
		string GH3 = ""+GP1.at(1)+GP2.at(0);
		string GH4 = ""+GP1.at(1)+GP2.at(1);

		string GPH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GPH = GH1;
		}else if(ro == 2){
			GPH = GH2;
		}else if(ro == 3){
			GPH = GH3;
		}else{
			GPH = GH4;
		}
		if(GPH.at(0) == 'A' || GPH.at(1) == 'A'){
			Piel = "blanco";
		}else{
			Piel = "trigueno";
		}
	}else if(this->piel == "blanco" && P.getPiel() == "blanco"){
		string GP1 = this->genomaPiel;
		string GP2 = P.getGenomaPiel();
		//posibles genomas del hijo
		string GH1 = ""+GP1.at(0)+GP2.at(0);
		string GH2 = ""+GP1.at(0)+GP2.at(1);
		string GH3 = ""+GP1.at(1)+GP2.at(0);
		string GH4 = ""+GP1.at(1)+GP2.at(1);

		string GPH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GPH = GH1;
		}else if(ro == 2){
			GPH = GH2;
		}else if(ro == 3){
			GPH = GH3;
		}else{
			GPH = GH4;
		}
		if(GPH.at(0) == 'A' || GPH.at(1) == 'A'){
			Piel = "blanco";
		}else{
			Piel = "trigueno";
		}
	}else if(this->piel == "blanco" && P.getPiel() == "negro"){
		string GP1 = this->genomaPiel;
		string GP2 = P.getGenomaPiel();
		//posibles genomas del hijo
		string GH1 = ""+GP1.at(0)+GP2.at(0);
		string GH2 = ""+GP1.at(0)+GP2.at(1);
		string GH3 = ""+GP1.at(1)+GP2.at(0);
		string GH4 = ""+GP1.at(1)+GP2.at(1);

		string GPH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GPH = GH1;
		}else if(ro == 2){
			GPH = GH2;
		}else if(ro == 3){
			GPH = GH3;
		}else{
			GPH = GH4;
		}
		if(GPH.at(0) == 'A' || GPH.at(1) == 'A'){
			Piel = "blanco";
		}else{
			Piel = "negro";
		}
	}else{
		string GP1 = this->genomaPiel;
		string GP2 = P.getGenomaPiel();
		//posibles genomas del hijo
		string GH1 = ""+GP1.at(0)+GP2.at(0);
		string GH2 = ""+GP1.at(0)+GP2.at(1);
		string GH3 = ""+GP1.at(1)+GP2.at(0);
		string GH4 = ""+GP1.at(1)+GP2.at(1);

		string GPH = "";
		int ro = rand()%4+1;
		if(ro == 1){
			GPH = GH1;
		}else if(ro == 2){
			GPH = GH2;
		}else if(ro == 3){
			GPH = GH3;
		}else{
			GPH = GH4;
		}
		if(GPH.at(0) == 'A' || GPH.at(1) == 'A'){
			Piel = "blanco";
		}else{
			Piel = "trigueno";
		}
	}

	//Fertilidad
	Fertil = "si";
	Personas* hijo = new Personas(Nombre, Genero, Cabello, Ojos, Piel, Fertil, GenomaOjos,GenomaPiel,GenomaCabello);
	return hijo;
}
