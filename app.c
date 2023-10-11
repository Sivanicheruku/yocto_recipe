#include <stdio.h>
#include "calculator.h"

int main() {
    int choice, num1, num2;
    double result;

    while (1) {
        printf("Calculator Menu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            break;
        }

        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        switch (choice) {
            case 1:
                result = add(num1, num2);
                break;
            case 2:
                result = subtract(num1, num2);
                break;
            case 3:
                result = multiply(num1, num2);
                break;
            case 4:
                result = divide(num1, num2);
                if (num2 == 0) {
                    printf("Error: Division by zero\n");
                    continue; // Skip displaying the result
                }
                break;
            default:
                printf("Invalid choice\n");
                continue; // Skip displaying the result
        }

        printf("Result: %lf\n", result);
    }

    return 0;
}

