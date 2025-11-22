#include <stdio.h>
int main()
{
    long long num;
    int count[10] = {0};
    int maxDigit = 0, maxCount = 0;
    scanf("%lld", &num);
    while (num != 0)
    {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            maxDigit = i;
        }
    }
    printf("%d\n", maxDigit);
    return 0;
}