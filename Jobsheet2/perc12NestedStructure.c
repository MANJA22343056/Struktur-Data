/*  Nama File   :perc12NestedStructure.c
    Nama        :Manja Fani Oktaviaa
    Nim         :22343056
*/

#include <stdio.h>

struct complex{
int imag;
float real;
};

struct number
{
    struct complex comp;
    int integers;

}num1,num2;

//buatlah nested struct sampai dengan 5 tingkat
int main()
{
	int i = 1;
  int j;
  while (i <= 10) {
    j = 1;
    while (j <= 5) {
      printf("%i * %i = %i\n",i,j,j*i);
      j++;
    }
    printf("\n");
    i++;
  }

}
