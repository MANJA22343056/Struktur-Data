/* 
Nama File :tugas1QuickSort.c
Programmer:Manja Fani Oktavia
Nim :22343056

Terdapat elemen yang dijadikan pivot kemudian array dipecah menjadi dua bagian
*/

#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Cari pivot dengan melakukan partitioning
        int pi = partition(arr, low, high);
        // Lakukan quick sort pada dua bagian yang terpisah oleh pivot
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {9, 8, 3, 7, 5, 6, 4, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printf("Array yang sudah diurutkan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}