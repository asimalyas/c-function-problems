#include <stdio.h>

int print(int n) {
    if (n == 1) {
    return 1;
    }
        int fact1= print(n -1);
        int dact1=n*fact1;
}

int main() {
    int n;
    scanf("%d", &n);
    int suM = print(n);
    printf("%d\n", suM);
    return 0;
}

