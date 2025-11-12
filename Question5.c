#include <stdio.h>

float calculateBill(float foodCost, int people) {
    float tax, tip, serviceCharge, total;
    tax = 0.08 * foodCost;
    if (foodCost > 50)
        tip = 0.15 * foodCost;
    else
        tip = 0.10 * foodCost;
    if (people > 6)
        serviceCharge = 0.05 * foodCost;
    else
        serviceCharge = 0;
    total = foodCost + tax + tip + serviceCharge;
    return total;
}

int main() {
    float foodCost, totalBill;
    int people;
    printf("Enter total food cost ($): ");
    scanf("%f", &foodCost);
    printf("Enter number of people: ");
    scanf("%d", &people);
    totalBill = calculateBill(foodCost, people);
    printf("Total Bill (including all charges): $%.2f\n", totalBill);
    return 0;
}
