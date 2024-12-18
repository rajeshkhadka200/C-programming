#include <stdio.h>

int main() {
    int num, sum = 0;
    
    // sum of factor is to equals the number then it is perfect num.

    printf("Enter a number: ");
    scanf("%d", &num);

    
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {  
            sum += i;
        }
    }
    
    if (sum == num) {
        printf("perfect");
    } else {
        printf(" not Perfect Num.");
    }

    return 0;
}
