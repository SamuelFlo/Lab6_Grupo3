#include <iostream>
#include <string>
#include <vector>
#include "Dinosaurios.h"

using namespace std;

#ifndef MARINOS_H
#define MARINOS_H
class Marinos:public Dinosaurios{
	protected:
		int NumeroAletas;
		string Tipo;
	public:
		Marinos(int,string);
		Marinos();
		int getNumeroAletas();
		void setNumeroAletas(int);

		string getTipo();
		void setTipo(string);

};
#endif