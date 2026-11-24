// The attendance percentage of N students is stored in an array. The college considers students eligible for an examination only if their attendance is at least 75%. Determine how many students are eligible and how many fall short of the requirement. 

#include <stdio.h>
int main(){
    int N;
    printf("Enter the number of records to be stored: ");
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        printf("Enter percentage %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    int eligible=0;
    int not_eligible=0;
    for(int k=0;k<N;k++){
        if (arr[k]>75) eligible++;
        else not_eligible++;
    }

    printf("The total number of students eligible is %d\n",eligible);
    printf("The total number of students  not eligible is %d\n",not_eligible);
    return 0;
}