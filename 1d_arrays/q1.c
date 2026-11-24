// A faculty member has collected the marks of N students in a programming test. Develop a program that processes these marks and reports the class average, the highest marks obtained, and the lowest marks obtained. 


#include <stdio.h>
int main(){
    int N;
    printf("Enter the number of marks to be stored: ");
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        printf("Enter Marks number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for (int k=0;k<N;k++) sum=sum+arr[k];
    int avg=sum/N;
    printf("The avg of class is %d\n",avg);


    int max=arr[0];
    for(int l=1;l<N;l++){
        if (arr[0]<arr[l]) max=arr[l];
    }
    printf("The highest marks in class is %d\n",max);


    int min=arr[0];
    for(int l=1;l<N;l++){
        if (arr[0]>arr[l]) min=arr[l];
    }
    printf("The lowest marks in class is %d\n",min);
 



    return 0;
}