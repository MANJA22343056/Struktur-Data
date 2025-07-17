/*  Nama File   :perc11structPenambahanJarak.c
    Nama        :Manja Fani Oktaviaa
    Nim         :22343056
*/

//Program to add two distances (feet-in)

#include <stdio.h>
#include<stdlib.h>

struct Distance
{
    int feet;
    float inch;

}dist1,dist2,sum;

int main()
{
    printf("1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &dist1.feet);fflush(stdin);
    printf("Enter inch :");
    scanf("%f", &dist1.inch); fflush(stdin);
    printf("2nd distance\n");
    printf("Enter feet:");
    scanf("%d",&dist2.feet); fflush(stdin);
    printf("Enter inch: ");
    scanf("%f",&dist2.inch); fflush(stdin);

    //adding inches
    sum.inch=dist1.inch+dist2.inch;

    //changing to feet if insh is greater than 12
    while (sum.inch >=12)
    {
        ++sum.feet;
        sum.inch=sum.inch-12;
    }
    printf("sum of distances = %d\'-%.lf\"",sum.feet,sum.inch);

    return 0;
}



