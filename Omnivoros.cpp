#include "Omnivoros.h"
#include "Dinosaurios.h"

Omnivoros::Omnivoros(int NumeroMolares,int NumeroColmillos):Dinosaurios(nombre,altura,peso,fecha,sexo,longitud){
	this->NumeroMolares=NumeroMolares;
	this->NumeroColmillos=NumeroColmillos;
	this->nombre=nombre;
	this->altura=altura;
	this->peso=peso;
	this->fecha=fecha;
	this->sexo=sexo;
	this->longitud=longitud;
}
Omnivoros::Omnivoros(){

}void Omnivoros::setNumeroMolares(int NumeroMolares){
  if(NumeroMolares>0&&NumeroMolares<30){
  	 	this-> NumeroMolares=NumeroMolares;
  }
}
int Omnivoros::getNumeroMolares(){
   return NumeroMolares;
}
void Omnivoros::setNumeroColmillos(int NumeroColmillos){
  if(NumeroColmillos>0&&NumeroColmillos<30){
   	this-> NumeroColmillos=NumeroColmillos;
  }
}
int Omnivoros::getNumeroColmillos(){
   return NumeroColmillos;
}
