#include <stdio.h>

int main() {
    enum Role {ADMIN, USER, GUEST};
    int r; 
    scanf("%d",&r);

    if(r==ADMIN) printf("Admin Access");
    else if(r==USER) printf("User Access");
    else printf("Guest Access");

    return 0;
}

