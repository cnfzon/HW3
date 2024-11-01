#include <stdio.h>

void hanoi(int n, char first, char third, char second) {
    if (n == 1) 
    {
        printf("Move disk 1 from %c to %c\n", first, third);
        return;
    }
    hanoi(n - 1, first, second, third);                      //n-1個盤子從first移動到second（third轉移點
    
    printf("Move disk %d from %c to %c\n", n, first, third); //第n個盤子從first移動到third

    hanoi(n - 1, second, third, first);                      //n-1個盤子從first移動到third（first轉移點
}
int main() {
    int n=64;                                                //盤子, 最小移動次數 2^n-1
    hanoi(n, 'A', 'C', 'B');                                 //A=first, B=second, C=third
    return 0;
}
