
#include <stdio.h>

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { return (b == 0) ? 0 : a / b; }
int modulus(int a, int b) { return a % b; }

int main() {
    int choice;
    float num1, num2;

    while (1) {
        printf("Press 1 for +, 2 for -, 3 for *, 4 for /, 5 for %%, 0 to exit:\n");
        scanf("%d", &choice);

        if (choice == 0) break;

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (choice) {
            case 1: printf("Result: %.2f\n", add(num1, num2)); break;
            case 2: printf("Result: %.2f\n", subtract(num1, num2)); break;
            case 3: printf("Result: %.2f\n", multiply(num1, num2)); break;
            case 4: printf("Result: %.2f\n", divide(num1, num2)); break;
            case 5: printf("Result: %d\n", modulus((int)num1, (int)num2)); break;
            default: printf("Invalid choice.\n");
        }
    }

    return 0;
}
