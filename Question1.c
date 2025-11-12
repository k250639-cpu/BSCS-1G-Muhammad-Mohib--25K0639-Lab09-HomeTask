#include <stdio.h>

float processTransaction(float rlimit, float tamount) {
    if (tamount <= rlimit) {
        rlimit -= tamount;
        printf("Transaction APPROVED\n");
    } else {
        printf("Transaction DECLINED\n");
    }
    return rlimit;
}

int main() {
    float rlimit = 5000, tamount;
    char choice;
    do {
        rlimit = 5000;
        while (1) {
            printf("Enter transaction amount (or -1 to end day): ");
            scanf("%f", &tamount);
            if (tamount == -1)
                break;
            rlimit = processTransaction(rlimit, tamount);
            printf("Remaining limit: %.2f\n", rlimit);
        }
        printf("Do you want to start a new day? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("System closed.\n");
    return 0;
}
