#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);

    int particula = (n - 3) % 8;

    if (particula == 3) {
        printf("1\n");
    } else if (particula == 4) {
        printf("2\n");
    } else {
        printf("3\n");
    }
}