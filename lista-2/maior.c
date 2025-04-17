#include <stdio.h>

int main(void) {
    int m, n, s;
    scanf("%d %d %d", &n, &m, &s);

    int soma = 0;
    int soma_anterior = 0;
    for (int i = n; i <= m; i++) {
        int num = i;
        while (num > 0) {
            int digito = num % 10;
            soma = soma + digito;
            num = num / 10;
        }
        soma_anterior = soma;
        soma = 0;
    }
    if (soma_anterior == s) {
        printf("%d\n", soma_anterior);
    } else {
        printf("%d\n", soma_anterior);
    }
}