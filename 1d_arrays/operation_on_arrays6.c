 //rotate an array k time;
// a={1,2,3,4,5,6,7} 
// k=3
// a={5,6,7,1,2,3,4}


#include <stdio.h>
void reverse(int arr[],int a,int b){
    for(int i=a,j=b; i<j; i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

    }
    
}
int main(){
    int x;
    printf("Enter the number of elements in array: ");
    scanf("%d",&x);
    
    int arr[x];
    for(int i=0;i<x;i++){
        printf("Enter the element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    int k;
    printf("Enter the number of times to be roatated: ");
    scanf("%d",&k);
    k=k%x;
    
    reverse(arr,0,x-1);
    reverse(arr,0,k-1);
    reverse(arr,k,x-1);


    for(int h=0;h<x;h++){ 
        printf("%d ",arr[h]);
    }
    return 0;


}