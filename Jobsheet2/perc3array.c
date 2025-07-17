/*  Nama File   :perc3array.c
    Nama        :Manja Fani Oktaviaa
    Nim         :22343056
*/

#include <stdio.h>
#include <stdlib.h>
main(){

    int i,n,angka[5];

    printf("masukkan banyaknya bilangan :");
    scanf ("%d",&n); fflush(stdin);
    for ( i=0;i<n;i++){
        printf("masukkan angka ke %d:",i+1);
        scanf("%d",&angka[i]);fflush(stdin);
    }
    for ( i=0;i<n;i++){
        printf("angka ke %d: :%d\n",i+1,angka[i]);
    }
    getchar();

}
