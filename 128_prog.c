#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp=fopen("data.txt","r");
    int c, v=0, cons=0;
    while((c=fgetc(fp))!=EOF){
        if(isalpha(c)){
            char x=tolower(c);
            if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u') v++;
            else cons++;
        }
    }
    printf("%d %d",v,cons);
    fclose(fp);
    return 0;
}

