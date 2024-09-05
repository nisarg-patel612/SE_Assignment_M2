/*WAP to show
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case*/



// ii. Vowel or Consonant using switch case

#include <stdio.h>
main() {
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Switch case to check for vowel or consonant
    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a Vowel.\n", ch);
            break;
        default:
            printf("%c is a Consonant.\n", ch);
    }
}

