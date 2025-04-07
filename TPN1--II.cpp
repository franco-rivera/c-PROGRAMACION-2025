//NO SE PIDE EL EJERCICIO CON FUNCIONES

#include<iostream>
using namespace std;

int main(){
	int nota1;
	int nota2;
	int nota3;
	int prom;
	cout<<"ingrese la nota 1: ";
	cin>>nota1;
		cout<<"ingrese la nota 2: ";
	cin>>nota2;
		cout<<"ingrese la nota 3: ";
	cin>>nota3;
	
	prom=(nota1+nota2+nota3)/3;
	
	if(prom>=7){
	 cout<<"aprobado"<<endl;
	}
	else if(prom>=4){
		cout<<"regular"<<endl;
	}
	else{
		cout<<"reprobado"<<endl;
	}
	return 0;
}
