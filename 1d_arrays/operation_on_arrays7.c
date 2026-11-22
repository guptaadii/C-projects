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
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(arr[i]==arr[j]) printf("%d is the duplicate number\n",arr[i]);
            else continue;
        }
    }
    return 0;
}