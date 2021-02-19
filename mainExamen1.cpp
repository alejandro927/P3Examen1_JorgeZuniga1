#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include "Equipos.hpp"
#include "Liga.hpp"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	string nombreLiga="";
	cout<<"Buenas, Ingrese el nombre de la liga:";
	getline(cin,nombreLiga);
	Liga* liga = new Liga(nombreLiga);
	

	srand(time(NULL));
	int opcion = -1;
	while(opcion != 5) {
		cout << "====Menu===="<<endl<<"Ingrese una opcion \n 1) Mantenimiento de equipos\n 2) Generar jornada de partidos\n 3) Simular partidos\n 4) Imprimir tabla de posiciones \n 5)Salir" << endl;
		cout << "Opcion: ";
		cin >> opcion;
		switch(opcion) {
			case 1: {
				int opcion2 = -1;
				while(opcion2 != 5) {
					cout<<"Este es el mantenimiento de los equipos las opciones son:\n 1)Crear \n 2)Modificar \n 3)Listar \n 4)Eliminar\n 5)Salir \n Elija su opcion:";
					cin >> opcion2;
					switch(opcion2) {
						case 1: {
							string nombre="";
							int skill;
							cout << "======Aqui se ingresan los equipos======"<<endl;
							cout << "Ingrese el nombre del equipo: ";
							getline(cin,nombre);
							getline(cin,nombre);
							skill = 1 + (rand() % 100);
							liga -> agregarE(nombre,skill);
						}
						break;
						case 2: {
							int posicion;
							int opc=0;
							cout << "=====Aqui se modifican los equipos====="<<endl;
							cout<<"Ingrese la posicion del equipo que desea modificar:"<<endl;
							    cin>>posicion;
							cout<<"Las opciones a modificar son:\n 1)El nombre \n 2)El Skill \n Su opcion:";
							cin>>opc;
							liga -> modificarE(posicion,opc);
						}
						break;
						case 3: {
							cout << "=====Aqui se listan los equipos====="<<endl;
							liga -> ListarE();
						}
						break;
						case 4: {
							int posi=0;
							cout << "=====Aqui se eliminan los equipos====="<<endl;
							cout << "Ingrese la posicion del equipo a eliminar:";
							cin>>posi;
							liga -> eliminarE(posi);
						}
						break;
					}
				}
			}
			break;
			case 2: {
				cout << "=======Aqui se genera la jornada=======";
				
				
			}
			break;
			case 3: {

			}
			break;
			case 4: {
				liga -> Listartabla();
			}
			break;
		}
	}
	
	delete liga;
	return 0;
}
