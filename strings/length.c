// A document editor counts characters in a word. Implement a solution to display the length of a string. 

#include <stdio.h>

int length(char str[]){
    int len=0;
    int i=0;
    while(str[i]!='\0'){
        len++;
        i++;
    }
    return len;
    }

    int main(){
        char str[40];
        printf("Enter the string: ");
        scanf("%[^\n]s",str);
        int len=length(str);
        printf("The length of string is %d",len);
        return 0;
    }