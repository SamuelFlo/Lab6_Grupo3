#include <iostream>
#include <string>
#include <vector>
#include "Dinosaurios.h"
#include "carnivoros.h"
#include "Herbivoros.h"
#include "Triceraptor.h"
#include "Spinosaurus.h"
#include "Tyrannosaurus.h"
#include "Aereos.h"
#include "Marinos.h"
#include "Omnivoros.h"
#include "Oviraptor.h"
#include "Cuidadores.h"

using namespace std;
using std::string;
int main(){
	vector<Dinosaurios*>ListDino;
	vector<Cuidadores*>ListCuida;
	bool seguir=false;
	while(seguir==false){
		int opcion=0;
		int op1=0;
		bool plumaje, vuelaaereo, plumasaereo;
		string depredador,tipocarnivoro,tipoherviboro;
		int numdecolmillos=0, consumodiario=0, incisivos, intplumaje,
		morales,alturacresta, alturaespina,numerodeatletas,tipomarino,longitudbrazos,
		intvuelaaereo,intplumasaereo,longitudcuerno,numdecolmillosomnivo;
		string nombrecuidador,sexocuidador,idcuidador;
		int edadcuidador;
		int opcioninicio;
		string nombredinosaurio, fechacreacion,sexodinosaurio;
		int alturadinosaurio,pesodinosaurio,longituddinosaurio;
		int opcionmodificar, opcionmodificarcuidadores;
		int eliminadino, eliminacuida;
		cout<<"1. Agregar Dinosaurios"<<endl;
		cout<<"2. Agregar Cuidadores"<<endl;
		cout<<"3. Modificar Dinosaurio"<<endl;
		cout<<"4. Modificar Cuidadores"<<endl;
		cout<<"5. Eliminar Dinosaurios"<<endl;
		cout<<"6. Eliminar Cuidadores"<<endl;
		cout<<"7. Listar Dinosaurios"<<endl;
		cout<<"8. Listar Cuidadores"<<endl;
		cout<<"9. Salir"<<endl;
		cin>>opcioninicio;
		switch (opcioninicio) {
			case 1:
				cout<<"Ingrese el nombre del dinosaurio: "<<endl;
				cin>>nombredinosaurio;
				cout<<"Ingrese la altura: "<<endl;
				cin>>alturadinosaurio;
				cout<<"Ingrese el peso: "<<endl;
				cin>>pesodinosaurio;
				cout<<"Ingrese la fecha de creacion: "<<endl;
				cin>>fechacreacion;
				cout<<"Ingrese el sexo del dinosaurio: "<<endl;
				cin>>sexodinosaurio;
				cout<<"Ingrese la longitud del dinosaurio: "<<endl;
				cin>>longituddinosaurio;
				ListDino.push_back(new Dinosaurios(nombredinosaurio,alturadinosaurio,pesodinosaurio,fechacreacion,sexodinosaurio,longituddinosaurio));
				cout<<"DINOSAURIOS"<<endl;
				cout<<"1. Carnivoros"<<endl;
				cout<<"2. Herbivoros"<<endl;
				cout<<"3. Omnivoros"<<endl;
				cout<<"4. Aereos"<<endl;
				cout<<"5. Marinos"<<endl;
				cout<<"Ingrese la opcion: "<<endl;
				cin>>opcion;
				switch (opcion) {
					case 1:
						cout<<"1. Trynnosaurus rex"<<endl;
						cout<<"2. Spinosaurus"<<endl;
						cout<<"Ingrese la opcion: "<<endl;
						cin>>op1;
						switch (op1){
							case 1:
								cout<<"Trynnosaurus rex"<<endl;
								cout<<"Ingrese el organo depredador(dientes o garras): "<<endl;
								cin>>depredador;
								cout<<"Ingrese el tipo que es (cazador o carronero): "<<endl;
								cin>>tipocarnivoro;
								cout<<"Ingrese el numero de colmillos: "<<endl;
								cin>>numdecolmillos;
								cout<<"Ingrese el consumo diario de carne: "<<endl;
								cin>>consumodiario;
								break;
							case 2:
								cout<<"Spinosaurus"<<endl;
								cout<<"Ingrese el organo depredador(dientes o garras): "<<endl;
								cin>>depredador;
								cout<<"Ingrese el tipo que es (cazador o carronero): "<<endl;
								cin>>tipocarnivoro;
								cout<<"Ingrese la altura de espina neural: "<<endl;
								cin>>alturaespina;
								cout<<"Ingrese la longitud de brazos: "<<endl;
								cin>>longitudbrazos;
								break;
								}
								break;
					case 2:
						cout<<"HERBIVOROS"<<endl;
						cout<<"Ingrese el tipo de Herbivoros(frugivoros,folivoro): "<<endl;
						cin>>tipoherviboro;
						cout<<"Ingrese su numero de incisivos: "<<endl;
						cin>>incisivos;
						cout<<"TRICERATOPS"<<endl;
						cout<<"Ingrese la longitud de cuerno: "<<endl;
						cin>>longitudcuerno;
						break;
					case 3:
						cout<<"OMNIVOROS"<<endl;
						cout<<"Ingrese el numero de molares: "<<endl;
						cin>>morales;
						cout<<"Ingrese su numero de colmillos: "<<endl;
						cin>>numdecolmillosomnivo;
						cout<<"Ingrese la altura de su cresta: "<<endl;
						cin>>alturacresta;
						cout<<"Ingrese si tiene plumaje"<<endl;
						cout<<"1. SI"<<endl;
						cout<<"2. NO"<<endl;
						cin>>intplumaje;
						if(intplumaje==1){
								plumaje=true;
						}else{
							  plumaje=false;
						}
						break;
					case 4:
						cout<<"VUELA"<<endl;
						cout<<"Ingrese si vuela"<<endl;
						cout<<"1. SI"<<endl;
						cout<<"2. NO"<<endl;
						cin>> intvuelaaereo;
						if(intvuelaaereo==1){
					 		vuelaaereo=true;
						}else{
							vuelaaereo=false;
						}
						cout<<"Ingrese si tiene plumaje"<<endl;
						cout<<"1. SI"<<endl;
						cout<<"2. NO"<<endl;
						cin>>intplumasaereo;
						if (intplumasaereo==1) {
							plumasaereo=true;
						}else{
							plumasaereo=false;
						}
						break;
					case 5:
						cout<<"MARINOS"<<endl;
						cout<<"Ingrese el numero de atletas: "<<endl;
						cin>>numerodeatletas;
						cout<<"Ingrese el tipo (Terrestre/Marino): "<<endl;
						cin>>tipomarino;
						break;
				}
				break;
			case 2:
				cout<<"AGREGAR CUIDADORES"<<endl;
				cout<<"Ingrese el nombre: "<<endl;
				cin>>nombrecuidador;
				cout<<"Ingrese el ID: "<<endl;
				cin>>idcuidador;
				cout<<"Ingrese el sexo: "<<endl;
				cin>>sexocuidador;
				cout<<"Ingrese la edad: "<<endl;
				cin>>edadcuidador;
				ListCuida.push_back(new Cuidadores(nombrecuidador,idcuidador,sexocuidador,edadcuidador));
				break;
			case 3:
				cout<<"MODIFICAR DINOSAURIO"<<endl;
				//TODO: hacer un for del vector imprimiendo los nombre del dinosaurio y posicion
				cout<<"1. El nombre del dinosaurio: "<<endl;
				cout<<"2. La altura: "<<endl;
				cout<<"3. El peso: "<<endl;
				cout<<"4. La fecha de creacion: "<<endl;
				cout<<"5. Sexo del dinosaurio: "<<endl;
				cout<<"6. Longitud del dinosaurio: "<<endl;
				cout<<"7. Otros"<<endl;
				cin>>opcionmodificar;
				switch (opcionmodificar) {
					case 1:
						cout<<"Ingrese el nombre del dinosaurio: "<<endl;
						cin>>nombredinosaurio;
						break;
					case 2:
						cout<<"Ingrese la altura: "<<endl;
						cin>>alturadinosaurio;
						break;
					case 3:
						cout<<"Ingrese el peso: "<<endl;
						cin>>pesodinosaurio;
						break;
					case 4:
						cout<<"Ingrese la fecha de creacion: "<<endl;
						cin>>fechacreacion;
						break;
					case 5:
						cout<<"Ingrese el sexo del dinosaurio: "<<endl;
						cin>>sexodinosaurio;
						break;
					case 6:
						cout<<"Ingrese la longitud del dinosaurio: "<<endl;
						cin>>longituddinosaurio;
						break;
					case 7:
						cout<<"DINOSAURIOS"<<endl;
						cout<<"1. Carnivoros"<<endl;
						cout<<"2. Herbivoros"<<endl;
						cout<<"3. Omnivoros"<<endl;
						cout<<"4. Aereos"<<endl;
						cout<<"5. Marinos"<<endl;
						cout<<"Ingrese la opcion: "<<endl;
						cin>>opcion;
						switch (opcion) {
							case 1:
								cout<<"1. Trynnosaurus rex"<<endl;
								cout<<"2. Spinosaurus"<<endl;
								cout<<"Ingrese la opcion: "<<endl;
								cin>>op1;
								switch (op1){
									case 1:
										cout<<"Trynnosaurus rex"<<endl;
										cout<<"Ingrese el organo depredador(dientes o garras): "<<endl;
										cin>>depredador;
										cout<<"Ingrese el tipo que es (cazador o carronero): "<<endl;
										cin>>tipocarnivoro;
										cout<<"Ingrese el numero de colmillos: "<<endl;
										cin>>numdecolmillos;
										cout<<"Ingrese el consumo diario de carne: "<<endl;
										cin>>consumodiario;
										break;
									case 2:
										cout<<"Spinosaurus"<<endl;
										cout<<"Ingrese el organo depredador(dientes o garras): "<<endl;
										cin>>depredador;
										cout<<"Ingrese el tipo que es (cazador o carronero): "<<endl;
										cin>>tipocarnivoro;
										cout<<"Ingrese la altura de espina neural: "<<endl;
										cin>>alturaespina;
										cout<<"Ingrese la longitud de brazos: "<<endl;
										cin>>longitudbrazos;
										break;
										}
										break;
							case 2:
								cout<<"HERBIVOROS"<<endl;
								cout<<"Ingrese el tipo de Herbivoros(frugivoros,folivoro): "<<endl;
								cin>>tipoherviboro;
								cout<<"Ingrese su numero de incisivos: "<<endl;
								cin>>incisivos;
								cout<<"TRICERATOPS"<<endl;
								cout<<"Ingrese la longitud de cuerno: "<<endl;
								cin>>longitudcuerno;
								break;
							case 3:
								cout<<"OMNIVOROS"<<endl;
								cout<<"Ingrese el numero de molares: "<<endl;
								cin>>morales;
								cout<<"Ingrese su numero de colmillos: "<<endl;
								cin>>numdecolmillosomnivo;
								cout<<"Ingrese la altura de su cresta: "<<endl;
								cin>>alturacresta;
								cout<<"Ingrese si tiene plumaje"<<endl;
								cout<<"1. SI"<<endl;
								cout<<"2. NO"<<endl;
								cin>>intplumaje;
								if(intplumaje==1){
										plumaje=true;
								}else{
									  plumaje=false;
								}
								break;
							case 4:
								cout<<"VUELA"<<endl;
								cout<<"Ingrese si vuela"<<endl;
								cout<<"1. SI"<<endl;
								cout<<"2. NO"<<endl;
								cin>> intvuelaaereo;
								if(intvuelaaereo==1){
							 		vuelaaereo=true;
								}else{
									vuelaaereo=false;
								}
								cout<<"Ingrese si tiene plumaje"<<endl;
								cout<<"1. SI"<<endl;
								cout<<"2. NO"<<endl;
								cin>>intplumasaereo;
								if (intplumasaereo==1) {
									plumasaereo=true;
								}else{
									plumasaereo=false;
								}
								break;
							case 5:
								cout<<"MARINOS"<<endl;
								cout<<"Ingrese el numero de atletas: "<<endl;
								cin>>numerodeatletas;
								cout<<"Ingrese el tipo (Terrestre/Marino): "<<endl;
								cin>>tipomarino;
								break;
						}
						break;
				}
				break;
			case 4:
				cout<<"Modificar cuidadores"<<endl;
				cout<<"1. El nombre: "<<endl;
				cout<<"2. El ID: "<<endl;
				cout<<"3. El sexo: "<<endl;
				cout<<"4. La edad: "<<endl;
				cin>>opcionmodificarcuidadores;
				switch (opcionmodificarcuidadores) {
					case 1:
						cout<<"Ingrese el nombre: "<<endl;
						cin>>nombrecuidador;
						break;
					case 2:
						cout<<"Ingrese el ID: "<<endl;
						cin>>idcuidador;
						break;
					case 3:
						cout<<"Ingrese el sexo: "<<endl;
						cin>>sexocuidador;
						break;
					case 4:
						cout<<"Ingrese la edad: "<<endl;
						cin>>edadcuidador;
						break;

				}
				break;
			case 5:
				cout<<"Eliminar dinosaurio"<<endl;
				for(int i=0; i<ListDino.size();i++){
					cout<<i<<". "<<ListDino[i]->getNombre()<<endl;
				}
				cin>>eliminadino;
				ListDino.erase(begin(ListDino)+eliminadino);
				break;
			case 6:
				cout<<"Eliminar cuidadores"<<endl;
				for(int i=0; i<ListCuida.size();i++){
					cout<<i<<". "<<ListCuida[i]->getNombre()<<endl;
				}
				cin>>eliminacuida;
				ListCuida.erase(begin(ListCuida)+eliminacuida);
				break;
				
			case 7:
				for(int i=0; i<ListDino.size();i++){
					cout<<i<<". "<<ListDino[i]->getNombre()<<endl;
				}
				break;
			case 8:
				for(int i=0; i<ListCuida.size();i++){
					cout<<i<<". "<<ListCuida[i]->getNombre()<<endl;
				}
				break;
			case 9:
				seguir=true;
				break;
		}
	}
	return 0;
}
