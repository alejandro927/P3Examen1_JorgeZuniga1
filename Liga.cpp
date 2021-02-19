#include "Liga.hpp"
#include <random>
#include <ctime>
#include <iomanip>

Liga::Liga(string n) {
	this->nombre = n;
}

Liga::~Liga() {
	//delete Liga;
	//partido , tabla , puntos por equipo
}

void Liga::agregarE(string nombre,int skill) {
	equipos.push_back(new Equipos(nombre,skill));
	tabla.push_back(new Tabla(nombre,0,0,0,0,0,0,0));
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

void Liga::Listartabla(){
	cout<<"Liga "<< nombre <<endl;
	cout<<"Nombre   G   E   P   GF   GC   Pts"<<endl;
	for(int i = 0; i < tabla.size(); i++) {
		Tabla *c = tabla[i];
		//cout<< i <<") "<< c->getnombre() << "  "<< c->getpartidosJ() << "  "<< c->getJganados() << "  "<< c->getempates() <<"  "<< c->getJperdidos() << "  " << c->getgolesAfavor() << "  " << c->getgolesContra() << "  " << c->getpuntos()<<endl;                                
		cout<< setw(3)<<i+1 <<") "<<setw(3)<< c->getnombre() << setw(3)<< c->getpartidosJ() <<setw(3)<< c->getJganados() << setw(3) << c->getempates() <<setw(3)<< c->getJperdidos() << setw(3) << c->getgolesAfavor() << setw(3) << c->getgolesContra() << setw(3) << c->getpuntos()<<endl;
	}
}

string Liga::getliga(){
	return this->nombre;
}
