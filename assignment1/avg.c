// Implement a C program to accept three integer values and calculate their average. Ensure that the average is displayed as a decimal value, even when all input values are integers.
#include <stdio.h>
int main(){
    int x;
    int y;
    int z;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter Seconf number: ");
    scanf("%d",&y);
    printf("Enter third number: ");
    scanf("%d",&z);
    float avg=(x+y+z)/3;
    printf("Average of 3 numbers is: %.2f",avg);
    return 0;
}