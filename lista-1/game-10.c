#include <stdio.h>

int main (void) {
    int n;
    int alien_pos;
    int plane_pos;

    scanf("%d", &n);
    scanf("%d", &alien_pos);
    scanf("%d", &plane_pos);
    int presses;
    
    if (plane_pos == alien_pos) {
        presses = 0;
    }
    else if (plane_pos < alien_pos) {
        presses = alien_pos - plane_pos;
    } else {
        presses = (n - plane_pos) + alien_pos;
    }

    printf("%d\n", presses);
}       