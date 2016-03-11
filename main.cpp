#include <iostream>
#include <vector>
#include "racional.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int menu();
void imprimir(vector<Racional>);

int main(int argc, char const *argv[]){
	int op=menu();
	vector<Racional> racionales;
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
		}else if(op==3){

		}else if(op==4){

		}else if(op==5){

		}else if(op==6){

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
		cout<<i<<") "<<racionales.at(i).toString()<<endl;
	}
	return;
}