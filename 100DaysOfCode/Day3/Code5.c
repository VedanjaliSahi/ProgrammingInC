// Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main() {
    float Celsius, Fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &Celsius);
Fahrenheit= (Celsius*9/5)+32;
    printf("%.2f Celsius= %.2f Fahrenheit/n , Celcius , Fahrenheit");
    return 0;
}