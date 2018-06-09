#include "Tyrannosaurus.h"
#include "Dinosaurios.h"
#include <iostream>
using namespace std;
using std::cin;
using std::endl;
using std::cout;

Tyrannosaurus::Tyrannosaurus(int NumeroColmillos,int ConsumoCarne):Dinosaurios(nombre,altura,peso,fecha,sexo,longitud){
	this->NumeroColmillos=NumeroColmillos;
	this->ConsumoCarne=ConsumoCarne;
	this->nombre=nombre;
	this->altura=altura;
	this->peso=peso;
	this->fecha=fecha;
	this->sexo=sexo;
	this->longitud=longitud;
}
Tyrannosaurus::Tyrannosaurus(){

}void Tyrannosaurus::setNumeroColmillos(int NumeroColmillos){
  if(NumeroColmillos<60){
  		 this-> NumeroColmillos=NumeroColmillos;
  }else{
  		cout<<"El numero de colmillos debe ser menor que 60"<<endl;  
  }
}
int Tyrannosaurus::getNumeroColmillos(){
   return NumeroColmillos;
}
void Tyrannosaurus::setConsumoCarne(int ConsumoCarne){
   if(ConsumoCarne>6877){
   	cout<<"El consumo diario debe ser mayor de 6877"<<endl;
   }
}
int Tyrannosaurus::getConsumoCarne(){
   return ConsumoCarne;
}
