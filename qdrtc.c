// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Write Quadratic eqn code here
    
    int a,b,c,d=0, r1, r2,realPart, imagPart;
    
    printf("Enter the value of a,b,c");
    scanf("%d %d %d", &a, &b, &c);
    
    d = sqrt((b*b) - (4*a*c));
    
    if (d>0){
        
        printf("The roots are unequal and real");
        r1 = (-b+d)/2*a;
        r2 = (-b-d)/2*a;
        
        printf("The roots are %d and %d", r1,r2);
        
    } else if(d==0){
        printf("The roots are equal and real");
        
        r1 = (-b)/2*a;
        r2=r1;
        
        printf("The roots are %d and %d", r1,r2);
    }else{
        
        realPart = -b / (2 * a);
        imagPart = sqrt(abs(d))/2*a;
        
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}