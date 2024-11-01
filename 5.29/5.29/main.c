#include <stdio.h>

int lcm(int a, int b) 
{
    int count = 1;
    while (1)
    {
        count++;
        if (count % a == 0 && count % b == 0)
            goto end;
    }
end:
return count;
}

int main() {
    int a, b, ans;

    printf("請輸入2個整數：");
    scanf_s("%d %d", &a, &b);
    ans = lcm(a,b);
    printf("最小公倍數LCM：%d\n", ans);
    return 0;
}