#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese cantidad de elementos: "<<endl;
    cin >> n;

    int vec[100];

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": "<<endl;
        cin >> vec[i];
    }

    
    for (int i = 1; i < n; i++) {
        int actual = vec[i];
        int j = i - 1;
        while (j >= 0 && vec[j] > actual) {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = actual;
    }

    cout << "Vector ordenado: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }

    return 0;
}

