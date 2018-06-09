#include <iostream>
#include <string>
#include <vector>
#include "Dinosaurios.h"

using namespace std;

#ifndef TRICERAPTOR_H
#define TRICERAPTOR_H
class Triceraptor:public Dinosaurios{
	protected:
		int LongitudCuernos;
		int longitudCuerso;
	public:
		Triceraptor(int,int);
		Triceraptor();
		int getLongitudCuernos();
		void setLongitudCuernos(int);

		int getLongitudCuerso();
		void setLongitudCuerso(int);

};
#endif