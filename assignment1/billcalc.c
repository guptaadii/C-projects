// Implement a C program to calculate the total cost of an item. The program should: 
// • Accept the price of one item. 
// • Accept the quantity purchased. 
// • Calculate and display the total bill. 

#include <stdio.h>
int main(){
    float price;
    int quantity;
    printf("Enter the price: ");
    scanf("%f",&price);
    printf("Enter the no. of items: ");
    scanf("%d",&quantity);
    float total_bill=price*quantity;
    printf("Total bill is: %f.2f",total_bill);

    return 0;
}
