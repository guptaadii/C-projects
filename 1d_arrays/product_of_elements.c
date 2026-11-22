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
    int prod=1;
    for (int j=0;j<n;j++){
        prod=prod*arr[j];
    }
    printf("The product of elements is: %d",prod);
    return 0;
}