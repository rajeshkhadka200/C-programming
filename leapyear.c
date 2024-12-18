// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    // leap year
    
    int year;
    
    printf("Enter a year:");
    scanf("%d", &year);
    
    if(year%4 == 0){
        if(year %100 !=0){
            printf("Leap year");
        }else{
            if(year % 400 ==0){
                printf("Leap year");
            }else{
                printf("no Leap year");
            }
        }
    }else{
        printf("no leap Leap year");
    }
    
    return 0;
}