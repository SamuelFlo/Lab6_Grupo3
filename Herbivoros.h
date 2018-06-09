#include <iostream>
#include <string>
#include <vector>
#include "Dinosaurios.h"

using namespace std;

#ifndef HERBIVOROS_H
#define HERBIVOROS_H
class Herbivoros: public Dinosaurios{
	protected:
		string Tipo;
		int NumeroIncisivos;
	public:
		Herbivoros(string,int);
		Herbivoros();
		string getTipo();
		void setTipo(string);

		int getNumeroIncisivos();
		void setNumeroIncisivos(int);

};
#endif