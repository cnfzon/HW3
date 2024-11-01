#include <stdio.h>

int rf(int a, int b)
{
    int count,t=a;
    for (count = 1; count < b; count++)
        a *= t;
    return a;
}

int main() {
    int a, b, ans;

    printf("recursive fuction(base exponent)¡G");
    scanf_s("%d %d", &a, &b);
    ans = rf(a, b);
    printf("recursive fuction(%d,%d)¡G%d\n", a, b, ans);
    return 0;
}