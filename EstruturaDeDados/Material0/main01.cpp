#include <iostream>

using namespace std;

int main()
{
    float peso, altura, IMC;

    cout << "Informe o seu peso: ";
    cin >> peso;

    cout << "Informe sua altura: ";
    cin >> altura;

    IMC = peso / (altura * altura);

    if (IMC < 20){
        cout << "Voc� est� abaixo do peso";
    }
    else if(IMC >=20 && IMC < 25){
        cout << "Voc� est� no peso ideal";
    }
    else{
        cout << "Voc� est� acima do peso";
    }

}
