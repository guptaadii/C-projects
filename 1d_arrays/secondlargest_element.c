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
    int largest=arr[0];
    int sec_largest=arr[1];
    for(int k=0;k<n;k++){
        if(largest<arr[k]) largest=arr[k];
    }
    for(int k=0;k<n;k++){
        if (arr[k]!=largest && sec_largest<arr[k]) sec_largest=arr[k];
    }

    printf("Second Largest element is: %d",sec_largest);
    return 0;
}