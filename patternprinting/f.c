/*
54321
4321
321
21
1
no fo rows----n
*/

#include <stdio.h>
int main(){
    int n;
    printf("Enter the no of rows: ");
    scanf("%d",&n);
    for (int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            printf("%d ",j);
        }
        printf("\n");
    }

}