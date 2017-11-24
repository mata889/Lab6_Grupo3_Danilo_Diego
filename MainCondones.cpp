#include <iostream>
#include <string>
#include "Personas.h"
#include <vector>
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
				string nombre, genero, cabello, ojos, piel, fertil;
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
				} else if (cabello=="2") {
					cabello = "rubio";
				} else {
					cabello = "pelirrojo";
				}
				//Ojos
				cout<<"Ingrese el color de Ojos:"<<endl
				<<"1. Cafes"<<endl
				<<"2. Azules"<<endl
				<<"3. Verdes"<<endl;
				cin>>ojos;
				if (ojos=="1") {
					ojos = "cafe";
				} else if (ojos=="2") {
					ojos = "azul";
				} else {
					ojos = "verde";
				}
				//Piel
				cout<<"Ingrese el color de Piel:"<<endl
				<<"1. Negro"<<endl
				<<"2. Trigueno"<<endl
				<<"3. Blanco"<<endl;
				cin>>piel;
				if (piel=="1") {
					piel = "negro";
				} else if (piel=="2") {
					piel = "trigueno";
				} else {
					piel = "blanco";
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
				Personas* persona = new Personas(nombre, genero, cabello, ojos, piel, fertil);
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
									validar = false;
								} else {
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
