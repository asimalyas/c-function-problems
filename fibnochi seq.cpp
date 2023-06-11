#include <stdio.h>

int main() {
    int num1 = 0;
    int num2 = 1;
    
    while (num1 < 100) {
        printf("%d ", num1);
        
        num2 = num1 + num2;
        num1 = num2 - num1;
    }
    
    printf("\n");
    return 0;
}

