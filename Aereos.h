#include <iostream>
#include <string>
#include <vector>
#include "Dinosaurios.h"

using namespace std;

#ifndef AEREOS_H
#define AEREOS_H
class Aereos:public Dinosaurios{
	protected:
		bool Vuela;
		bool Plumas;
	public:
		Aereos(bool,bool);
		Aereos();
		bool getVuela();
		void setVuela(bool);

		bool getPlumas();
		void setPlumas(bool);

};
#endif