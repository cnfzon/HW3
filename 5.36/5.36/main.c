#include <stdio.h>

void hanoi(int n, char first, char third, char second) {
    if (n == 1) 
    {
        printf("Move disk 1 from %c to %c\n", first, third);
        return;
    }
    hanoi(n - 1, first, second, third);                      //n-1�ӽL�l�qfirst���ʨ�second�]third�ಾ�I
    
    printf("Move disk %d from %c to %c\n", n, first, third); //��n�ӽL�l�qfirst���ʨ�third

    hanoi(n - 1, second, third, first);                      //n-1�ӽL�l�qfirst���ʨ�third�]first�ಾ�I
}
int main() {
    int n=64;                                                //�L�l, �̤p���ʦ��� 2^n-1
    hanoi(n, 'A', 'C', 'B');                                 //A=first, B=second, C=third
    return 0;
}
