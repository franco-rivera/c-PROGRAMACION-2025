#include <iostream>
using namespace std;

void Nivel(float porcentaje) {
    
	if (porcentaje >= 90) {
        cout << "Nivel maximo" << endl;
    } 
	
	else if (porcentaje >= 75) {
        cout << "Nivel medio" << endl;
    }
	
	 else if (porcentaje >= 50) {
        cout << "Nivel regular" << endl;
    }
	
	 else {
        cout << "Fuera de nivel" << endl;
    }

}

int main() {
    int total;
	int correctas;


    cout << "Ingrese el total de preguntas: ";
    cin >> total;

    cout << "Ingrese la cantidad de respuestas correctas: ";
    cin >> correctas;

 float porcentaje = (float)correctas / total * 100;

    mostrarNivel(porcentaje);

    return 0;
}

