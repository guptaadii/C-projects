/*
       A
     A B
   A B C
 A B C D
*/

#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of rows: ");
    scanf("%d",&n);
    int a=64;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            printf("  ");
        }
        for (int k=1;k<=i;k++){
            printf(" %c",a+k);
        }
    printf("\n");
    }
    return 0;
}