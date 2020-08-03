#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1024

int isPalindrome_rec(char word[], int index){
    int len = strlen(word) - (index +  1);

    if (index + 1 == len || index == len){
        return 1;
    }
    else {
        if (word[index] == word[len]){
            return isPalindrome_rec(word, index + 1);
        } else {
            return 0;
        }
    }
}

int isPalindrome(char word[]){
    return isPalindrome_rec(word, 0);
}

int main() {
    char word [MAX_LENGTH] = "racecar";

    if (isPalindrome(word)){
        printf("The word %s is a palindrome", word);
    } else{
        printf("The word %s is not a palindrome", word);
    }
}