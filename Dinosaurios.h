#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef DINOSAURIOS_H
#define DINOSAURIOS_H
class Dinosaurios{
	protected:
		string nombre;
		int altura;
		int peso;
		string fecha;
		string sexo;
		int longitud;
	public:
		Dinosaurios(string,int,int,string,string,int);
		Dinosaurios();
		string getNombre();
		void setNombre(string);

		int getAltura();
		void setAltura(int);

		int getPeso();
		void setPeso(int);

		string getFecha();
		void setFecha(string);

		string getSexo();
		void setSexo(string);

		int getLongitud();
		void setLongitud(int);

};
#endif