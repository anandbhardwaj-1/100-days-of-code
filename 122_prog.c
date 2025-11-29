#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt","r");
    char line[200];
    while(fgets(line,200,fp)) printf("%s",line);
    fclose(fp);
    return 0;
}

