#include <stdio.h>

int main() {
    struct Student {char name[50]; int roll; int marks;} s;
    scanf("%s%d%d",s.name,&s.roll,&s.marks);
    printf("%s %d %d",s.name,s.roll,s.marks);
    return 0;
}

