#include <iostream>
#include <limits>

using namespace std;

int main() {
    const int DIAS_ANO = 10;
    double temperaturas[DIAS_ANO], soma = 0, mediaAnual;
    double menor = numeric_limits<double>::max();
    double maior = numeric_limits<double>::lowest();
    int diasAbaixoDaMedia = 0;

    cout << "Digite a temperatura m�dia de cada dia do ano:" << endl;
    for (int i = 0; i < DIAS_ANO; i++) {
        cout << "Dia " << i + 1 << ": ";
        cin >> temperaturas[i];
        soma += temperaturas[i];

        if (temperaturas[i] < menor) {
            menor = temperaturas[i];
        }
        if (temperaturas[i] > maior) {
            maior = temperaturas[i];
        }
    }

    mediaAnual = soma / DIAS_ANO;

    for (int i = 0; i < DIAS_ANO; i++) {
        if (temperaturas[i] < mediaAnual) {
            diasAbaixoDaMedia++;
        }
    }

    cout << "\nMenor temperatura do ano: " << menor << "�C" << endl;
    cout << "Maior temperatura do ano: " << maior << "�C" << endl;
    cout << "Temperatura m�dia anual: " << mediaAnual << "�C" << endl;
    cout << "N�mero de dias com temperatura abaixo da m�dia anual: " << diasAbaixoDaMedia << endl;

    return 0;
}
