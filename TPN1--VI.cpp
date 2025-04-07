#include <iostream>
using namespace std;

void descuento(int N_ENTRADA, int entrada) {
    if (N_ENTRADA > 4 || N_ENTRADA < 1) {
        cout << "No podes comprar mas de 4" << endl;
    } else {
        float total = N_ENTRADA * entrada;
        float descuento = 0;

        if (N_ENTRADA == 4) {
            descuento = 0.20;
        } else if (N_ENTRADA == 3) {
            descuento = 0.15;
        } else if (N_ENTRADA == 2) {
            descuento = 0.10;
        }

        float precioFinal = total * (1 - descuento);

        if (descuento > 0) {
            cout << "Hay descuento disponible "<<descuento<<"% Total a pagar: $" << precioFinal << endl;
        } else {
            cout << "No hay descuento. Total a pagar: $" << total << endl;
        }
    }
}

int main() {
    int N_ENTRADA;
    int entrada = 100;

    cout << "Seleccionar entradas a comprar (MAXIMO 4): ";
    cin >> N_ENTRADA;

    descuento(N_ENTRADA, entrada);

    return 0;
}

