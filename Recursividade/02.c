#include <stdio.h>

int comm(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    if (k > n) {
        return 0;
    }

    return comm(n - 1, k) + comm(n - 1, k - 1);
}

int main(void) {
    int k, n;

    printf("Insira o total de pessoas (n): ");
    scanf("%d", &n);

    printf("Insira o tamanho do grupo (k): ");
    scanf("%d", &k);

    printf("Será possível formar %d grupos\n", comm(n, k));

    return 0;
}