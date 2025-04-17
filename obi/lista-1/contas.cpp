#include <iostream>
using namespace std;

int main() {
    int valor_total;
    int acougue;
    int farmacia;
    int padaria;

    cin >> valor_total;
    cin >> acougue;
    cin >> farmacia;
    cin >> padaria;
    
    int ans = 0;

    if (valor_total - acougue >= 0) {
        valor_total -= acougue;
        ans++;
    }
    if (valor_total - farmacia >= 0) {
        valor_total -= farmacia;
        ans++;
    }
    if (valor_total - padaria >= 0) {
        valor_total -= padaria;
        ans++;
    }

    cout << ans << endl;
}