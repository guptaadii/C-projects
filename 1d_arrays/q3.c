// The scores obtained by a player in N rounds of a tournament are stored in an array. Display the scores in reverse order and calculate the player's total score

#include <stdio.h>
int main(){

    int N;
    printf("Enter the number of records to be stored: ");
    scanf("%d",&N);
    int sum=0;
    int arr[N];
    for(int i=0;i<N;i++){
        printf("Enter score number %d: ",i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }

    for(int i=0,j=N-1;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int k=0;k<N;k++) printf("%d ",arr[k]);

    printf("\nThe total score is %d",sum);

    return 0;
}