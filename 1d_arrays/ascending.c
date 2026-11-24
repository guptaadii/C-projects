// 11. Ranking Without a Built-in Sorting Function A college wants to arrange students' marks in ascending order for statistical analysis. Process the given array to arrange the marks from lowest to highest without using any built-in sorting function. 

#include <stdio.h>
int main(){
    int N;
    printf("Enter the number of marks to be stored: ");
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        printf("Enter marks number %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int k=0;k<N;k++){
        for (int j=k+1;j<N;j++){
            if(arr[k]>arr[j]){
                int temp=arr[k];
                arr[k]=arr[j];
                arr[j]=temp;  
            }
        }
    }

    printf("Marks in ascending order is: ");
    for (int l=0;l<N;l++){
        printf("%d ",arr[l]);
    }
    return 0;
}