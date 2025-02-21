#include <stdio.h>
#include <ctype.h>

// Function to check if a character is a vowel
int isVowel(char c) {
    c = toupper(c); // Convert to uppercase for case insensitivity
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string from user

    printf("Vowels and consonants in the string:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is an alphabet
        if (isalpha(str[i])) {
            if (isVowel(str[i])) {
                printf("%c - Vowel\n", str[i]);
            } else {
                printf("%c - Consonant\n", str[i]);
            }
        } else {
            printf("%c - Not an alphabet\n", str[i]);
        }
    }

    return 0;
}
