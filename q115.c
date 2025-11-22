#include<stdio.h>
#include<string.h>
int main(){
    char s[100], t[100],temp;
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);
    

    if (strlen(s) != strlen(t)) {
        printf("Not anagrams\n");
        return 0;
    }
    int i, j;
    for (i = 0; i < strlen(s) - 1; i++) {
        for (j = i + 1; j < strlen(s); j++) {
            if (s[i] > s[j]) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (i = 0; i < strlen(t) - 1; i++) {
        for (j = i + 1; j < strlen(t); j++) {
            if (t[i] > t[j]) {
                temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }
    int same = 1;  

    for (i = 0; s[i] != '\0'; i++) {
    if (s[i] != t[i]) {
        same = 0;
        break;
        }
    }

    if (same == 1)
    printf("Anagrams\n");
    else
    printf("Not anagrams\n");

    return 0;
}