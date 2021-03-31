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




    do
    {
    printf ("Nacisnij 1 jesli chcesz obliczyc prostokat \nNacisnij 2 jesli chcesz obliczyc trojkat \nInna liczba = brak opcji\n");


    fflush(stdin);

    scanf ("%d", &liczba);

    switch(liczba)
{


case 1:
    printf ("\nPodaj dlugosc boku a\n");
    scanf ("%f", &a);
    printf ("\nPodaj dlugosc boku b\n");
    scanf ("%f", &b);

    pole_prostokata = ((a*b));

    printf("\nPole prostokata wynosi:%.2f\n\n", pole_prostokata);
break;

case 2:

    printf ("\nPodaj dlugosc boku a\n");
    scanf ("%f", &a);
    printf ("\nPodaj dlugosc boku h\n");
    scanf ("%f", &h);
    pole_trojkata = (a * h)/2;
    printf("\nPole trojkata wynosi:%.2f\n\n", pole_trojkata);



}

    }while(liczba > 0);




    return 0;



}
