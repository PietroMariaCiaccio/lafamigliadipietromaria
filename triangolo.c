#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("inserisci tre numeri\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a)
    {
        printf("è un triangolo\n");
        if((b == c && a != b ) || (a == c && b != c) || (a == b && c != a))
        {
            printf("è un triangolo isoscele\n");
        }
         else if(b == c && a == b)
        {
            printf("è un triangolo equilatero\n");
        }
        else
        {
            printf("è un triangolo scaleno\n");
        }

    }

    else
    {
        printf("non è un triangolo\n");
    }

}