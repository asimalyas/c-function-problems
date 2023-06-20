#include<stdio.h>
#include<math.h>

int main() {
	int level, targetSum, targetProduct;
	printf("enter the level:");
	scanf("%d", &level);
	printf("\nenter the targetsum:");
	scanf("%d", &targetSum);
	printf("\nenter the targetproduct:");
	scanf("%d", &targetProduct);

	int lowerBound = pow(10, level - 1);
	int upperBound = pow(10, level) - 1;

	for (int i = lowerBound; i <= upperBound; i++) {
		int sum = 0;
		int product = 1;
		int num = i;

		while (num > 0) {
			int digit = num % 10;
			sum += digit;
			product *= digit;
			num /= 10;
		}

		if (sum == targetSum && product == targetProduct) {
			printf("%d\n", i);
		}
	}

	return 0;
}


