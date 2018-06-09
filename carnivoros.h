#include <iostream>
#include <string>
#include <vector>
#include "Dinosaurios.h"

using namespace std;

#ifndef CARNIVOROS_H
#define CARNIVOROS_H
class carnivoros: public Dinosaurios{
	protected:
		string organoDepredador;
		string tipo;
	public:
		carnivoros(string,string);
		carnivoros();
		string getOrganoDepredador();
		void setOrganoDepredador(string);

		string getTipo();
		void setTipo(string);

};
#endif
