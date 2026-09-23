//  Accept and Display User Details Implement a C program to accept the following details from the user using scanf(): 
//  • Age 
//  • Height (in meters) 
//  • Grade (single character) 
//  Display all the entered values clearly using printf(). 

#include <stdio.h>
int main(){
    int age;
    float height;
    char grade;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your height in metres: ");
    scanf("%f",&height);
    printf("Enter your grade: ");
    scanf(" %c",&grade);
    printf("Age: %d\nHeight: %.2f\nGrade: %c",age,height,grade);
    return 0;
}