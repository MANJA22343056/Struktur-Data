/*  Nama File   :perc1AlokasiMemori.c
    Nama        :Manja Fani Oktavia
    Nim         :22343056
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct employee_st {
char name[40];
int id;
} Employee ;
 int main()
{
int myInt;
Employee john;
// dalam menggunakan alokasi memori kita memerluka perintah sizeof yang digunkan
//untuk ukuran berbagai tipe data,var,ataupun struktur
//untuk ukuran dari objek dalam byte
// dalam program ini menggunakan sizeof() unutk sebuah tipe data
printf("Size of int is %d\n",sizeof(myInt));
printf("Size of int is %d\n",sizeof(int));
printf("Size of Employee is %d\n",sizeof(Employee));
printf("Size of john is %d\n",sizeof(john));
printf("Size of char is %d\n",sizeof(char));
printf("Size of short is %d\n",sizeof(short));
printf("Size of int is %d\n",sizeof(int));
printf("Size of long is %d\n",sizeof(long));
printf("Size of float is %d\n",sizeof(float));
printf("Size of double is %d\n",sizeof(double));
return 0;
}
