#ifndef LIGA_HPP
#define LIGA_HPP
#include <iostream>
#include <vector>
#include "Equipos.hpp"

using namespace std;
class Liga
{
	private:
		vector <Equipos*> equipos;
	public:
		Liga();
		~Liga();
		Liga( vector <Equipos*> );
		void agregarE(string, int);
		void modificarE(int,int);
		void eliminarE(int);
		void ListarE();
};

#endif
