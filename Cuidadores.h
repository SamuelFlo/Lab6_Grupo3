#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::string;
#ifndef CUIDADORES_H
#define CUIDADORES_H
class Cuidadores{
	protected:
		string nombre;
		string id;
		string sexo;
		int Edad;
	public:
		Cuidadores(string,string,string,int);
		Cuidadores();
		string getNombre();
		void setNombre(string);

		string getId();
		void setId(string);

		string getSexo();
		void setSexo(string);

		int getEdad();
		void setEdad(int);

};
#endif
