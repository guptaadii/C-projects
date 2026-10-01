// Implement a C program that takes an integer n. 
// • If n is divisible by both 2 and 5, print Special.  
// • If it is divisible only by 2, print Even.  
// • If it is divisible only by 5, print Five.  
// • Otherwise, print Odd/Other.  

#include <stdio.h>
int main(){
    int n;
    printf("Enter the integer: ");
    scanf("%d",&n);
    if (n%2==0 && n%5==0){
        printf("Special\n");
    }
    else{
        printf("Odd/Other");
    }
    if (n%2==0 && n%5!=0){
        printf("Even");
    }
    if (n%2!=0 && n%5==0){
        printf("Five");
    }
    return 0;
}