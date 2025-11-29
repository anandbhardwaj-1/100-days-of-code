#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt","a");
    char s[200];
    fgets(s,200,stdin);
    fputs(s,fp);
    fclose(fp);
    return 0;
}

