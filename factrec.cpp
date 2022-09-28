#include <stdio.h>
int fact(int);
int main(){
    int num;
    
    // Asking for Input
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Factorial of %d is %d.", num, fact(num));
    return 0;
}

int fact(int n){
    if (n >= 1)
        return (n * fact(n - 1));
    else 
        return 1;
}
