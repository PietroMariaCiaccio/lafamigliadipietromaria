#include <stdio.h>

int main ()
{
int a;
int b; 

printf("inserisci un numero a\n");
scanf("%d", &a);
printf("inserisci un numero b\n");
scanf("%d", &b);
int risultato = a / b;
printf("divisione di a e b: %d/n", risultato);
}