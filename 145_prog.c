#include <stdio.h>

struct Student {char name[50]; int roll; int marks;};

void print(struct Student s){
    printf("%s %d %d",s.name,s.roll,s.marks);
}

int main() {
    struct Student s;
    scanf("%s%d%d",s.name,&s.roll,&s.marks);
    print(s);
    return 0;
}

