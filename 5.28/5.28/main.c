#include <stdio.h>

char bs(char re) {
    if (re >= 'A' && re <= 'Z') 
        return re + ('a' - 'A');  
    return re;  
}

int main() {
    char w_b, w_s;

    printf("�п�J�@�Ӥj�g�r���G");
    scanf_s(" %c", &w_b);
    w_s = bs(w_b);
    printf("�p�g�r�����G%c\n", w_s);
    return 0;
}