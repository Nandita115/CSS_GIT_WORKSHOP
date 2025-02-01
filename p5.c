#include <stdio.h>

// TODO: Implement the conversion functions
float celsiusToFahrenheit(float celsius);
float fahrenheitToCelsius(float fahrenheit);

int main() {
    int choice;
    float temp, convertedTemp;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        convertedTemp = celsiusToFahrenheit(temp);
        printf("Temperature in Fahrenheit: %.2f°F\n", convertedTemp);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        convertedTemp = fahrenheitToCelsius(temp);
        printf("Temperature in Celsius: %.2f°C\n", convertedTemp);
    } else {
        printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;

}

// TODO: Implement the celsiusToFahrenheit function
float celsiusToFahrenheit(float celsius) {
     return (celsius * 9.0 / 5.0) + 32.0;
}

// TODO: Implement the fahrenheitToCelsius function
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0; 
}
