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
    int sum=0;
    for(int j=0;j<n;j++){
        sum=sum+arr[j];
    }
    printf("the sum of elements is: %d",sum);
    return 0;
}
