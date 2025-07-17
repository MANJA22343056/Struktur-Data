/* 
Nama File :tugas1ShellSort.c
Programmer:Manja Fani Oktavia
Nim :22343056

Menggunakan gap untuk memisahkan elemen-elemen dalam array.
*/

#include <stdio.h>

void shellSort(int arr[], int n) {
    int gap, i, j, temp;
    // Set gap awal dengan n/2
    for (gap = n / 2; gap > 0; gap /= 2) {
        // Lakukan insertion sort untuk setiap gap
        for (i = gap; i < n; i++) {
            temp = arr[i];
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main() {
    int arr[] = {9, 8, 3, 7, 5, 6, 4, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    shellSort(arr, n);
    printf("Array yang sudah diurutkan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}