#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int verifica_completo(int naipe[]); 

int main() {
    char linha[156];
    scanf("%s", linha);
    int qtd = strlen(linha) / 3;
    char matriz[qtd][4];
    int pos = 0;
    for (int i = 0; i < qtd; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = linha[pos++];
            matriz[i][3] = '\0';
        }
    }

    int copas[13];
    int espadas[13];
    int ouros[13];
    int paus[13];

    for (int i = 0; i < 13; i++) {
        copas[i] = espadas[i] = ouros[i] = paus[i] = 0;
    }

    for (int i = 0; i < qtd; i++) {
        int numero_carta = (matriz[i][0] - '0')*10 + (matriz[i][1] - '0');
        switch (matriz[i][2]) {
            case 'C':
                copas[numero_carta - 1]++;
                break;
            case 'E':
                espadas[numero_carta - 1]++;
                break;
            case 'U':
                ouros[numero_carta - 1]++;
                break;
            case 'P':
                paus[numero_carta - 1]++;
                break;
        }               
    }

    int aux = verifica_completo(copas);
    if (aux == -1) {
        printf("erro\n");
    } else {
        printf("%d\n", aux);
    }

    aux = verifica_completo(espadas);
    if (aux == -1) {
        printf("erro\n");
    } else {
        printf("%d\n", aux);
    }
    aux = verifica_completo(ouros);
    if (aux == -1) {
        printf("erro\n");
    } else {
        printf("%d\n", aux);
    }
    aux = verifica_completo(paus);
    if (aux == -1) {
        printf("erro\n");
    } else {
        printf("%d\n", aux);
    }
}

int verifica_completo(int naipe[]) {
    int aux = 0;
    for (int i = 0; i < 13; i++) {
        if (naipe[i] > 1) {
            return -1;
        }
        if (naipe[i] == 0) {
            aux++;
        }
    }
    
    return aux;
} 