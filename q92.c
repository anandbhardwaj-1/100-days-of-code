#include <stdio.h>
int main()
{
    char str[100];
    int i, j;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            for (j = i + 1; str[j] != '\0'; j++)
            {
                if (str[i] == str[j])
                {
                    printf("%c\n", str[i]);
                    return 0;
                }
            }
        }
    }
    printf("No repeating lowercase letter\n");
    return 0;
}