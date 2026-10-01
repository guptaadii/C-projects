/*
*****
*****
*****
no of lines------n
no of stars------m
*/

#include <stdio.h>
int main(){
    int n,m;
    printf("Enter the no of lines: ");
    scanf("%d",&n);
    printf("Enter the no of stars in each line: ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            printf("*");
            }
            printf("\n");
        }
    return 0;
}