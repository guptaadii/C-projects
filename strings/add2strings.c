// A social media app appends hashtags to user captions. Implement a solution to add one string to the end of another. 

#include <stdio.h>
int main(){
    char str1[40];
    printf("Enter the sample password string: ");
    scanf(" %[^\n]s", str1);

    char str2[20];
    printf("Input Password: ");
    scanf(" %[^\n]s", str2);
    
    int i=0,j=0;
    while(str1[i]!='\0'){
        i++;
    }
    while (str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }

    str1[i]='\0';
    printf("%s",str1);
     return 0;
}
