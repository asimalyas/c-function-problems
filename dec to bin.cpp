#include<stdio.h>

int decimalToBinary(int decimal);

int decimalToBinary(int decimal) {
    int binary = 0;
    int count = 1;

    // Convert decimal to binary
    while (decimal > 0) {
        int digit = decimal % 2;  // Extract the least significant bit
        binary += digit * count;  // Add the bit to the binary representation
        count *= 10;  // Move to the next digit position
        decimal /= 2;  // Divide the decimal number by 2 to get the next bit
    }

    return binary;
}

int main() {
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    int binary = decimalToBinary(num);
    printf("Binary: %d\n", binary);

    return 0;
}

