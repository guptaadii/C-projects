// Given an array of marks print the roll no(index) of students with marks less then 35;

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of records:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<n;j++){
        if(arr[j]<35) printf("The roll no is: %d\n",j);
        else continue;
    }
}