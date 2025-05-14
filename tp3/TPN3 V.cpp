#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese cantidad de elementos: ";
    cin >> n;
    bool encontrado = false;
    int vect[100];

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vect[i];
    }

    int buscar;
    cout << "Ingrese el valor a buscar: ";
    cin >> buscar;

    
    for (int i = 0; i < n; i++) {
        if (vect[i] == buscar) {
            encontrado = true;
            cout << "Valor encontrado en la posicion " << i << endl;
            break;
        }
    }

    if (!encontrado) {
        cout << "El valor no se encuentra.";
    }

    return 0;
}

