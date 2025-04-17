#include <stdio.h>

int main (void) {
    int otavio;
    int mais_novo;
    int mais_velho;

    scanf("%d", &mais_novo);
    scanf("%d", &otavio);
    int diff_novo = otavio - mais_novo;
    mais_velho = diff_novo + otavio;
    printf("%d\n", mais_velho);
    
    return 0;
}