// A company wants to generate a simple invoice for a customer. Implement a C program to accept:
// • Product ID 
// • Product Price 
// • Quantity 
// • Discount Percentage 
// Calculate the following:
// Subtotal = Price × Quantity
// Discount Amount = Subtotal × Discount Percentage / 100 
// Final Amount = Subtotal − Discount Amount 
// Display the following details in a properly formatted manner

#include <stdio.h>
int main(){
    int productID;
    int productprice;
    int quantity;
    float discount_percentage;
    printf("Enter the Product ID; ");
    scanf("%d",&productID);
    printf("Enter the Product Price; ");
    scanf("%d",&productprice);
    printf("Enter the Product Quantity; ");
    scanf("%d",&quantity);
    printf("Enter the Discount Percentage; ");
    scanf("%f",&discount_percentage);
    int subtotal=productprice*quantity;
    float discount_amount=subtotal*discount_percentage/100;
    float total_amount=subtotal-discount_percentage;
    printf("ProductID: %d\nSubtotal: %d\nDiscount Amount: %.2f\nTotal Amount; %.2f",productID,subtotal,discount_amount,total_amount);
    return 0;
}