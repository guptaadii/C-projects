// Students waiting for a college help desk are represented by their token numbers in an array. Simulate a situation in which the first token moves to the end of the queue, shifting every other token one position to the left. 


#include <stdio.h>
int main(){
    int N;
    printf("Enter the number of tokens: ");
    scanf("%d",&N);

    int arr[N];

    for(int i=0;i<N;i++){
        printf("Enter token number %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    int temp=arr[0];

    for(int i=0;i<N-1;i++){
        arr[i]=arr[i+1];
    }

    arr[N-1]=temp;

    printf("Revised queue: ");
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}