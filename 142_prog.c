#include <stdio.h>

int main() {
    struct Student {char name[50]; int roll; int marks;} s[5];
    int i;
    for(i=0;i<5;i++) scanf("%s%d%d",s[i].name,&s[i].roll,&s[i].marks);
    for(i=0;i<5;i++) printf("%s %d %d\n",s[i].name,s[i].roll,s[i].marks);
    return 0;
}

