// find the difference of sum of elements at even and odd indices;

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
    int sum_odd=0,sum_even=0;
    for(int k=0;k<n;k++){
        if(k%2==0) sum_even+=arr[k];
        else sum_odd+=arr[k];
    }
    printf("The difference is: %d",sum_even-sum_odd);
    return 0;
}   