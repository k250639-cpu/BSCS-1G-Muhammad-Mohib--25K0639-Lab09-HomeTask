#include <stdio.h>

int analyzeTemperature(float temp) {
    if (temp > 35) {
        printf("HEAT ALERT\n");
        return 1;
    } 
    else if (temp < 10) {
        printf("COLD ALERT\n");
        return 2;
    } 
    else if (temp >= 15 && temp <= 25) {
        printf("COMFORT ZONE\n");
        return 3;
    } 
    else {
        printf("NORMAL CONDITIONS\n");
        return 4;
    }
}

int main() {
    float temperature;
    int code;
    printf("Enter current temperature (°C): ");
    scanf("%f", &temperature);
    code = analyzeTemperature(temperature);
    printf("Alert Code: %d\n", code);
    return 0;
}
