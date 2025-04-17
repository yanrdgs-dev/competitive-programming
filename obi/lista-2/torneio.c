#include <stdio.h>

int main(void) {
    int venceu = 0;
    int perdeu = 0;
    for (int i = 0; i < 6; i++) {
        char resultado;
        scanf(" %c", &resultado);
        if (resultado == 'V') {
            venceu++;
        } else {
            perdeu++;
        }
    }

    if (venceu ==  5 || venceu == 6) {
        printf("1\n"); 
    } else if (venceu == 3 || venceu == 4) {
        printf("2\n");
    } else if (venceu == 1 || venceu == 2) {
        printf("3\n");
    } else {
        printf("-1\n");
    }
}