// A blogging app tracks word counts for SEO optimization. Implement a solution to count spaces and words in a string. 

#include <stdio.h>

int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%99[^\n]", str);

    int spaces = 0, words = 0, i = 0;

    while(str[i] != '\0'){
        if(str[i] == ' ')
            spaces++;

        else if(i == 0 || str[i-1] == ' ')
            words++;

        i++;
    }

    printf("Number of spaces: %d\n", spaces);
    printf("Number of words: %d", words);

    return 0;
}