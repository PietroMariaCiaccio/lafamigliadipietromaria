#include <stdio.h>

int main()
{
   int a;
    
   
    printf("inserisci un valore\n");
    scanf("%d", &a);

   

    if (a < 18)
    {
        printf("minorenne\n");
    } 
    else
    {
        printf("maggiorenne\n");
    }
}