#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("inserire due valori");
    scanf("%d %d", &a, &b);

    if(a % b == 0)
    {
        printf("a è multiplo di b\n");
    }
    else 
    {
        printf("non è multiplo\n");
    }
}