/*
1
A B
1 2 3
A B C D
1 2 3 4 5 
n----------no of rows
*/

#include <stdio.h>
int main(){
    int n;
    printf("Enter the no of rows: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=1;j<=i;j++){
                printf("%d ",j);
            }
        }
        else if (i%2==0){
            for (int q=1;q<=i;q++){
                printf("%c ",64+q);
            }
        }
        printf("\n");
    }   
    return 0;
}