#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    char liczba;


    float a;
    float b;
    float pole_prostokata;

    printf ("Podaj dlugosc boku a - ");
    scanf ("%f", &a);
    printf ("Podaj dlugosc boku b - ");
    scanf ("%f", &b);

    pole_prostokata = ((a*b));

    printf("Pole prostokata wynosi:%.2f", pole_prostokata);


     return 0;



}
