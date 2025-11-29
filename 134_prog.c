#include <stdio.h>

int main() {
    enum Status {SUCCESS, FAILURE, TIMEOUT};
    int x;
    scanf("%d",&x);

    if(x==SUCCESS) printf("Success");
    else if(x==FAILURE) printf("Failure");
    else printf("Timeout");

    return 0;
}

