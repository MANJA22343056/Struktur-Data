/*  Nama File   :tugas1StructDataMahasiswa.c
    Nama        :Manja Fani Oktavia
    Nim         :22343056
*/

#include <stdio.h>
#include <string.h>

struct Tanggal {
  int tanggal;
  int bulan;
  int tahun;
};

struct Mahasiswa {
  int NIM;
  char nama[30];
  struct Tanggal tgl;
  float IPK;
};

int main() {
  struct Mahasiswa m1 = {22343056, "Manja", {18, 10, 2003}, 3.85};

  printf("Nama : Manja Fani Oktavia\n");
  printf("Nim  : 22343056\n\n");
  printf("Data mahasiswa :\n");
  printf("NIM           : %d\n", m1.NIM);
  printf("Nama          : %s\n", m1.nama);
  printf("Tanggal Lahir : %d-%d-%d\n", m1.tgl.tanggal, m1.tgl.bulan, m1.tgl.tahun);
  printf("IPK           : %.2f\n", m1.IPK);

  return 0;
}


