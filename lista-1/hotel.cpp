#include <iostream>
using namespace std;

int main() {
    int valor_dia1;
    int aumento;
    int dia_chegada;
    int diarias;

    cin >> valor_dia1;
    cin >> aumento;
    cin >> dia_chegada;

    diarias = 32 - dia_chegada;

    if (dia_chegada >= 16) {
        dia_chegada = 15;
    }

    int valor = diarias * (valor_dia1 + ((dia_chegada - 1)  * aumento));
    
    if (dia_chegada == 1) {
        valor = diarias * valor_dia1;
    } else if (dia_chegada == 2) {
        valor  = diarias * (dia_chegada + aumento);
    }


    cout << valor << endl;
}