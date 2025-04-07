#include <iostream>
using namespace std;

bool men10(int num1, int num2, int num3) {
    return (num1 < 10) && (num2 < 10) && (num3 < 10);
}


int main() {
    int num1, num2, num3;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;
    
    if (men10(num1, num2, num3)) {
        cout<<"todos los numeros ingresados son menores a diez";
    }
    
    else{
    	cout<<"algo no esta bien"<<endl;
    }

    return 0;
}
