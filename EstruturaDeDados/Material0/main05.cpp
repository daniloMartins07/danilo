#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    double precoEtiqueta, precoFinal;
    int codigoPag;


    cout << "Informe o pre�o de etiqueta:";
    cin >> precoEtiqueta;

    cout << "Informe o codigo da condi��o de pagaento:" << endl;
    cout << "1 - A vista em dinheiro, com 10% de desconto." << endl;
    cout << "2 - A vista com cart�o de credito, com 5% de desconto." << endl;
    cout << "3 - Em 2x, pre�o normal de etiqueta sem juros." << endl;
    cout << "4 - Em 3x, pre�o de etiqueta com acr�scimo de 10%." << endl;
    cout << ".................................................." << endl;
    cin >> codigoPag;

    switch (codigoPag) {
    case 1:
        precoFinal = precoEtiqueta * 0.90;
        cout << "A vista em dinheiro ou cheque.";
        break;
    case 2:
        precoFinal = precoEtiqueta * 0.95;
        cout << "A vista com cart�o de cr�dito";
        break;
    case 3:
        precoFinal = precoEtiqueta;
        cout << "Em 2x, sem juros";
        break;
    case 4:
        precoFinal = precoEtiqueta * 1.10;
        cout << "Em 3x, com acr�scimo";
        break;
    default:
        cout << "Codigo invalido";


    }


    cout << "Valor a pagar: " << precoFinal << endl;

}
