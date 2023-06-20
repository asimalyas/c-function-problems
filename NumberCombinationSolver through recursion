#include <stdio.h>
bool hasProductAndSum(int num, int targetSum, int targetProduct) {
    int sum = 0;
    int product = 1;

    while (num > 0) {
        int digit = num % 10;
        sum += digit;
        product *= digit;
        num /= 10;
    }

    return (sum == targetSum) && (product == targetProduct);
}

void generateNumbers(int currentNum, int currentLevel, int level, int targetSum, int targetProduct) {
    if (currentLevel == level) {
        if (hasProductAndSum(currentNum, targetSum, targetProduct)) {
            printf("%d\n", currentNum);
        }
        return;
    }

    for (int i = 1; i <= 9; i++) {
        generateNumbers(10 * currentNum + i, currentLevel + 1, level, targetSum, targetProduct);
    }
}

int main() {
    int level, targetSum, targetProduct;

    printf("Enter the level: ");
    scanf("%d", &level);

    printf("Enter the desired sum: ");
    scanf("%d", &targetSum);

    printf("Enter the desired product: ");
    scanf("%d", &targetProduct);

    generateNumbers(0, 0, level, targetSum, targetProduct);

    return 0;
}

