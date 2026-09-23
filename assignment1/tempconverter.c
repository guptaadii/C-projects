// Implement a C program to accept the temperature in Celsius and convert it into Fahrenheit. 
// Formula: Fahrenheit = (Celsius × 9 / 5) + 32 
// Ensure that the output is displayed as a decimal value. 

#include <stdio.h>
int main(){
    float celsiustemp;
    printf("Enter the Temperature in Celsius: ");
    scanf("%f",&celsiustemp);
    float fahrenheittemp=(celsiustemp*9/5)+32;
    printf("Temperature in Fahrenheit: %.2fF",fahrenheittemp);
    return 0;
}