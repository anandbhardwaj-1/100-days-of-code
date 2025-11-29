#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in=fopen("input.txt","r");
    FILE *out=fopen("output.txt","w");
    int c;
    while((c=fgetc(in))!=EOF){
        fputc(toupper(c),out);
    }
    fclose(in);
    fclose(out);
    return 0;
}

