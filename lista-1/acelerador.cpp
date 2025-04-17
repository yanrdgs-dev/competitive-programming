#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int particula = (n - 3) % 8;

    if (particula == 3) {
        cout << "1" << endl;
    } else if (particula == 4) {
        cout << "2" << endl;
    } else {
        cout << "3" << endl;
    }
}