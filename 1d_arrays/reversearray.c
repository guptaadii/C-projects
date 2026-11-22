#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);

    int arr[n];
    for (int m=0;m<n;m++){
        printf("Enter element arr[%d]: ",m);
        scanf("%d",&arr[m]);
    }
    int i=0,j=n-1,temp=0;
    while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for (int l=0;l<n;l++){ 
        printf("%d ",arr[l]);
    }


    return 0;
}