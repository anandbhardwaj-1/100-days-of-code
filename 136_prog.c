#include <stdio.h>

int main() {
    enum Menu {ADD, SUBTRACT, MULTIPLY};
    int choice,a,b;
    scanf("%d%d%d",&choice,&a,&b);

    switch(choice){
        case ADD: printf("%d",a+b); break;
        case SUBTRACT: printf("%d",a-b); break;
        case MULTIPLY: printf("%d",a*b); break;
    }
    return 0;
}

