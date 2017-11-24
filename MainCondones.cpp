#include <iostream>
#include <string>
#include "Personas.h"
#include <vector>
#include <math.h>
#include <time.h>
#include <cstdlib>
using namespace std;

int main() {
	int opcion;
	vector<Personas*>personas;
	do{
		cout<<"*****MENU*****"<<endl
		<<"1. Agregar"<<endl
		<<"2. Eliminar"<<endl
		<<"3. Simulacion"<<endl
		<<"4. Salir"<<endl
		<<"Que desea hacer?:"<<endl;
		cin>>opcion;

		switch(opcion){
			case 1:{
				//AGREGAR
				string nombre, genero, cabello, ojos, piel, fertil, genomaOjos, genomaPiel, genomaCabello;
				//Nombre
				cout<<"Ingrese su nombre:"<<endl;
				cin>>nombre;
				//Genero
				cout<<"Ingrese su genero:"<<endl
				<<"1. Masculino"<<endl
				<<"2. Femenino"<<endl;
				cin>>genero;
				if (genero=="1") {
					genero = "M";
				} else {
					genero = "F";
				}
				//Cabello
				cout<<"Ingrese el color de Cabello:"<<endl
				<<"1. Negro"<<endl
				<<"2. Rubio"<<endl
				<<"3. Pelirrojo"<<endl;
				cin>>cabello;
				if (cabello=="1") {
					cabello = "negro";
					genomaCabello = "AA";
				} else if (cabello=="2") {
					cabello = "rubio";
					genomaCabello = "aa";
				} else {
					cabello = "pelirrojo";
					genomaCabello = "aa";
				}
				//Ojos
				cout<<"Ingrese el color de Ojos:"<<endl
				<<"1. Cafes"<<endl
				<<"2. Azules"<<endl
				<<"3. Verdes"<<endl;
				cin>>ojos;
				if (ojos=="1") {
					ojos = "cafe";
					genomaOjos = "AA";
				} else if (ojos=="2") {
					ojos = "azul";
					genomaOjos = "aa";
				} else {
					ojos = "verde";
					genomaOjos = "aa";
				}
				//Piel
				cout<<"Ingrese el color de Piel:"<<endl
				<<"1. Negro"<<endl
				<<"2. Trigueno"<<endl
				<<"3. Blanco"<<endl;
				cin>>piel;
				if (piel=="1") {
					piel = "negro";
					genomaPiel = "aa";
				} else if (piel=="2") {
					piel = "trigueno";
					genomaPiel = "aa";
				} else {
					piel = "blanco";
					genomaPiel = "AA";
				}
				//Fertilidad
				cout<<"Ingrese si es Fertil:"<<endl
				<<"1. Si"<<endl
				<<"2. No"<<endl;
				cin>>fertil;
				if (fertil=="1") {
					fertil = "si";
				} else {
					fertil = "no";
				}
				//Agregar al Vector
				Personas* persona = new Personas(nombre, genero, cabello, ojos, piel, fertil, genomaOjos, genomaPiel, genomaCabello);
				personas.push_back(persona);

			}break;

			//Eliminar
			case 2:{
				int pos;
				for (int i = 0; i < personas.size(); i++) {
					cout<<i<<"). "<<personas.at(i)->getNombre()<<endl;
				}
				if (personas.size()>0) {
					cout<<"Ingrese la posicion que desea eliminar"<<endl;
					cin>>pos;
					personas.erase(personas.begin() + pos);

				} else {
					cout<<"No hey personas en la lista!"<<endl;
				}

			}break;
			//Simulacion
			case 3:{
				int pos;
				Personas* persona1;
				Personas* persona2;

				for (int i = 0; i < personas.size(); i++) {
					cout<<i<<"). "<<personas.at(i)->getNombre()<<endl;
				}
				if (personas.size()>0) {
					bool validar = true;
					do{
						cout<<"Ingrese la posicion de la Primera persona"<<endl;
						cin>>pos;
						persona1 = personas.at(pos);
						cout<<"Ingrese la posicion de la segunda persona"<<endl;
						cin>>pos;
						persona2 = personas.at(pos);

						//Validar genero
						string gen1, gen2, fer1, fer2;
						gen1 = persona1->getGenero();
						gen2 = persona2->getGenero();
						fer1 = persona1->getFertil();
						fer2 = persona2->getFertil();

						//
						if (gen1!=gen2) {
							if(fer1 == "si" && fer2 == "si"){
								string condon;
								cout<<"Usaran Preservativo?"<<endl
								<<"1. Si"<<endl
								<<"2. No"<<endl;
								cin>>condon;
								if (condon == "1") {
									bool embarazada, roto;
									srand(time(NULL));
									int randE=rand()%100;
									srand(time(NULL));
									int randR=rand()%100;
									//
									if (randR==4) {
										cout<<"Se rompio"<<endl;
										roto = true;
										if (randE <= 21) {
											cout<<"Se embarazo"<<endl;
											embarazada = true;
										} else {
											cout<<"No se embarazo"<<endl;
											embarazada = false;
										}
									} else {
										cout<<"No se embarazo"<<endl;
										roto = false;
										embarazada = false;
									}
									validar = false;
								} else {
									bool embarazada;
									srand(time(NULL));
									int random=rand()%100;
									cout<<random<<endl;
									if (random <= 21) {
										cout<<"Se embarazo"<<endl;
										embarazada = true;
									} else {
										cout<<"No se embarazo"<<endl;
										embarazada = false;
									}
									//
									validar = false;
								}

							}else {
								cout<<"Una persona no es fertil!"<<endl;
							}
						} else {
							cout<<"Son del mismo genero!"<<endl;
						}


					}while(validar==true);


				} else {
					cout<<"No hey personas en la lista!"<<endl;
				}
			}break;

		}

	}while(opcion!=4);

	return 0;
}
