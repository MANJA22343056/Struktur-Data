/*  Nama File   :perc9structureADT.c
    Nama        :Manja Fani Oktaviaa
    Nim         :22343056
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nama[25];
    int nik;
    char alamat[30];
    char status[25];
} ktp;

int main(){
   ktp myktp;

  printf("Nama\t: ");
  gets(myktp.nama);
  printf("NIK \t: ");
  scanf("%i", &myktp.nik);fflush(stdin);
  printf("Alamat\t: ");
  gets(myktp.alamat);
  printf("Kewarganegaraan\t: ");
  gets(myktp.status);

}

