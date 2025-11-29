#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt","w");
    char name[50];
    int age;

    scanf("%s",name);
    scanf("%d",&age);

    fprintf(fp,"%s %d",name,age);
    fclose(fp);
    printf("Data saved");
    return 0;
}

