#include <iostream>
using namespace std;

int main() {
    float alturas[5];
    float suma = 0.0, promedio;
    int A = 0, B = 0;

    for (int i = 0; i < 5; i++) {
        cout << "¿Cuál es la altura de la persona " << i + 1 << "? (en metros): ";
        cin >> alturas[i];
        suma += alturas[i];
    }

    promedio = suma / 5.0;
    cout << "La altura promedio es: " << promedio << " metros" << endl;

    for (int i = 0; i < 5; i++) {
        if (alturas[i] > promedio)
            A++;
        else if (alturas[i] < promedio)
            B++;
    }

    cout << "Personas más altas que el promedio: " << A << endl;
    cout << "Personas más bajas que el promedio: " << B << endl;

    return 0;
}


