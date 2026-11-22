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
    int max=arr[0];
    for(int j=0;j<n;j++){
        if (max<arr[j]) max=arr[j];
        else continue;
    }
    printf("The largest element is: %d",max);
    return 0;
}