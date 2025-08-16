/*
2. Sum of Positive Integers Until 0

Write a C program that prompts the user to input a series of integers until the user stops entering 0 
using a while loop. Calculate and print the sum of all the positive integers entered.

*/


#include <stdio.h>

int main()
{
    
    int num , sum = 0;
    
    printf("Input integers (enter 0 to stop):\n");
    
    
    while(1){
        
        printf("Enter the num: ");
        scanf("%d", &num);
        
        if(num == 0){
            break;
        }
        if(num > 0){
            sum = sum + num;
        }
    }
    
    printf("Sum of positive integers is : %d", sum);
    
    return 0;
}
