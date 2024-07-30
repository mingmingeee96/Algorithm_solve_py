#include <stdio.h>

int main()
{
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%d\n", num1 + num2 - num3);

    if (num2<10)
        printf("%d", num1 * 10 + num2 - num3);
    else if (num2<100)
        printf("%d", num1 * 100 + num2 - num3);
    else if (num2<1000)
        printf("%d", num1 * 1000 + num2 - num3);
    else
        printf("%d", num1 * 10000 + num2 - num3);
    return 0;
}