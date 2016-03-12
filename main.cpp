#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "racional.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::stringstream;

int menu();
void imprimir(vector<Racional>);
void historial(vector<string>);

int main(int argc, char const *argv[]){
	stringstream ss;
	int op=menu();
	int primero, segundo,resultado;
	vector<Racional> racionales;
	vector<string> lista;
	while (op!=7){
		if(op==1){
			int numerador, denominador;
			cout<<"Ingrese numerador: ";
			cin>>numerador;
			cout<<"Ingrese denominador: ";
			cin>>denominador;
			racionales.push_back(Racional(numerador,denominador));
		}else if(op==2){
			imprimir(racionales);
			cout<<"Posicion Primer Pacional: ";
			cin>>primero;
			cout<<"Posicion Segundo Racional: ";
			cin>>segundo;
			cout<<racionales.at(primero)<<" + "<<racionales.at(segundo)<<" = ";
			cout<<racionales.at(primero)+racionales.at(segundo)<<endl;
			ss<<racionales.at(primero)<<" + "<<racionales.at(segundo)<<" = "<<racionales.at(primero)+racionales.at(segundo);
			lista.push_back(ss.str());
			ss.str("");
		}else if(op==3){
			imprimir(racionales);
			cout<<"Posicion Primer Pacional: ";
			cin>>primero;
			cout<<"Posicion Segundo Racional: ";
			cin>>segundo;
			cout<<racionales.at(primero)<<" - "<<racionales.at(segundo)<<" = ";
			cout<<racionales.at(primero)-racionales.at(segundo);
			ss<<racionales.at(primero)<<" - "<<racionales.at(segundo)<<" = "<<racionales.at(primero)-racionales.at(segundo);;
			lista.push_back(ss.str());
			ss.str("");
		}else if(op==4){
			imprimir(racionales);
			cout<<"Posicion Primer Pacional: ";
			cin>>primero;
			cout<<"Posicion Segundo Racional: ";
			cin>>segundo;
			cout<<racionales.at(primero)<<" * "<<racionales.at(segundo)<<" = ";
			cout<<racionales.at(primero)*racionales.at(segundo)<<endl;
			ss<<racionales.at(primero)<<" * "<<racionales.at(segundo)<<" = "<<racionales.at(primero)*racionales.at(segundo);
			lista.push_back(ss.str());
			ss.str("");
		}else if(op==5){
			imprimir(racionales);
			cout<<"Posicion Primer Pacional: ";
			cin>>primero;
			cout<<"Posicion Segundo Racional: ";
			cin>>segundo;
			cout<<racionales.at(primero)<<" / "<<racionales.at(segundo)<<" = ";
			cout<<racionales.at(primero)/racionales.at(segundo)<<endl;
			ss<<racionales.at(primero)<<" / "<<racionales.at(segundo)<<" = "<<racionales.at(primero)/racionales.at(segundo);
			lista.push_back(ss.str());
			ss.str("");
		}else if(op==6){
			historial(lista);
		}
		op=menu();
	}
	return 0;
}

int menu(){
	int opcion;
	cout<<"-----MENU----"<<endl;
	cout<<"1) Crear Racionales"<<endl;
	cout<<"2) Suma de Racionales"<<endl;
	cout<<"3) Resta de Racionales"<<endl;
	cout<<"4) Multiplicacion de Racionales"<<endl;
	cout<<"5) Division de Racionales"<<endl;
	cout<<"6) Ver Historial de Operaciones"<<endl;
	cout<<"7) Salir"<<endl;
	cin>>opcion;
	return opcion;
}

void imprimir(vector<Racional> racionales){
	for (int i = 0; i < racionales.size(); ++i){
		cout<<i<<") "<<racionales.at(i)<<endl;
	}
	return;
}

void historial(vector<string> lista){
	for (int i = 0; i < lista.size(); ++i){
		cout<<i<<") "<<lista.at(i)<<endl;
	}
	return;
}


