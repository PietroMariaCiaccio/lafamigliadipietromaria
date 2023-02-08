#include <stdio.h>

int main()
{
    int a = 17;
    int b = 3;
    int divisione = a / b;
    int resto = a % b;
    int x;
    printf("la divisione di a e b è: %d\n", divisione);
    printf("il resto di a e b è: %d\n", resto);
    printf("inserisci un numero");
    scanf("%d\n", &x);
    printf ("x: %d\n", x);
}