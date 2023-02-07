#include <stdio.h>

int main ()
{
   char x = 'a' ;
   char y = 'b' ; 
   int num = 42;

printf("x era: %c\n", x);
printf("y era: %c\n", y);
printf("a era: %d\n", num);
printf("inseriisci due caratteri \n");
scanf("%c %c %d", &x, &y, &num);
printf("x è diventato: %c\n", x);   
printf("y è diventato: %c\n", y);
printf("ao\n");
}