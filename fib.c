// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    
    int i, n, t1 = 0, t2 = 1, nextTerm=0;
    
    printf("Enter upto which you want to print : ");
    scanf("%d", &n);
    
    printf("%d \t", t1);
    printf("%d \t", t2);
    
    for(i = 2; i<=n; i++){
        nextTerm = t1+t2;
        printf("%d \t", nextTerm);
        t2 = t1;
        t1 = nextTerm;
        
    }
    
    
    
}