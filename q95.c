#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100], c[200];
    scanf("%s %s", a, b);

    if (strlen(a) != strlen(b))
    {
        printf("Not rotation");
    }
    else
    {
        strcpy(c, a);
        strcat(c, a);
        if (strstr(c, b))
            printf("Rotation");
        else
            printf("Not rotation");
    }
    return 0;
}