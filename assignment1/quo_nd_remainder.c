// Implement a C program to accept two integers and calculate: 
// • Quotient 
// • Remainder 
// Use appropriate arithmetic operators and display both results.

#include <stdio.h>
int main(){
    int x;
    int y;
    printf("Enter the integers: ");
    scanf("%d %d",&x,&y);
    int remainder;
    int quotient;
    if (x>y){
        remainder=x%y;
        quotient=x/y;
    }
    else{
        remainder=y%x;
        quotient=y/x;
    }
    printf("Quotient: %d\nRemainder: %d\n",quotient,remainder);

    return 0;
}