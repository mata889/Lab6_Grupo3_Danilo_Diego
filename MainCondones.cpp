#include <iostream>
#include <string>
#include "Personas.h"
#include <vector>
using namespace std;

int main() {
	int opcion;
	//vector<Personas*>personas;
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
				if (genero==1) {
					genero = "M";
				} else {
					genero = "F";
				}
				//Cabello
				cout<<"Ingrese el color de Cabello:"<<endl
				<<"1. Negro"


			}break;
		}

	}while(opcion!=4);

	return 0;
}
