/*  Nama File   :perc8ADT.c
    Nama        :Manja Fani Oktaviaa
    Nim         :22343056
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef int angka;
typedef char huruf;

  int main(){

angka umur;
huruf h;
huruf nama[10];

printf("Masukkan umur anda : ");
scanf("%d",&umur);fflush(stdin);
printf("Umur anda adalah %d",umur);
printf("\nMasukkan huruf : ");
    h=getche();
printf("\nHuruf anda %c",h);
printf("\nMasukkan nama : ");
scanf("%s",nama);fflush(stdin);
printf("Nama anda %s",nama);

getch();
}

