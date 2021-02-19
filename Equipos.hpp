#ifndef EQUIPOS_HPP
#define EQUIPOS_HPP
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Equipos {
	private:
		string nombre;
		int skill;
	public:
		Equipos();
		Equipos(string,int);
		~Equipos();
		string getnombre();
		void setnombre(string);
		int getskill();
		void setskill(int);
};

#endif
