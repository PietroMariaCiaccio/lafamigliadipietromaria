#include <stdio.h>

int main ()
{
int a;

printf("inserire eta\n");
scanf("%d", &a);

if(a >= 18)
{
   printf("utente maggiorenne\n");
}

else
{
   printf("utente minorenne\n");
}
}