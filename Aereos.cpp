#include "Aereos.h"
#include "Dinosaurios.h"
Aereos::Aereos(bool Vuela,bool Plumas):Dinosaurios(nombre, altura,peso,fecha,sexo,longitud){
	this->Vuela=Vuela;
	this->Plumas=Plumas;
	this->nombre=nombre;
	this->altura=altura;
	this->peso=peso;
	this->fecha=fecha;
	this->sexo=sexo;
	this->longitud=longitud;
	
}
Aereos::Aereos(){

}void Aereos::setVuela(bool Vuela){
   this-> Vuela=Vuela;
}
bool Aereos::getVuela(){
   return Vuela;
}
void Aereos::setPlumas(bool Plumas){
   this-> Plumas=Plumas;
}
bool Aereos::getPlumas(){
   return Plumas;
}
