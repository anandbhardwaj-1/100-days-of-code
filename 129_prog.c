#include <stdio.h>

int main() {
    FILE *fp=fopen("numbers.txt","r");
    int x, sum=0, count=0;
    while(fscanf(fp,"%d",&x)!=EOF){
        sum+=x;
        count++;
    }
    printf("%d %.2f",sum,(float)sum/count);
    fclose(fp);
    return 0;
}

