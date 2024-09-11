#include <stdio.h>

int main() {
    int count=0;
    int num;
    int ognum;
    int fnum;

    printf("Enter a number: ");
    scanf("%d", &num);

    ognum = num;

    for (int i = 0; i <10; i++) {

        count++;

        fnum= num + fnum;

    printf("%d x %d is %d \n",ognum, count, fnum);
    };
    return 0;
}

