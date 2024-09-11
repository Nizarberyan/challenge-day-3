#include <stdio.h>
int n;
int sum = 0;

int main() {
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        sum += 1;
        if ((sum % 2) == 0) {
            printf("%d ", sum);
        }
    }
}