/*
    Nama File   : lat1Deque.c
    Nama        : Manja Fani Oktavia
    Nim         : 22343056
*/

#include<stdio.h>
#define ukuran 5

void enQueue(int);
void deQueue();
void tampilkan();
int items[ukuran], depan = -1, belakang = -1;
void enQueue(int value){
	 if(belakang == ukuran-1)
	 	printf("\nQueue telah penuh!");
	 else {
	 	if(depan == -1)
		depan = 0;
	 	belakang++;
	 	items[belakang] = value;
	 	printf("\nNilai ditambahkan -> %d", value);
	 }
}
void deQueue(){
	 if(depan == -1)
	 	printf("\nQueue kosong!!");
	 else{
	 	printf("\nNilai dihapus adalah : %d", items[depan]);
	 	depan++;
	 if(depan > belakang)
	 	depan = belakang = -1;
	 }
}
void tampilkan(){
	 if(belakang == -1)
	 	printf("\nQueue kosong!!!");
	 else{
	 	int i;
	 	printf("\nElemen pada Queue adalah:\n");
	 for(i=depan; i<=belakang; i++)
	 	printf("%d\t",items[i]);
 	}
}

int main(){
	enQueue(1);
	enQueue(2);
	enQueue(3);
	enQueue(4);
	enQueue(5);
	tampilkan();
	deQueue();
	tampilkan();
	return 0;	
}

