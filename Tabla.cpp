#include "Tabla.hpp"

Tabla::Tabla() {
	// cout<<"llamaron al vacio" << endl;
}

Tabla::Tabla(string n,int PJ,int G,int E,int P,int GF,int GC,int Pts) {
	this->nombre = n;
	this->partidosJ = PJ;
	this->Jganados = G;
	this->empates = E;
	this->Jperdidos = P;
	this->golesAfavor = GF;
	this->golesContra = GC;
	this->puntos = Pts;
}

Tabla::~Tabla() {
	//cout << "Se elimino el inventario" << endl;
}

string Tabla::getnombre() {
	return this->nombre;
}

void Tabla::setnombre(string n) {
	this->nombre = n;
}

int Tabla:: getpartidosJ() {
	return this-> partidosJ;
}

void Tabla::setpartidosJ(int PJ) {
	this->partidosJ = PJ;
}

int Tabla:: getJganados() {
	return this-> Jganados;
}

void Tabla::setJganados(int G) {
	this->Jganados = G;
}

int Tabla:: getempates() {
	return this-> empates;
}

void Tabla:: setempates(int E) {
	this->empates = E;
}

int Tabla:: getJperdidos() {
	return this-> Jperdidos;
}

void Tabla:: setJperdidos(int P) {
	this->Jperdidos = P;
}

int Tabla:: getgolesAfavor() {
	return this-> golesAfavor;
}

void Tabla:: setgolesAfavor(int GF) {
	this->golesAfavor = GF;
}

int Tabla:: getgolesContra() {
	return this-> golesContra;
}

void Tabla:: setgolesContra(int GC) {
	this->golesContra = GC;
}

int Tabla:: getpuntos() {
	return this-> puntos;
}

void Tabla::setpuntos(int Pts) {
	this->puntos = Pts;
}
