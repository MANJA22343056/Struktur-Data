/*  Nama File   :perc2SingleLinkListWithoudtTypedef.c
    Nama        :Manja Fani Oktavia
    Nim         :22343056
*/
#include <stdio.h> 
#include <stdlib.h> 
 
struct node {
 int data;
 struct node *next;
}node;
 
int main() 
{ 
// pointer untuk mengakses data dari suatu alamat memori
// node berisi alamat dan kumpulan data yang dibungkus menjadi sebuah objek berupa struct
//malloc untuk mengalokasikan memori
 struct node* head = NULL; 
 struct node* second = NULL; 
 struct node* third = NULL; 
 
 head = (struct node*)malloc(sizeof(struct node)); 
 second = (struct node*)malloc(sizeof(struct node)); 
 third = (struct node*)malloc(sizeof(struct node)); 
 
 head->data = 1;
 head->next = second;
 second->data = 2;
 second->next = third;
 
 third->data = 3;
 third->next = NULL;
 
}