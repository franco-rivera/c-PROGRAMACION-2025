#include <iostream>
using namespace std;

int main() {
    int N = 10;
    int numeros[N];
    int maximo, minimo;

    
    cout << "Ingrese 10 numeros:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    maximo = minimo = numeros[0];

    for (int i = 1; i < N; i++) {
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }
        if (numeros[i] < minimo) {
            minimo = numeros[i];
        }
    }

    
    
    cout << "El valor maximo es: " << maximo << endl;
    cout << "El valor minimo es: " << minimo << endl;

    return 0;
}

