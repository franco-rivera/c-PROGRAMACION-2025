#include <iostream>
using namespace std;

int consultarSaldo(int saldo) {
	cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
    cout << "Su saldo actual es: $" << saldo << endl;
    cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
    
	return saldo;
}

int ingresarDinero(int saldo) {
    int monto;
    cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
    cout << "Ingrese el monto a ingresar: $" <<endl;
    cin >> monto;
	cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
    
    saldo += monto;
    cout << "Saldo actualizado: $" << saldo << endl;
    cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
    
	return saldo;
}

int retirarDinero(int saldo) {
    int monto;
    cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
    cout << "Ingrese el monto a retirar: $"<<endl;
    cin >> monto;
	cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
    
	cin >> monto;
    if (monto <= saldo) {
        saldo -= monto;
        cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
        cout << "Retiro exitoso. Saldo restante: $" << saldo << endl;
    } else {
    	cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
        cout << "Saldo insuficiente." << endl;
        cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
    
	}
    return saldo;
}

int main() {
    int saldo = 10000;
    int opcion;

    cout << "=== Cajero Automatico ===" << endl;

    do {
        cout << endl;
        cout << "para CONSULTAR SALDO presione 1" << endl;
        cout << "para INGRESAR DINERO presione 2" << endl;
        cout << "para RETIRAR DINERO presione 3" << endl;
        cout << "para SALIR presione 4" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                saldo = consultarSaldo(saldo);
                break;
            case 2:
                saldo = ingresarDinero(saldo);
                break;
            case 3:
                saldo = retirarDinero(saldo);
                break;
            case 4:
                cout << "Gracias por usar el cajero. Adios!" << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
                break;
        }
    } while (opcion != 4);

    return 0;
}

