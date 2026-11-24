// . A chatbot greets the user personally. Implement a solution to display a name with a “Hello” message. 

#include <stdio.h>
int main(){
    char str[40];
    printf("Enter your name: ");
    scanf("%[^\n]s",str);
    printf("Hello %s",str);
}