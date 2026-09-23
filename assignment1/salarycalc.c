// Employee Salary Calculation An employee's monthly salary consists of: 
// • Basic Salary 
// • Allowance 
// • Bonus 
// Implement a C program to accept these values and calculate the final salary.

#include <stdio.h>
int main(){
    float basic_salary;
    float allowance;
    float bonus;
    printf("Enter the Basic Salary: ");
    scanf("%f",&basic_salary);
    printf("Enter the Allowance: ");
    scanf("%f",&allowance);
    printf("Enter the Bonus: ");
    scanf("%f",&bonus);
    float total_salary=basic_salary+allowance+bonus;
    printf("The Total Salary: %.2f",total_salary);
    return 0;
}