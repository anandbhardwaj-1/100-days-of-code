#include <stdio.h>

int main() {
    enum Light {RED, YELLOW, GREEN};
    int x; 
    scanf("%d",&x);

    if(x==RED) printf("Stop");
    else if(x==YELLOW) printf("Wait");
    else printf("Go");

    return 0;
}

