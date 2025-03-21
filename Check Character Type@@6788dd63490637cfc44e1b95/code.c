#include <stdio.h>
#include <ctype.h>  // For isdigit() and isalpha()

int main() {
    char a;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &a);

    // Check if the character is a vowel
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || 
        a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
        printf("Vowel\n");
    }
    // Check if the character is a consonant (must be an alphabet but not a vowel)
    else if (isalpha(a)) { 
        printf("Consonant\n");
    }
    // Check if the character is a digit (0-9)
    else if (isdigit(a)) {
        printf("Digit\n");
    }
    // If none of the above, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
