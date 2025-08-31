// Q15: Program to check the type of a character.
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isupper(ch)) {
        printf("The character is an uppercase alphabet.\n");
    } else if (islower(ch)) {
        printf("The character is a lowercase alphabet.\n");
    } else if (isdigit(ch)) {
        printf("The character is a digit.\n");
    } else {
        printf("The character is a special character.\n");
    }

    return 0;
}
