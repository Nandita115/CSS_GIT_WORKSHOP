#include <stdio.h>

// Function prototypes
void showMenu();
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int choice, num1, num2, result;
    float divResult;

    while (1) {
        showMenu();
        printf("Enter your choice (1-4, 0 to exit): ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        printf("Enter two integers: ");
        scanf("%d %d", &num1, &num2);

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result: %d\n", result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result: %d\n", result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result: %d\n", result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    divResult = divide(num1, num2);
                    printf("Result: %.2f\n", divResult);
                }
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Function definitions
void showMenu() {
    printf("\n*** Simple Calculator ***\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("0. Exit\n");
    printf("*************************\n");
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b; // Explicit cast to float for division
}


// TODO: Define all the funciton
