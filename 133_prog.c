#include <stdio.h>

int main() {
    enum Month {JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
    int m; 
    scanf("%d",&m);

    if(m==FEB) printf("28 or 29");
    else if(m==APR||m==JUN||m==SEP||m==NOV) printf("30");
    else printf("31");

    return 0;
}

