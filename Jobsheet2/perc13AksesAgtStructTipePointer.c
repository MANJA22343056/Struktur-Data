/*  Nama File   :perc13AksesAgtStructTipePointer.c
    Nama        :Manja Fani Oktaviaa
    Nim         :22343056
*/

#include <stdio.h>

struct person
{
	int age;
	float weight;

};
int main()
{

	struct person *personPtr,person1;
	personPtr = &person1;
	printf("Enter age : ");
	scanf("%d",&personPtr->age);
	printf("Enter weight : ");
	scanf("%f",&personPtr->weight);
	printf("Displaying :\n");
	printf ("Age : %d\n",personPtr->age);
	printf("weight : %2f",personPtr->weight);

	return 0;
}
