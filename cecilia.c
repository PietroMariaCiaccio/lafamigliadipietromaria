#include <stdio.h>

int main ()
{
int a;
int b;

printf("inserire due valori\n");
scanf("%d %d", &a, &b);

if(a > b)
{
   printf("a è maggiore di b\n");
}
else if(a == b)
{
   printf("a è uguale a b\n");
}
else
{
   printf("a è minore di b\n");
}
}