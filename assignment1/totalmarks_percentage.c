// Calculate Total Marks and Percentage Implement a C program to accept marks obtained in five subjects, where each subject is out of 100. Calculate and display: 
// • Total Marks 
// • Percentage

#include <stdio.h>
int main(){
    int m1,m2,m3,m4,m5;
    printf("Enter the marks of 5 subjects: ");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    int total_marks=m1+m2+m3+m4+m5;
    printf("Total Marks: %d\n",total_marks);
    float percentage=total_marks/5.00;
    printf("Percentage: %.2f%%",percentage);


    return 0;

}