/*
Nama File : tugas1SequentialSearch.c
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

int main() {
    struct Mahasiswa data[5] = {
        {22343056, "Manja", "Suliki, 18 Oktober 2003", 3.75},
        {22343088, "Einstein", "Bandung, 2 Februari 2001", 3.90},
        {22343089, "Tesla", "Surabaya, 3 Maret 2002", 3.80},
        {22343090, "Ojil", "Yogyakarta, 4 April 2003", 3.60},
        {22343091, "Mamo", "Semarang, 5 Mei 2004", 3.95}
    };

    int n = 5;
    int i, cariNIM;
    int indeks = -1; // inisialisasi indeks pencarian
    printf("Masukkan NIM yang ingin dicari: ");
    scanf("%d", &cariNIM);

    // sequential search
    for (i = 0; i < n; i++) {
        if (data[i].nim == cariNIM) {
            indeks = i; // simpan indeks pencarian
            break; // keluar dari loop
        }
    }

    // tampilkan hasil pencarian
    if (indeks == -1) {
        printf("Data tidak ditemukan!\n");
    } else {
        printf("Data ditemukan:\n");
        printf("NIM\t: %d\n", data[indeks].nim);
        printf("Nama\t: %s\n", data[indeks].nama);
        printf("TTL\t: %s\n", data[indeks].ttl);
        printf("IPK\t: %.2f\n", data[indeks].ipk);
    }

    return 0;
}
