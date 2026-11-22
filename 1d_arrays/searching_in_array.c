#include <stdio.h>
void find(int arr[],int x,int h){
    for(int i=0;i<x;i++){
        if(arr[i]==h){
            printf("PRESENT");
            return;
        }
    }
    printf("NOT PRESENT");
}
int main(){
    int x;
    printf("Enter the number of elements in array: ");
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
        printf("Enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter the number to be searched: ");
    scanf("%d",&k);

    find(arr,x,k);
    return 0;
}