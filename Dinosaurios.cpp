#include "Dinosaurios.h"

Dinosaurios::Dinosaurios(string nombre,int altura,int peso,string fecha,string sexo,int longitud){
	this->nombre=nombre;
	this->altura=altura;
	this->peso=peso;
	this->fecha=fecha;
	this->sexo=sexo;
	this->longitud=longitud;
}
Dinosaurios::Dinosaurios(){

}void Dinosaurios::setNombre(string nombre){
   this-> nombre=nombre;
}
string Dinosaurios::getNombre(){
   return nombre;
}
void Dinosaurios::setAltura(int altura){
   this-> altura=altura;
}
int Dinosaurios::getAltura(){
   return altura;
}
void Dinosaurios::setPeso(int peso){
   this-> peso=peso;
}
int Dinosaurios::getPeso(){
   return peso;
}
void Dinosaurios::setFecha(string fecha){
   this-> fecha=fecha;
}
string Dinosaurios::getFecha(){
   return fecha;
}
void Dinosaurios::setSexo(string sexo){
   this-> sexo=sexo;
}
string Dinosaurios::getSexo(){
   return sexo;
}
void Dinosaurios::setLongitud(int longitud){
   this-> longitud=longitud;
}
int Dinosaurios::getLongitud(){
   return longitud;
}
