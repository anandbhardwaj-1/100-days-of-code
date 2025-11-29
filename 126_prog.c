#include <stdio.h>

int main() {
    char fname[50];
    scanf("%s",fname);
    FILE *fp = fopen(fname,"r");
    if(fp==NULL) printf("File not found");
    else{
        char c;
        while((c=fgetc(fp))!=EOF) printf("%c",c);
        fclose(fp);
    }
    return 0;
}

