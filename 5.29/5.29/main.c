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

    printf("�п�J2�Ӿ�ơG");
    scanf_s("%d %d", &a, &b);
    ans = lcm(a,b);
    printf("�̤p������LCM�G%d\n", ans);
    return 0;
}