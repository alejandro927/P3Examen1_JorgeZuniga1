#ifndef PUNTOS_HPP
#define PUNTOS_HPP
#include <iostream>
using namespace std;
class Puntos
{
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
		Puntos();
		Puntos(string,int,int,int,int,int,int,int);
		~Puntos();
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
