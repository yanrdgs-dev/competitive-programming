#include <stdio.h>
#include <ctype.h>
#include <string.h>

int validar_placa(const char placa[]) {
    int len = strlen(placa);

    if (len == 8) {
        if (isupper(placa[0]) && isupper(placa[1]) && isupper(placa[2])) {
            if (placa[3] == '-') {
                if (isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7])) {
                    return 1;
                } else {
                    return 0;
                }
            }
        }
    } else if (len == 7) {
        if (isupper(placa[0]) && isupper(placa[1]) && isupper(placa[2])) {
            if (isdigit(placa[3])) {
                if (isupper(placa[4])) {
                    if (isdigit(placa[5]) && isdigit(placa[6])) {
                        return 2;
                    } else {
                        return 0;
                    }
                } else {
                    return 0;
                }
            }
        }
    }
    return 0;
}

int main(void) {
    char placa[11];
    if (scanf("%10s", placa) == 1) {
        printf("%d\n", validar_placa(placa));
    }
    return 0;
}
