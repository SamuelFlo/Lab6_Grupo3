#include <iostream>
#include <string>
#include <vector>
#include "Dinosaurios.h"

using namespace std;

#ifndef OVIRAPTOR_H
#define OVIRAPTOR_H
class Oviraptor:public Dinosaurios{
	protected:
		int AlturaCresta;
		bool Plumaje;
	public:
		Oviraptor(int,bool);
		Oviraptor();
		int getAlturaCresta();
		void setAlturaCresta(int);

		bool getPlumaje();
		void setPlumaje(bool);

};
#endif