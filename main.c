#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    char liczba;


    float a;
    float b;
    float h;
    float pole_prostokata;
    float pole_trojkata;

    printf ("Podaj dlugosc boku a - ");
    scanf ("%f", &a);
    printf ("Podaj dlugosc boku b - ");
    scanf ("%f", &b);
    printf ("Podaj wysokosc h - ");
    scanf ("%f", &h);


    pole_prostokata = ((a*b));
    pole_trojkata = ((a*h))/2;

    printf("Pole prostokata wynosi:%.2f", pole_prostokata);
    printf("Pole trojkata wynosi:%.2f", pole_trojkata);


     return 0;



}
