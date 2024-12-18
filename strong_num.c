// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    
    // strong number : sum of fact of digit is eql to original num.
    // 145 = 1! + 4! + 5! = 145
    int n,fact, temp, lastDigit, sum=0, i;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    
    // calculate fact of lastdigit
    
    
    while(n>0) {
        fact = 1;
        lastDigit = n%10;
        // calculate the fact of last digit
        
        for (i=1; i<=lastDigit; i++){
            fact = fact * i;
        }
        
        sum = fact + sum;
        n = n/10;
    }
    
    if(sum ==temp){
        printf("Yes num is strong.");
    }else{
        printf(" num is not strong.");
    }
    
}