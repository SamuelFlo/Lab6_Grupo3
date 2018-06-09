#include <iostream>
#include <string>
#include <vector>
#include "Dinosaurios.h"

using namespace std;

#ifndef OMNIVOROS_H
#define OMNIVOROS_H
class Omnivoros:public Dinosaurios{
	protected:
		int NumeroMolares;
		int NumeroColmillos;
	public:
		Omnivoros(int,int);
		Omnivoros();
		int getNumeroMolares();
		void setNumeroMolares(int);

		int getNumeroColmillos();
		void setNumeroColmillos(int);

};
#endif