#include <iostream>
using namespace std;

int main () {
    int cor1;
    int cor2;
    int cor3;
    int cor4;
    
    cin >> cor1 >> cor2 >> cor3 >> cor4;

    if ((cor1 == cor3) || (cor2 == cor4)) {
        cout << "V" << endl;
    } else {
        cout << "F" << endl;
    }
}