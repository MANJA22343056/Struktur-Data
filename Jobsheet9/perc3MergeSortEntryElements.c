/* 
Nama File : perc3MergeSortEntryElements.c
Programmer : Manja Fani Oktavia
NIM : 22343056
*/

#include <stdio.h>
// function to sort the subsection a[i .. j] of the array a[]

void merge_sort(int i, int j, int a[], int aux[]) {
  if (j <= i) {
  return; // the subsection is empty or a single element
  }
  int mid = (i + j) / 2;
  // left sub-array is a[i .. mid]
  // right sub-array is a[mid + 1 .. j]

  merge_sort(i, mid, a, aux); // sort the left sub-array recursively
  merge_sort(mid + 1, j, a, aux); // sort the right subarray recursively
  int pointer_left = i; // pointer_left points to the beginning of the left sub-array
  int pointer_right = mid + 1; // pointer_right points to the beginning of the right sub-array
  int k; // k is the loop counter
  // we loop from i to j to fill each element of the finalmerged array
  for (k = i; k <= j; k++) {
    if (pointer_left == mid + 1) { // left pointer has reached the limit
      aux[k] = a[pointer_right];
      pointer_right++;
  } else if (pointer_right == j + 1) { // rightpointer has reached the limit
      aux[k] = a[pointer_left];
      pointer_left++;
  } else if (a[pointer_left] < a[pointer_right]) {
  // pointer left points to smaller element
      aux[k] = a[pointer_left];
      pointer_left++;
  } else { // pointer right points to smaller element
      aux[k] = a[pointer_right];
      pointer_right++;
  }
  }
  for (k=1; k<=j; k++){ //copy the elements from aus[] to a[]
    a[k] = aux[k];
  }
}

int main() {
  int a[100], aux[100], n, i, d, swap;
  printf("Masukan jumlah elemen didalam array:\n");
  scanf("%d", &n);
  printf("Masukan %d bilangan integer\n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
    merge_sort(0, n - 1, a, aux);
    printf("Menampilkan array yang telah diurutkan:\n");
  for (i = 0; i < n; i++)
    printf("%d\n", a[i]);
  return 0;
}
