// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    // prime or not
    
    int n, lastDigit, rev=0, temp;
    
    
    printf("Enter the number :");
    scanf("%d", &n);
    
    temp = n;
    
    while(n >0){
        lastDigit = n %10;
        rev =  rev*10+lastDigit;
        n /= 10; 
    }
    
    if(temp == rev){
        printf("Palendrome");
    }else{
        printf("not Palendrome");
    }
    return 0;
}