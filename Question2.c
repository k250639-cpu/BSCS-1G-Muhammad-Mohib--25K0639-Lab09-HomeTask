#include <stdio.h>

float checkResult(float m1, float m2, float m3) {
    float avg = (m1 + m2 + m3) / 3;
    if (avg >= 50 && m1 >= 40 && m2 >= 40 && m3 >= 40) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
        if (avg < 50)
            printf("Reason: Average below 50 (%.2f)\n", avg);
        if (m1 < 40)
            printf("Reason: Subject 1 below 40 (%.2f)\n", m1);
        if (m2 < 40)
            printf("Reason: Subject 2 below 40 (%.2f)\n", m2);
        if (m3 < 40)
            printf("Reason: Subject 3 below 40 (%.2f)\n", m3);
    }

    return avg;
}

int main() {
    float m1, m2, m3, avg;
    printf("Enter marks for 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);
    avg = checkResult(m1, m2, m3);
    printf("Average Marks: %.2f\n", avg);
    return 0;
}
