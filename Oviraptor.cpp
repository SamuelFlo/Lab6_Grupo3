#include "Oviraptor.h"
#include "Dinosaurios.h"
#include <iostream>
using namespace std;
using std::cout;
Oviraptor::Oviraptor(int AlturaCresta,bool Plumaje):Dinosaurios(nombre,altura,peso,fecha,sexo,longitud){
	this->AlturaCresta=AlturaCresta;
	this->Plumaje=Plumaje;
	this->nombre=nombre;
	this->altura=altura;
	this->peso=peso;
	this->fecha=fecha;
	this->sexo=sexo;
	this->longitud=longitud;
}
Oviraptor::Oviraptor(){

}void Oviraptor::setAlturaCresta(int AlturaCresta){
   if(AlturaCresta<1){
		   this-> AlturaCresta=AlturaCresta;
   }else{
 		cout<<"la altura debe ser menor de 1"<<endl;  
   }
}
int Oviraptor::getAlturaCresta(){
   return AlturaCresta;
}
void Oviraptor::setPlumaje(bool Plumaje){
   this-> Plumaje=Plumaje;
}
bool Oviraptor::getPlumaje(){
   return Plumaje;
}
