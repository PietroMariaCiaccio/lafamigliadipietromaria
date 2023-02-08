#include <stdio.h>

int main()
{

float Celsius;
float Kelvin;
float Fahrenheit;

printf("inserire un valore\n");
scanf("%f", &Celsius);

if (Celsius < -273.15)
{
    printf("errore\n");

}
else 
{
    Fahrenheit = (9/5)*Celsius + 32;
    Kelvin = Celsius + 273.15;
    printf("%f %f\n", Fahrenheit, Kelvin);
}





}
    