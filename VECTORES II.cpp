#include<iostream>
using namespace std;

int main(){
	
	int VECTOR [5]={1,3,5,7,9};
	int suma;
	int PROM;
    suma=VECTOR[0]+VECTOR[1]+VECTOR[2]+VECTOR[3] +VECTOR[4];
	PROM=suma / 5;
	
	cout<<"sumado es: "<<suma<<endl;
	
	cout<<"el promedio es: "<<PROM<<endl;
	
	return 0;
}
