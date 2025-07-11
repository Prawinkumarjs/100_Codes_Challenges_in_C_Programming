#include <stdio.h>
#include <math.h>

int main()
{
    int base, exponent, result = 1;
    
    printf("Enter base: ");
    scanf("%d", &base);
    
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    
    while(exponent != 0){
        result *= base;
        exponent--;
    }
    
    printf("%d", result);
    
    
    

    return 0;
}
