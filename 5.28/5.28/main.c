#include <stdio.h>

char bs(char re) {
    if (re >= 'A' && re <= 'Z') 
        return re + ('a' - 'A');  
    return re;  
}

int main() {
    char w_b, w_s;

    printf("請輸入一個大寫字母：");
    scanf_s(" %c", &w_b);
    w_s = bs(w_b);
    printf("小寫字母為：%c\n", w_s);
    return 0;
}