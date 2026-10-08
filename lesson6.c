#include <stdio.h>

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int last_digit = num % 10;
    printf("%d\n", last_digit);

    return 0;
}
