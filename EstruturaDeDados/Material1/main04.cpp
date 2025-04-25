#include <iostream>

using namespace std;

int main() {
    const int TAMANHO = 20;
    int numeros[TAMANHO];

    cout << "Digite 20 n�meros:" << endl;
    for (int i = 0; i < TAMANHO; i++) {
        cout << "N�mero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "\nN�meros na ordem inversa:" << endl;
    for (int i = TAMANHO - 1; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
