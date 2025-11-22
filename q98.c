#include <stdio.h>
#include <string.h>
int main()
{
    char first[30], middle[30], last[30];
    printf("enter the name: ");
        scanf("%s %s %s", first, middle, last);
    printf("%c.%c. %s\n", first[0], middle[0], last);
    return 0;
}