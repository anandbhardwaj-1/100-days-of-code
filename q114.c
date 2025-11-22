#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);
    int freq[256] = {0};
    int left = 0, maxLen = 0;
    for (int right = 0; s[right] != '\0'; right++) {
        freq[(unsigned char)s[right]]++;

        while (freq[(unsigned char)s[right]] > 1) {
            freq[(unsigned char)s[left]]--;
            left++;
        }
        if (right - left + 1 > maxLen)
            maxLen = right - left + 1;
    }
    printf("%d", maxLen);
    return 0;
}
