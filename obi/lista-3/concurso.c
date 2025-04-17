#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int lo, int hi) {
    int pivot = arr[hi];
    int i = (lo - 1);

    for (int j = lo; j <= hi - 1; j++) {
        if (arr[j] > pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[hi]);
    return (i + 1);
}

void quicksort_decrescente(int arr[], int lo, int hi) {
    if (lo < hi) {
        int pi = partition(arr, lo, hi);

        quicksort_decrescente(arr, lo, pi - 1);
        quicksort_decrescente(arr, pi + 1, hi);
    }
}

int main (void) {
    int n, k;
    scanf("%d %d", &n, &k);
    int notas[n];

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &notas[i]);
    }

    quicksort_decrescente(notas, 0, n - 1);
    printf("%d\n", notas[k - 1]);
}
