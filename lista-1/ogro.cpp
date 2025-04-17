#include <iostream>
using namespace std;

int main() {
    int mao_esquerda;
    int mao_direita;

    cin >> mao_esquerda;
    cin >> mao_direita;

    int resultado;
    if (mao_esquerda > mao_direita) {
        resultado = mao_esquerda + mao_direita;
    } else {
        resultado = 2 * (mao_direita - mao_esquerda);
    }

    cout << resultado << endl;
}