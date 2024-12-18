// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    // prime or not
    
    int n,i, counter=0;
    
    printf("Enter the number :");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        if(n%i ==0){
            counter ++;
        }
        
        if (counter > 2) {
            break;
        }
    }
    
    if(counter > 2){
        printf("the num is not prime.");
    }else{
        printf("Prime");
    }
    return 0;
}