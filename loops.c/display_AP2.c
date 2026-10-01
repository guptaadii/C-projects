// 4,7,10,13..n

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for (int i;i<=3*n+1;i=i+3){
        printf("%d\n",i);
    }
    return 0;

}