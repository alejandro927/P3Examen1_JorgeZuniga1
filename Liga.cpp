#include "Liga.hpp"
#include <random>
#include <ctime>


Liga::Liga() {
	//vacio
}

void Liga::agregarE(string nombre,int skill) {
	equipos.push_back(new Equipos(nombre,skill));
}

void Liga::modificarE(int posicion,int opcion) {
	
	srand(time(NULL));
	while(posicion < 0 || posicion > equipos.size()){
		cout<< "Posicion Invalida Ingrese nuevamanete:";
		cin>>posicion;
	}
	switch(opcion) {
		case 1: {
			string nombre="";
			cout<<"Ingrese el nuevo nombre:";
			getline(cin,nombre);
			getline(cin,nombre);
			for(int i = 0; i < equipos.size(); i++) {
				if( i == posicion ) {
					equipos.at(i)->setnombre(nombre);
				}
			}
		}
		break;
		case 2: {
			int skill;
			skill = 1 + (rand() % 100);
			cout<< "El nuevo skill es:"<<skill;
			for(int i=0; i < equipos.size(); i++) {
				if( i == posicion ) {
					equipos.at(i)->setskill(skill);
				}
			}
		}
		break;
	}
}

void Liga::eliminarE(int posicion) {
	while(posicion < 0 || posicion > equipos.size()){
		cout<< "Posicion Invalida Ingrese nuevamanete:";
		cin>>posicion;
	}
	for(int i=0; i < equipos.size(); i++) {
		if(i == posicion) {
			equipos.erase(equipos.begin()+i);
		}
	}
}

void Liga::ListarE(){
	for(int i = 0; i < equipos.size(); i++) {
		Equipos *c = equipos[i];
		cout <<"------" << "Equipo #" << i <<"------"<<endl;
		cout << "Nombre: "<< c->getnombre() << endl;
		cout << "Skill: " << c->getskill() << endl;
	}
}
