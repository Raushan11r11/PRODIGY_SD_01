#include<stdio.h>

void convertFromCelsius(float temp){
    float f = (temp * 9 / 5) + 32;
    float k = temp + 273.15;
    printf("%.2f°C = %.2f°F = %.2fK\n", temp, f, k);
}

void convertFromFohrenheit(float temp){
    float c = (temp - 32) * 5 / 9;
    float k = c + 273.15;
    printf("%.2f°F = %.2f°C = %.2fK\n", temp, c, k);
}

void convertFromKelvin(float temp){
    float c = temp - 273.15;
    float f = (c *9 / 5) + 32;
    printf("%.2fK = %.2f°C = %.2f°F\n", temp, c, f);
}

int main() {
    float temp;
    char unit;

    printf("Enter the temperature value: ");
    scanf("%f", &temp);

    printf("Enter the unit  (C for Celcius, F for Fahrenheit, K for Kelvin): ");
    scanf(" %c", &unit);

    switch (unit){
        case 'C':
        case 'c':
            convertFromCelsius(temp);
            break;
        case 'F':
        case 'f':
            convertFromFohrenheit(temp);
            break;
        case 'K':
        case 'k':
            convertFromKelvin(temp);
            break;
        default:
            printf("Invelid unit. Please enter C, F, or K.\n");

    }
    return 0;
}