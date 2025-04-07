#include <iostream>
using namespace std;

int C(int numero) {
    if (numero < 10) return 1;
    else if (numero < 100) return 2;
    else if (numero < 1000) return 3;
    else return -1;
}

int main() {
    int numero;
    cout << "Ingrese un numero entero positivo de hasta tres cifras: ";
    cin >> numero;

    if (numero < 0) {
        cout << "el numero debe ser positivo." << endl;
    } 
	
	else {
        int cifras = C(numero);
        
        if (cifras == 1)
            cout << "El numero tiene 1 cifra." << endl;
        else if (cifras == 2)
            cout << "El numero tiene 2 cifras." << endl;
        else if (cifras == 3)
            cout << "El numero tiene 3 cifras." << endl;
        else
            cout << "el numero tiene más de 3 cifras." << endl;
    }

    return 0;
}
