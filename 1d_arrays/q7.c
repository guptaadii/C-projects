// A system stores a sequence of integers representing transaction codes. Rearrange the sequence so that all even values appear before all odd values, while ensuring that every original value is retained. 


#include <stdio.h>
int main(){
    int N;
    printf("Enter the number of integers to be stored: ");
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        printf("Enter integer number %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if (arr[i]%2!=0){
                if (arr[j]%2==0){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
    for(int k=0;k<N;k++) printf("%d ",arr[k]);
    return 0;
}