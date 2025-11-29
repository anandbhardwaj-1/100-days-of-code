#include <stdio.h>

int main() {
    struct Date {int d,m,y;};
    struct Emp {char name[50]; int id; struct Date join;} e;

    scanf("%s%d%d%d%d",e.name,&e.id,&e.join.d,&e.join.m,&e.join.y);
    printf("%s %d %d-%d-%d",e.name,e.id,e.join.d,e.join.m,e.join.y);
    return 0;
}

