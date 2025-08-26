#include <stdio.h>

int main() {
    int seconds, hours, minutes, sec;

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    // Converting
    hours = seconds / 3600;          // 1 hour = 3600 seconds
    minutes = (seconds % 3600) / 60; // remaining minutes
    sec = seconds % 60;              // remaining seconds

    // Printing result
    printf("Time = %d:%d:%d\n", hours, minutes, sec);

    return 0;
}
