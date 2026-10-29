#include <stdio.h>
#include <stdlib.h>

void intercambiar(int *a, int *b);

void ordenar_tres(int *a, int *b, int *c);

int main() {

    int *nums = (int*)malloc(3 * sizeof(int));

    if (nums == NULL) {
        fprintf(stderr, "error: out of memory\n");
        return 1;
    }

    scanf("%d %d %d", nums, nums + 1, nums + 2);

    printf("antes:    %d  %d  %d\n", *nums, *(nums + 1), *(nums + 2));

    ordenar_tres(nums, nums + 1, nums + 2);
    printf("después:  %d  %d  %d\n", *nums, *(nums + 1), *(nums + 2));

    free(nums);

    return 0;
}

void intercambiar(int *a, int *b) {

    if (a == NULL || b == NULL) return;

    int aux = *a;
    *a = *b;
    *b = aux;
}

void ordenar_tres(int *a, int *b, int *c) {

    if (a == NULL || b == NULL || c == NULL) return;

    if (*a > *b) intercambiar(a, b);
    if (*b > *c) intercambiar(b, c);
    if (*a > *b) intercambiar(a, b);
}
