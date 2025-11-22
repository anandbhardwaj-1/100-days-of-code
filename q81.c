#include <stdio.h>
int main()
{
    char str[100];
    int count = 0;
    scanf("%[^\n]s", str);
    while (str[count] != '\0')
    {
        count++;
    }
    printf("%d\n", count);
    return 0;
}