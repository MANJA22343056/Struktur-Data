/*  Nama File   :tugas2FungsiInputDataMahasiswa.c
    Nama        :Manja Fani Oktavia
    Nim         :22343056
*/

#include <stdio.h>
#include <string.h>

struct Mahasiswa {
  char nama[30];
  int usia;
  float ipk;
};

void inputData(struct Mahasiswa *m) {
  printf("Nama : Manja Fani Oktavia\n");
  printf("Nim  : 22343056\n\n");
  printf("Masukkan nama mahasiswa: ");
  scanf("%s", m->nama);
  printf("Masukkan usia mahasiswa: ");
  scanf("%d", &m->usia);
  printf("Masukkan IPK mahasiswa: ");
  scanf("%f", &m->ipk);
}

int main() {
  struct Mahasiswa m1;
  inputData(&m1);

  printf("\nData mahasiswa:\n");
  printf("Nama: %s\n", m1.nama);
  printf("Usia: %d\n", m1.usia);
  printf("IPK: %.2f\n", m1.ipk);

  return 0;
}

