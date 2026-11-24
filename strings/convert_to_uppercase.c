// A form validation tool converts text to lowercase. Implement a solution to display a string in lowercase.

#include <stdio.h>
void lower(char str[]){
    int i=0;
    while(str[i]!='\0'){
        if (str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        i++;
    }
}

int main(){
    char str[40];
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    lower(str);
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}