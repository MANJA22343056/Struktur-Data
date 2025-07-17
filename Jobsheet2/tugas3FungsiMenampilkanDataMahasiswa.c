/*  Nama File   :tugas3FungsiMenampilkanDataMahasiswa.c
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

int main() {
  struct Mahasiswa m1 = {"Manja Fani Oktavia", 19, 3.85};


void tampilData(struct Mahasiswa m) {
  printf("Nama : Manja Fani oktavia\n");
  printf("Nim  : 22343056\n\n");
  printf("Nama : %s\n", m.nama);
  printf("Usia : %d\n", m.usia);
  printf("IPK  : %.2f\n", m.ipk);
}
   tampilData(m1);
  return 0;
}

