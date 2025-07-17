/*  Nama File   :tugas2primes.c
    Nama        :Manja Fani Oktavia
    Nim         :22343056
*/
#include <stdio.h>
#include <stdlib.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, m, count = 0;
    int *primes = NULL;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);fflush(stdin);

    printf("Masukkan ukuran awal array: ");
    scanf("%d", &m);fflush(stdin);

    primes = (int *) malloc(m * sizeof(int));

    for (int i = 2; count < n; i++) {
        if (is_prime(i)) {
            primes[count] = i;
            count++;
            if (count == m) {
                m *= 2;
                primes = (int *) realloc(primes, m * sizeof(int));
            }
        }
    }

    printf("Bilangan prima pertama %d adalah: \n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", primes[i]);
    }

    free(primes);
    return 0;
}
