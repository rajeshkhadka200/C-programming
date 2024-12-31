#include <stdio.h>

// calc and print fact
void calcfact() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    printf("The factorial of the number is: %d\n", fact);
}

// ask 
void ask() {
    int again;
    do {
        calcfact();
        printf("Press 1 to continue, press 0 to exit.\n");
        scanf("%d", &again);
    } while (again == 1);
}

// Main function
int main() {
    ask();
    return 0;
}
