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
    printf("The elements of array are: ");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
   }
    return 0;
}