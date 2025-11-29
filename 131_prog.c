#include <stdio.h>

int main() {
    enum Day {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
    int i;
    for(i=SUNDAY;i<=SATURDAY;i++) printf("%d ",i);
    return 0;
}

