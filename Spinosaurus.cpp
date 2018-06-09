#include "Spinosaurus.h"
#include "Dinosaurios.h"
#include <iostream>
using namespace std;
using std::cout;

Spinosaurus::Spinosaurus(int Altura,int LongitudBrazos):Dinosaurios(nombre,altura,peso,fecha,sexo,longitud){
	this->Altura=Altura;
	this->LongitudBrazos=LongitudBrazos;
	this->nombre=nombre;
	this->altura=altura;
	this->peso=peso;
	this->fecha=fecha;
	this->sexo=sexo;
	this->longitud=longitud;
}
Spinosaurus::Spinosaurus(){

}void Spinosaurus::setAltura(int Altura){
   if(altura>2){
	   this-> Altura=Altura;
   
   }else{
		cout<<"La longitud debe ser mayor de 2";   
   }
}
int Spinosaurus::getAltura(){
   return Altura;
}
void Spinosaurus::setLongitudBrazos(int LongitudBrazos){
   this-> LongitudBrazos=LongitudBrazos;
}
int Spinosaurus::getLongitudBrazos(){
   return LongitudBrazos;
}
