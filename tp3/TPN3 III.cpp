#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese cantidad de elementos: ";
    cin >> n;

    int vec[100];

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vec[i];
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }

    cout << "Vector ordenado: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }

    return 0;
}

