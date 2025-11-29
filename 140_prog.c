#include <stdio.h>

int main() {
    enum Gender {MALE, FEMALE};
    struct Person {char name[50]; enum Gender g;} p;

    scanf("%s %d",p.name,(int*)&p.g);
    printf("%s %d",p.name,p.g);
    return 0;
}

