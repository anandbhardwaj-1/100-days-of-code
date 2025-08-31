#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  // notice space before %c to avoid newline issue

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
        printf("%c is a Vowel.\n", ch);
    } else {
        printf("%c is a Consonant.\n", ch);
    }

    return 0;
}
