 #include <stdio.h>

 int main()
 {

int n = 0;
int somma = 1;

printf("digita un numero\n");
scanf("%d", &n);

while(n >= 1)
{
    somma = n * somma;
    n = n - 1;
}

    printf("%d\n", somma);
 }