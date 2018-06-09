#include "Cuidadores.h"
#include <string>
#include <iostream>
using namespace std;
using std::string;

Cuidadores::Cuidadores(string nombre,string id,string sexo,int Edad){
	this->nombre=nombre;
	this->id=id;
	this->sexo=sexo;
	this->Edad=Edad;
}
Cuidadores::Cuidadores(){

}
void Cuidadores::setNombre(string nombre){
   this-> nombre=nombre;
}
string Cuidadores::getNombre(){
   return nombre;
}
void Cuidadores::setId(string id){
   this-> id=id;
}
string Cuidadores::getId(){
   return id;
}
void Cuidadores::setSexo(string sexo){
   this-> sexo=sexo;
}
string Cuidadores::getSexo(){
   return sexo;
}
void Cuidadores::setEdad(int Edad){
  if(Edad>21){
     this-> Edad=Edad;
  }
}
int Cuidadores::getEdad(){
   return Edad;
}
