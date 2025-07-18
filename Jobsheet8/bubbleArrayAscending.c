/*
Nama File  : bubbleArrayAscending.c
Nama       : Manja Fani Oktavia
NIM        : 22343056
*/

#include <stdio.h>
void bubbleSort(int array[], int size)
{
 	for (int step = 0; step < size - 1; ++step)
 	{
 		for (int i = 0; i < size - step - 1; ++i)
 		{
 	// To sort in descending order, change">" to "<".
 	if (array[i] > array[i + 1])
 	{
			int temp = array[i];
		 	array[i] = array[i + 1];
		 	array[i + 1] = temp;
		 	}
 		}
 	}
}
void printArray(int array[] , int size)
{
	for(int i = 0 ; i<size ;i++)
	{
		printf("%d", array[i]);
	}
	printf("\n");
}
int main (){
	int data[] = {-2, 45, 0, 11, -9};
 	int size = sizeof(data) / sizeof(data[0]);
 	bubbleSort(data, size);
 	printf("Sorted Array in Ascending Order:\n");
 	printArray(data, size);
}