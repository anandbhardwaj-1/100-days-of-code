#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);

    FILE *fp=fopen("students.txt","w");
    char name[50];
    int roll, marks;

    for(i=0;i<n;i++){
        scanf("%s%d%d",name,&roll,&marks);
        fprintf(fp,"%s %d %d\n",name,roll,marks);
    }
    fclose(fp);

    fp=fopen("students.txt","r");
    while(fscanf(fp,"%s%d%d",name,&roll,&marks)!=EOF)
        printf("%s %d %d\n",name,roll,marks);

    fclose(fp);
    return 0;
}

