#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    
    if (scanf(" %c", &ch) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

  
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("The character is a Vowel.\n");
        } else {
            printf("The character is a Consonant.\n");
        }
    } else {
        printf("The
