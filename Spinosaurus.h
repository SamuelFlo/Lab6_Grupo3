#include <iostream>
#include <string>
#include <vector>
#include "Dinosaurios.h"

using namespace std;

#ifndef SPINOSAURUS_H
#define SPINOSAURUS_H
class Spinosaurus:public Dinosaurios{
	protected:
		int Altura;
		int LongitudBrazos;
	public:
		Spinosaurus(int,int);
		Spinosaurus();
		int getAltura();
		void setAltura(int);

		int getLongitudBrazos();
		void setLongitudBrazos(int);

};
#endif