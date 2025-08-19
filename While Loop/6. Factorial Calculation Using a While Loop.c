/*
6. Factorial Calculation Using a While Loop

Write a C program that prompts the user to enter a positive integer. 
It then calculates and prints the factorial of that number using a while loop.

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i = 1, fact = 1;
    
    printf("Enter the num: ");
    scanf("%d", &num);
    
    if(num == 0 ){
        printf("The Factorial  0 is %d", fact);
    }
    
    else if(num < 0){
        printf("Factorial is not defined for negative number.\n");
    }
    
    else{
        while(i <= num){
            fact = fact * i;
            i++;
        }
        printf("The Factorial of %d is %d", num, fact);
    }
    
    

    return 0;
}
