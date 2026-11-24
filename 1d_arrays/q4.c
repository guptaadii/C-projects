// A student's marks across N consecutive assessments are stored in an array. Identify the assessments in which the student's marks decreased compared with the immediately preceding assessment, and count the total number of such decreases. 

#include <stdio.h>
int main(){
    int N;
    printf("Enter the number of assessments to be stored: ");
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        printf("Enter assessment score number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int k=1;k<N;k++){
        if(arr[k]<arr[k-1]){
            printf("In assessment number %d the marks decreased comparatively to preceeding assessment\n",k+1);
            count++;
        }
    }

    printf("The Total number of times this happened is %d",count);
    return 0;
}