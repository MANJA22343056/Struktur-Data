/*
Nama File  : bubbleSortIteration.c
Nama       : Manja Fani Oktavia
NIM        : 22343056
*/

#include <stdio.h>
#include <stdbool.h>
#define MAX 10
int list[MAX] = {1,8,4,6,0,3,5,2,7,9};
void display() {
 	int i;
 	printf("[");
 	// navigate through all items 
 	for(i = 0; i < MAX; i++) {
 		printf("%d ",list[i]);
 	}
 	printf("]\n");
}
void bubbleSort() {
	int temp;
 	int i,j;
 	bool swapped = false;
 
 	// loop through all numbers 
 		for(i = 0; i < MAX-1; i++) { 
 			swapped = false;
 	// loop through numbers falling ahead 
 		for(j = 0; j < MAX-1-i; j++) {
 			printf(" Items compared: [ %d, %d ] ", 
list[j],list[j+1]);
 // check if next number is lesser than current no
 // swap the numbers. 
 // (Bubble up the highest number)
 
 	if (list[j]>list[j+1]){
 		temp =list[j];
 		list[j]=list[j+1];
 		list[j+1]=temp;
 		
 		swapped = true;
 		printf("=> swapped [%d ,%d] \n" , list[j],list[j+1]);
	 } else {
	 	printf("=> not swapped \n");
	 }
}
	// if no number was swapped that means 
 	// array is sorted now, break the loop. 
 	if(!swapped) {
 	break;
 }
 
 	printf("Iteration %d#: ",(i+1)); 
 	display();
 	}
}
int main() {
 	printf("Input Array: ");
 	display();
 	printf("\n");
 	
 	bubbleSort();
 	printf("\nOutput Array: ");
 	display();
}
