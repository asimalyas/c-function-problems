#include <stdio.h>

// Function to calculate the power of a number
int calculatePower(int number, int power) {
    int result = 1;
    
    for (int i = 1; i <= power; i++) {
        result *= number;
    }
    
    return result;
}

int main() {
    int number, power;
    
    printf("Enter the base number: ");
    scanf("%d", &number);
    
    printf("Enter the power: ");
    scanf("%d", &power);
    
    int result = calculatePower(number, power);
    
    printf("%d raised to the power of %d is equal to %d\n", number, power, result);
    
    return 0;
}

