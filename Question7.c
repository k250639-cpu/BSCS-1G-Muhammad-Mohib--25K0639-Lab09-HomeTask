#include <stdio.h>

float calculateRentalCost(int days, float kmDriven) {
    float baseRate = 40 * days;
    float extraMileage = 0.0;
    float totalCost;
    float dailyExtraKm = kmDriven / days - 100;
    if (dailyExtraKm > 0)
        extraMileage = dailyExtraKm * 0.25 * days;
    totalCost = baseRate + extraMileage;
    if (days >= 7)
        totalCost *= 0.9;  
    return totalCost;
}

int main() {
    int rentalDays;
    float kilometers, finalCost;
    printf("Enter number of rental days: ");
    scanf("%d", &rentalDays);
    printf("Enter total kilometers driven: ");
    scanf("%f", &kilometers);
    finalCost = calculateRentalCost(rentalDays, kilometers);
    printf("Total Rental Cost: $%.2f\n", finalCost);
    return 0;
}
