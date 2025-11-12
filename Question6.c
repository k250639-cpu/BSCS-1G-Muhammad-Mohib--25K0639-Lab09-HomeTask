#include <stdio.h>

float calculateTax(float grossIncome, float *netIncome) {
    float tax = 0;
    if (grossIncome <= 20000) {
        tax = 0;
    }
    else if (grossIncome <= 50000) {
        tax = (grossIncome - 20000) * 0.1;
    }
    else {
        tax = (30000 * 0.1) + ((grossIncome - 50000) * 0.2);
    }
    *netIncome = grossIncome - tax;
    return tax;
}

int main() {
    float grossIncome, tax, netIncome;
    printf("Enter gross income ($): ");
    scanf("%f", &grossIncome);
    tax = calculateTax(grossIncome, &netIncome);
    printf("Tax Amount: $%.2f\n", tax);
    printf("Net Income: $%.2f\n", netIncome);
    return 0;
}
