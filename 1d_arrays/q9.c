// A laboratory inventory system stores distinct identification numbers from 1 to N, but one identification number is missing. Determine the missing number without sorting the array. 
#include <stdio.h>
int main(){
    int N;
    printf("Enter the number of tokens: ");
    scanf("%d",&N);

    int arr[N-1];

    for(int i=0;i<N-1;i++){
        printf("Enter token number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
     int sum=N*(N+1)/2;

    for (int i=0;i<N-1;i++){
        sum=sum-arr[i];
    }

    printf("The missing number is %d",sum);

    
    return 0;
}
