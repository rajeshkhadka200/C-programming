// Online C compiler to run C program online
#include <stdio.h>

// print fact 
int calcfact () {
    
    int num;
    
    printf("Enter the number : ");
    scanf("%d", &num);
    
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact = fact *i;    
    }
    printf("The fact of the num is : %d \n", fact);
}

int ask (){
    
    int again;
    printf("Press 1 to continue, press 0 to exit.\n");
    scanf("%d", &again);
    
    if(again == 1){
     calcfact();   
    }else{
        return 0;
    }
}

// main function

int main() {
    
    calcfact();
    ask();
    
    return 0;
}
