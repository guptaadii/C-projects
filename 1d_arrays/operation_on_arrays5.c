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
    int brr[n];
    for (int i=0;i<n;i++){
            brr[i]=arr[n-i-1];
    }
    for (int k=0;k<n;k++) {
        printf("%d ",brr[k]);
    }
    return 0;
}