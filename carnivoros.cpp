#include "carnivoros.h"
#include "Dinosaurios.h"

carnivoros::carnivoros(string organoDepredador,string tipo):Dinosaurios(nombre, altura,peso,fecha,sexo,longitud){
	this->organoDepredador=organoDepredador;
	this->tipo=tipo;
	this->nombre=nombre;
	this->altura=altura;
	this->peso=peso;
	this->fecha=fecha;
	this->sexo=sexo;
	this->longitud=longitud;
}
carnivoros::carnivoros(){

}void carnivoros::setOrganoDepredador(string organoDepredador){
  if(organoDepredador=="Dientes"){
  	 this-> organoDepredador=organoDepredador;
  }else if(organoDepredador=="Garras"){
  	 this-> organoDepredador=organoDepredador;
  }
}
string carnivoros::getOrganoDepredador(){
   return organoDepredador;
}
void carnivoros::setTipo(string tipo){
   this-> tipo=tipo;
}
string carnivoros::getTipo(){
   return tipo;
}
