#include <stdio.h>
#include <string.h>
struct Cricketer {
    char name[50];
    int age;
    int testMatches;
    float averageRuns;
};
int main() {
    struct Cricketer cricketers[10];
    int n = 10;
    printf("Enter details of 10 cricketers:\n");
    for (int i = 0; i < n; i++) {
        printf("\nCricketer %d:\n", i + 1);
        printf("Name: ");
        getchar();
        fgets(cricketers[i].name, sizeof(cricketers[i].name), stdin);
        cricketers[i].name[strcspn(cricketers[i].name, "\n")] = '\0'; // remove newline
        printf("Age: ");
        scanf("%d", &cricketers[i].age);
        printf("Number of Test Matches: ");
        scanf("%d", &cricketers[i].testMatches);
        printf("Average Runs: ");
        scanf("%f", &cricketers[i].averageRuns);
    }
    struct Cricketer temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (cricketers[i].averageRuns > cricketers[j].averageRuns) {
                temp = cricketers[i];
                cricketers[i] = cricketers[j];
                cricketers[j] = temp;
            }
        }
    }
    printf("\n--- Cricketers sorted by Average Runs (Ascending Order) ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nName            : %s", cricketers[i].name);
        printf("\nAge             : %d", cricketers[i].age);
        printf("\nTest Matches    : %d", cricketers[i].testMatches);
        printf("\nAverage Runs    : %.2f\n", cricketers[i].averageRuns);
    }

    return 0;
}

