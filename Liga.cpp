#include "Liga.hpp"
#include <random>
#include <ctime>
#include <iomanip>
#include "Partido.hpp"
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
	while(posicion < 0 || posicion > equipos.size()) {
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
	while(posicion < 0 || posicion > equipos.size()) {
		cout<< "Posicion Invalida Ingrese nuevamanete:";
		cin>>posicion;
	}
	for(int i=0; i < equipos.size(); i++) {
		if(i == posicion) {
			equipos.erase(equipos.begin()+i);
		}
	}
}

void Liga::ListarE() {
	for(int i = 0; i < equipos.size(); i++) {
		Equipos *c = equipos[i];
		cout <<"------" << "Equipo #" << i <<"------"<<endl;
		cout << "Nombre: "<< c->getnombre() << endl;
		cout << "Skill: " << c->getskill() << endl;
	}
}

void Liga::ord(int arr[],bool bandera,int n) {
	if( bandera==true ) {
		int aux=0;
		bandera = false;
		for(int i=0; i<n-1; i++) {
			if(arr[i] > arr[i+1]) {
				aux = arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=aux;
				bandera = true;
			}
		}
		ord(arr,bandera,n);
	} else {
		for(int i=0; i<n; i++) {
			//cout<<"["<<arr[i]<<"] ";
		}
	}
}

void Liga::Listartabla() {
	cout<<"Liga "<< nombre <<endl;
	cout<<"Nombre   G   E   P   GF   GC   Pts"<<endl;
	int n = tabla.size();
	int puntos[n];
	for(int i=0; i<tabla.size(); i++) {
		Tabla *c = tabla[i];
		puntos[i] = c->getpuntos();
	}
	
	ord(puntos,true,n);


	for(int i = 0; i < tabla.size(); i++) {
		Tabla *c = tabla[i];
		if( puntos[i] == c -> getpuntos()) {
			cout<< setw(5)<<i+1 <<") "<<setw(3)<< c->getnombre() << setw(3)<< c->getpartidosJ() <<setw(3)<< c->getJganados() << setw(3) << c->getempates() <<setw(3)<< c->getJperdidos() << setw(3) << c->getgolesAfavor() << setw(3) << c->getgolesContra() << setw(3) << c->getpuntos()<<endl;
			//cout<< i <<") "<< c->getnombre() << "  "<< c->getpartidosJ() << "  "<< c->getJganados() << "  "<< c->getempates() <<"  "<< c->getJperdidos() << "  " << c->getgolesAfavor() << "  " << c->getgolesContra() << "  " << c->getpuntos()<<endl;

		}
	}
}

string Liga::getliga() {
	return this->nombre;
}

void Liga::generarJornada() {

	vector <string>temporal;
	for(int i=0; i < equipos.size(); i++) {
		Equipos *c = equipos[i];
		temporal.push_back( c->getnombre() );
		cout << temporal.at(i) << endl;
	}

	int tamEquipo = temporal.size();

	vector <int> Vrandom;
	int contador=tamEquipo;

	while(temporal.size() != 0) {

		int random1=0;
		int random2=0;
		for(int i=0; i < Vrandom.size(); i++) {

			random1 = 0 + (rand() % tamEquipo);
			random2 = 0 + (rand() % tamEquipo);
			while(random1 == Vrandom[i]) {
				random1 = 0 + (rand() % tamEquipo);
			}
			temporal.erase(temporal.begin()+random1);
			tamEquipo--;

			while(random2 == Vrandom[i]) {
				random2 = 0 + (rand() % tamEquipo);
			}
			temporal.erase(temporal.begin()+(random2-1));
			tamEquipo--;
			Vrandom.push_back(random1);
			Vrandom.push_back(random2);


		}

		contador -=2;
	}
	for(int i=0; i<Vrandom.size(); i++) {
		cout<<Vrandom[i]<<endl;
	}




	for(int i=0; i < equipos.size()/2; i++ ) {
		//partidos[i] = rand1 + "," +rand2
	}

}
