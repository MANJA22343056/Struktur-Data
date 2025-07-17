/* 
Nama File : perc5SelectionSortAscending.c
Programmer : Manja Fani Oktavia
NIM : 22343056
*/

#include <stdio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size)
{
  for (int step = 0; step < size - 1; step++)
  {
    int min_idx = step;
    for (int i = step + 1; i < size; i++)
  {
  if (array[i] < array[min_idx])
    min_idx = i;
  }
  swap(&array[min_idx], &array[step]);
  }
}

void printArray(int array[], int size)
{
  for(int i=0; i<size; ++i)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main()
{
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  printf("Data before sorting :\n");
  for(int i=0; i<size; ++i)
  {
    printf("%d ", data[i]);
  }
  printf("\n");
  printf("Sorted array in Acsending Order:\n");
  printArray(data, size);
}
