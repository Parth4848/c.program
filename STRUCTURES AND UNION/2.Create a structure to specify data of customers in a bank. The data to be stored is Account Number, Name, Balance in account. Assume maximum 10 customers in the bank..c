#include <stdio.h>
#include <string.h>
struct Customer {
    int accountNumber;
    char name[50];
    float balance;
};
void printLowBalanceCustomers(struct Customer customers[], int n) {
    printf("\nCustomers with balance below Rs. 100:\n");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (customers[i].balance < 100.0) {
            printf("Account Number: %d, Name: %s, Balance: Rs. %.2f\n",
                   customers[i].accountNumber, customers[i].name, customers[i].balance);
            found = 1;
        }
    }
    if (!found) {
        printf("No customers with balance below Rs. 100.\n");
    }
}
void processTransaction(struct Customer customers[], int n, int accNum, float amount, int code) {
    for (int i = 0; i < n; i++) {
        if (customers[i].accountNumber == accNum) {
            if (code == 1) {
                customers[i].balance += amount;
                printf("\nDeposit successful! New balance of %s: Rs. %.2f\n",
                       customers[i].name, customers[i].balance);
            } else if (code == 0) {
                if (customers[i].balance < amount) {
                    printf("\nThe balance is insufficient for the specified withdrawal.\n");
                } else {
                    customers[i].balance -= amount;
                    printf("\nWithdrawal successful! New balance of %s: Rs. %.2f\n",
                           customers[i].name, customers[i].balance);
                }
            } else {
                printf("\nInvalid transaction code! Use 1 for deposit and 0 for withdrawal.\n");
            }
            return;
        }
    }
    printf("\nAccount Number %d not found.\n", accNum);
}
int main() {
    struct Customer customers[10];
    int n = 10;
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Customer %d:\n", i + 1);
        printf("Account Number: ");
        scanf("%d", &customers[i].accountNumber);
        getchar();
        printf("Name: ");
        fgets(customers[i].name, sizeof(customers[i].name), stdin);
        customers[i].name[strcspn(customers[i].name, "\n")] = '\0';
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }
    printLowBalanceCustomers(customers, n);
    int accNum, code;
    float amount;
    printf("\nEnter transaction details (Account Number, Amount, Code [1=Deposit, 0=Withdrawal]):\n");
    printf("Account Number: ");
    scanf("%d", &accNum);
    printf("Amount: ");
    scanf("%f", &amount);
    printf("Code (1=Deposit, 0=Withdrawal): ");
    scanf("%d", &code);
    processTransaction(customers, n, accNum, amount, code);
    return 0;
}

