// A digital noticeboard flashes announcements multiple times. Implement a solution to display a name 5 times. 
#include <stdio.h>
void announcement(char str[]){
    int i=0;
    while (i<5){
        printf("%s\n",str);
        i++;
    }
}

int main(){
    char str[40];
    printf("Enter your name: ");
    scanf("%[^\n]s", str);
    announcement(str);
    return 0;
}