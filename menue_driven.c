// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int a,b, result;
    char ops;
    
    
    printf("Enter the two number :");
    scanf("%d %d", &a, &b);
    
    printf("Enter the operator:");
    scanf(" %c", &ops);
    
    switch(ops) {
        case '+':
        result = a+b;
        printf("sum is : %d", result);
        
        break;
        
        case '-':
        result = a-b;
        printf("Diff is : %d", result);
        
        default :
        printf("No operator available");
        
    }
    
    return 0;
}