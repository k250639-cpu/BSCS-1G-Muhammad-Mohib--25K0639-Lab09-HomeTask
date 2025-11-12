#include <stdio.h>

float calculateTotal(float orderAmount, float weight) {
    float shipping = 0;
    if (orderAmount > 100) {
        shipping = 0; 
    } 
    else {
        if (weight < 2)
            shipping = 10;
        else if (weight <= 5)
            shipping = 15;
        else
            shipping = 20;
    }
    return orderAmount + shipping;
}

int main() {
    float orderAmount, weight, total;
    printf("Enter order amount ($): ");
    scanf("%f", &orderAmount);
    printf("Enter package weight (kg): ");
    scanf("%f", &weight);
    total = calculateTotal(orderAmount, weight);
    printf("Total Cost: $%.2f\n", total);
    return 0;
}
