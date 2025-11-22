#include <stdio.h>
int main()
{
    char name[100];
    int i;
    printf("Enter name: ");
    gets(name);
    printf("%c.", name[0]);
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            printf("%c.", name[i + 1]);
        }
    }
    return 0;
}