/*  Nama File   :perc6structure2.c
    Nama        :Manja Fani Oktaviaa
    Nim         :22343056
*/

#include <stdio.h>

struct Mahasiswa {
	char nama[50];
	char jurusan[50];
	int nilai;

};
typedef struct Mahasiswa data;
int main(void)
{
	data mhs01;
    char namanya[50];
    char jurusannya [50];

    printf("Nama Mahasiswa : \n");
    gets(namanya);fflush(stdin);
	strcpy(mhs01.nama,namanya);
	printf("Jurusan Mahasiswa : \n");
	gets(jurusannya);fflush(stdin);
	strcpy(mhs01.jurusan,jurusannya);
	strcpy(mhs01.jurusan,jurusannya);
	mhs01.nilai =100;

	printf("%s adalah mahasiswa jurusan %s ", mhs01.nama, mhs01.jurusan);
	printf("memperoleh nilai UAS %i  \n",mhs01.nilai);

	return 0;

}
