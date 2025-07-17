/*  Nama File   :tugas1Fibonacci.c
    Nama        :Manja Fani Oktavia
    Nim         :22343056
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i;
  int* fib;

  printf("Masukkan nilai n: ");
  scanf("%d", &n);fflush(stdin);

  fib = (int*)malloc(n * sizeof(int));

  if (fib == NULL) {
    printf("Error!");
    exit(1);
  }

  fib[0] = 0;
  fib[1] = 1;

  for (i = 2; i < n; i++) {
    fib[i] = fib[i-1] + fib[i-2];
  }

  printf("Deret fibonacci: ");
  for (i = 0; i < n; i++) {
    printf("%d ", fib[i]);
  }
  printf("\n");

  free(fib);

  return 0;
}
