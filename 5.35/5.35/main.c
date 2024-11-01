#include <stdio.h>

int fibonacci(long long int i) {
    if (i == 0) 
        return 0;
    if (i == 1) 
        return 1;
    if (i >= 2) 
        return fibonacci(i - 2) + fibonacci(i - 1);
}

int main() {
    long long int i = 0;
    while(1)
    {
        printf("%d ", fibonacci(i));
        i++;
    }
    return 0;
}