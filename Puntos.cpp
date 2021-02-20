#include "Puntos.hpp"

Puntos::Puntos() {
	// cout<<"llamaron al vacio" << endl;
}

Puntos::Puntos(string n,int PJ,int G,int E,int P,int GF,int GC,int Pts) {
	this->nombre = n;
	this->partidosJ = PJ;
	this->Jganados = G;
	this->empates = E;
	this->Jperdidos = P;
	this->golesAfavor = GF;
	this->golesContra = GC;
	this->puntos = Pts;
}

Puntos::~Puntos() {
	//cout << "Se elimino el inventario" << endl;
}

string Puntos::getnombre() {
	return this->nombre;
}

void Puntos::setnombre(string n) {
	this->nombre = n;
}

int Puntos:: getpartidosJ() {
	return this-> partidosJ;
}

void Puntos::setpartidosJ(int PJ) {
	this->partidosJ = PJ;
}

int Puntos:: getJganados() {
	return this-> Jganados;
}

void Puntos::setJganados(int G) {
	this->Jganados = G;
}

int Puntos:: getempates() {
	return this-> empates;
}

void Puntos:: setempates(int E) {
	this->empates = E;
}

int Puntos:: getJperdidos() {
	return this-> Jperdidos;
}

void Puntos:: setJperdidos(int P) {
	this->Jperdidos = P;
}

int Puntos:: getgolesAfavor() {
	return this-> golesAfavor;
}

void Puntos:: setgolesAfavor(int GF) {
	this->golesAfavor = GF;
}

int Puntos:: getgolesContra() {
	return this-> golesContra;
}

void Puntos:: setgolesContra(int GC) {
	this->golesContra = GC;
}

int Puntos:: getpuntos() {
	return this-> puntos;
}

void Puntos::setpuntos(int Pts) {
	this->puntos = Pts;
}
