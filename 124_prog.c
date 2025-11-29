#include <stdio.h>

int main() {
    char src[50], dest[50];
    scanf("%s%s",src,dest);

    FILE *f1=fopen(src,"r");
    FILE *f2=fopen(dest,"w");

    int ch;
    while((ch=fgetc(f1))!=EOF) fputc(ch,f2);

    fclose(f1);
    fclose(f2);
    return 0;
}

