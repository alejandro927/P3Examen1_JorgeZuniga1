#include "Equipos.hpp"

Equipos::Equipos() {
	// cout<<"llamaron al vacio" << endl;
}

Equipos::Equipos(string n,int s) {
	this->skill = s;
	this->nombre = n;
}
Equipos::~Equipos() {
	//cout << "Se elimino el inventario" << endl;
}

string Equipos::getnombre() {
	return this->nombre;
}
void Equipos::setnombre(string n) {
	this->nombre = n;
}

int Equipos::getskill() {
	return this-> skill;
}
void Equipos::setskill(int s){
	this->skill = s;
}
