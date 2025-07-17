/*
Nama File : tugas1BinarySearch.c
Programmer: Manja Fani Oktavia
Nim : 22343056
*/
#include <stdio.h>
#include <string.h>

struct Mahasiswa {
    int nim;
    char nama[50];
    char ttl[50];
    float ipk;
};

int binarySearch(struct Mahasiswa arr[], int left, int right, int key) {
    if (right >= left) {
        int mid = left + (right - left) / 2;
 
        if (arr[mid].nim == key)
            return mid;
 
        if (arr[mid].nim > key)
            return binarySearch(arr, left, mid - 1, key);
 
        return binarySearch(arr, mid + 1, right, key);
    }
 
    return -1;
}

int main() {
    struct Mahasiswa data[5] = {
        {22343056, "Manja", "Suliki, 18 Oktober 2003", 3.75},
        {22343088, "Einstein", "Bandung, 2 Februari 2001", 3.90},
        {22343089, "Tesla", "Surabaya, 3 Maret 2002", 3.80},
        {22343090, "Ojil", "Yogyakarta, 4 April 2003", 3.60},
        {22343091, "Mamo", "Semarang, 5 Mei 2004", 3.95}
    };


    int n = sizeof(data) / sizeof(data[0]);
    int key = 22343056;
    int result = binarySearch(data, 0, n - 1, key);
 
    if (result == -1)
        printf("Data dengan NIM %d tidak ditemukan\n", key);
    else
        printf("Data ditemukan pada indeks ke-%d:\nNIM: %d\nNama: %s\nTTL: %s\nIPK: %.2f\n",
               result, data[result].nim, data[result].nama, data[result].ttl, data[result].ipk);
 
    return 0;
}
