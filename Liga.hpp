#ifndef LIGA_HPP
#define LIGA_HPP
#include <iostream>
#include <vector>
#include "Equipos.hpp"
#include "Partido.hpp"
#include "Tabla.hpp"

using namespace std;
class Liga
{
	private:
		string nombre;
		vector <Equipos*> equipos;
		vector <Partido*> partidos;
		vector <Tabla*> tabla;
		
	public:
		Liga();
		~Liga();
		Liga(string);
		void agregarE(string, int);
		void modificarE(int,int);
		void eliminarE(int);
		void ListarE();
		void Listartabla();
		string getliga();
};

#endif
