#include <stdio.h>

int main(void) {
    int idade_monica;
    int idade_filho1;
    int idade_filho2;

    scanf("%d", &idade_monica);
    scanf("%d", &idade_filho1);
    scanf("%d", &idade_filho2);    

    int idade_filho3 = idade_monica - idade_filho1 - idade_filho2;

    if (idade_filho1 > idade_filho2 && idade_filho1 > idade_filho3) {
        printf("%d\n", idade_filho1);
    } else if (idade_filho2 > idade_filho1 && idade_filho2 > idade_filho3) {
        printf("%d\n", idade_filho2);
    } else if (idade_filho3 > idade_filho1 && idade_filho3 > idade_filho2) {
        printf("%d\n", idade_filho3);
    }
}