// Electricity Bill Slab Implement a program to calculate the electricity bill based on units consumed:

#include <stdio.h>
int main(){
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d",&units);
    if (0<units && units<=100){
        printf("Your bill is: %d",units*2);

    }
    else if (100<units && units<=200){
        printf("Your bill is: %d",units*3);
    }
    else{
        printf("Your bill is: %d",units*5);
    }
    return 0;
}