#include <stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 'a' + 'A';
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] - 'A' + 'a';
    }
    printf("%s\n", str);
    return 0;
}