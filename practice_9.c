#include<stdio.h>
#include<conio.h>
int main()
{
    int n = 10, i, x;
    float  sum;
    printf("Value of x: ");
    scanf("%d", &x);
    for (i = n - 1; i > 0; --i )
        sum = 1 + x * sum / i;
    printf("e^(%d) = %f",x, sum);
    return 0;
}
