#include <stdio.h>
void main()
{
    long long n;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &n);
    while(n != 0)
    printf("Number of digits: %d", count);
    getch();
}
