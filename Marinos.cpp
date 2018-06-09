#include "Marinos.h"
#include "Dinosaurios.h"

Marinos::Marinos(int NumeroAletas,string Tipo):Dinosaurios(nombre,altura,peso,fecha,sexo,longitud){
	this->NumeroAletas=NumeroAletas;
	this->Tipo=Tipo;
	this->nombre=nombre;
	this->altura=altura;
	this->peso=peso;
	this->fecha=fecha;
	this->sexo=sexo;
	this->longitud=longitud;
}
Marinos::Marinos(){

}void Marinos::setNumeroAletas(int NumeroAletas){
   if(NumeroAletas<=60){
   this-> NumeroAletas=NumeroAletas;
   }
}
int Marinos::getNumeroAletas(){
   return NumeroAletas;
}
void Marinos::setTipo(string Tipo){
   if(Tipo=="Terrestre"){
   	this-> Tipo=Tipo;
   }else if(Tipo=="Marino"){
      this-> Tipo=Tipo;
   }
}
string Marinos::getTipo(){
   return Tipo;
}
