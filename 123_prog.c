#include <stdio.h>

int main() {
    FILE *fp=fopen("input.txt","r");
    char c;
    int chars=0, words=0, lines=0, inword=0;

    while((c=fgetc(fp))!=EOF){
        chars++;
        if(c=='\n') lines++;
        if(c==' ' || c=='\n') inword=0;
        else if(!inword){ inword=1; words++; }
    }

    printf("%d %d %d",chars,words,lines);
    fclose(fp);
    return 0;
}

