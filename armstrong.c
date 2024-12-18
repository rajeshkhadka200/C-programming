// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {

    int n, lastDigit, sum=0;
        
        // 153 = 1^3 + 5^3 + 3^3 = 153
        
        printf("Enter the number");
        scanf("%d", &n);
        
        int temp = n;
        
        while(n>0){
            lastDigit = n%10;
            sum =  pow(lastDigit,3) + sum;
            n = n/10;
        }
        if(temp == sum){
            printf("Armstrong");
        }else{
            printf("no Armstrong");
        }
        
        return 0;
}