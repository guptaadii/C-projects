// A data consistency tool checks whether a given string is the same forwards and backwards. Implement a solution to check whether a string is palindrome or not. 

#include <stdio.h>
int main(){
    char str[40];
    printf("Enter the string: ");
    scanf(" %[^\n]s", str);
    int l=0,size=0;
    while(str[l]!='\0'){
        size++;
        l++;
    }
    int flag=1;
    for(int i=0,j=size-1;i<j;i++,j--){
        if(str[i]!=str[j]){
            flag=0;
            break;
        }
        else flag=1;
    }

    if (flag==1) printf("PALLINDROME");
    else printf("NOT PALLINDROME");

    return 0;
}