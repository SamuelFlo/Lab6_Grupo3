#include "Herbivoros.h"
#include "Dinosaurios.h"
#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

Herbivoros::Herbivoros(string Tipo,int NumeroIncisivos):Dinosaurios(nombre, altura,peso,fecha,sexo,longitud){
	this->Tipo=Tipo;
	this->NumeroIncisivos=NumeroIncisivos;
	this->nombre=nombre;
	this->altura=altura;
	this->peso=peso;
	this->fecha=fecha;
	this->sexo=sexo;
	this->longitud=longitud;
}
Herbivoros::Herbivoros(){

}void Herbivoros::setTipo(string Tipo){
	 if(Tipo=="frugivoro"){
 	  	this-> Tipo=Tipo;
	 }else if(Tipo=="folivoro"){
	   this-> Tipo=Tipo;
	 }
}
string Herbivoros::getTipo(){
   return Tipo;
}
void Herbivoros::setNumeroIncisivos(int NumeroIncisivos){
   if(NumeroIncisivos>=60){
   	this-> NumeroIncisivos=NumeroIncisivos;
     }else{
			cout<<"El numero de incisivos debe ser igual o mayor de 60"<<endl;   
   }
}
int Herbivoros::getNumeroIncisivos(){
   return NumeroIncisivos;
}
