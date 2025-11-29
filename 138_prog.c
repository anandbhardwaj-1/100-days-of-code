#include <stdio.h>

int main() {
    enum Days {S, M, T, W, Th, F, Sa};
    int i;
    for(i=S;i<=Sa;i++) printf("%d ",i);
    return 0;
}

