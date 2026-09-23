// Implement a C program to accept two integer values and swap their values using a third variable. 

#include <stdio.h>
int main(){
    int x;
    int y;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);
    printf("before swapping: %d %d\n",x,y);
    int z;
    z=x;
    x=y;
    y=z;

    printf("After swapping: %d %d",x,y);

    return 0;
}