#include <stdio.h>
int base,exponent,result = 1;

int main() {
    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    if (exponent == 0 ) {
        printf("the result is 1");
    } 
    else {
        for (int i = 0; i < exponent; i++) {
            result *= base;
             };
    };
    printf("%d ", result);
    return 0;
}