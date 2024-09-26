#include <stdio.h>

int main() {
    long long number;
    int count = 0;

    printf("Enter any number: ");
    scanf("%lld", &number);

    if (number < 0) number = -number;

    do {
        count++;
        number /= 10;
    } while (number);

    printf("Total digits: %d\n", count);
    return 0;
}

