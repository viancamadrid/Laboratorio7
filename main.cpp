#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int menu();

int main(int argc, char const *argv[]){
	int op=menu();
	while (op!=7){
		if(op==1){

		}else if(op==2){

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
	cout<<"1) Crear Racionales"<<endl;
	cout<<"2) Suma de Racionales"<<endl;
	cout<<"3) Resta de Racionales"<<endl;
	cout<<"4) Multiplicacion de Racionales"<<endl;
	cout<<"5) Division de Racionales"<<endl;
	cout<<"6) Ver Historial de Operaciones"<<endl;
	cout<<"7) Salir"<<endl;
	cin>>opcion;
}