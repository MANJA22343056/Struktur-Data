/*  Nama File   :perc10ADT.c
    Nama        :Manja Fani Oktaviaa
    Nim         :22343056
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
   int HH, MM, SS;
} jam;

void tampil(jam j) {
     printf("JAM %d:%d:%d\n", j.HH, j.MM, j.SS);
}
int valid(jam j)  {

     return j.HH >= 0 && j.HH <= 23
     && j.MM >= 0 && j.MM <= 59
     && j.SS >= 0 && j.SS <= 59
;
}

   jam input() {
    jam j;
do {
    printf("Masukkan Jam = ");
    scanf("%d", &j.HH); fflush(stdin);
    printf("Masukkan Menit = ");
    scanf("%d", &j.MM);fflush(stdin);
    printf("Masukkan Second = ");
    scanf("%d", &j.SS);fflush(stdin);
}
    while (!valid(j));
    return j;
}
    int main(){
    jam j;
    j = input();
    tampil(j);

return 0;
}

