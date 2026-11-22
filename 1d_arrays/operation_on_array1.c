// input an array of integers, change the value of odd indexed to its second multiple an dfor even indexed add 10;

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("Enter the arr[%d] element: ",i);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        if(j%2==0)arr[j]+=10;
        else arr[j]*=2;
    }
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}