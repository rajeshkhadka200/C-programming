// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {

    int n, code = 1234, attempt = 0;
    bool isCorrect = false;

    
    for(int i=0; i<3; i++){
        
        printf("Enter the password");
        scanf("%d", &n);
        
        if(n == code){
            isCorrect = true;
            printf("Device unlocked... ✅");
            break;
        }else{
            printf("Wrong password. ❌");
            attempt++;
        }
        
        if(attempt == 3){
            printf("Too many attempts.. ❌");
            break;
        }
    }
    
    return 0;
}