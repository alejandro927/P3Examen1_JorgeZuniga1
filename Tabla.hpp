#ifndef TABLA_HPP
#define TABLA_HPP
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Tabla {
	private:
		string nombre;
		int partidosJ;  //Partidos jugados
		int Jganados;	//partidos ganados
		int Jperdidos;  //partidos perdidos
		int empates; 	//empates
		int golesAfavor;
		int golesContra;
		int puntos;

	public:
		Tabla();
		Tabla(string,int,int,int,int,int,int,int);
		~Tabla();
		string getnombre();
		void setnombre(string);
		int getpartidosJ();
		void setpartidosJ(int);
		int getJganados();
		void setJganados(int);
		int getJperdidos();
		void setJperdidos(int);
		int getempates();
		void setempates(int);
		int getgolesAfavor();
		void setgolesAfavor(int);
		int getgolesContra();
		void setgolesContra(int);
		int getpuntos();
		void setpuntos(int);
};

#endif
