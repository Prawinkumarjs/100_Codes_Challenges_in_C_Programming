/*
3. Product of Numbers from 1 to 5

Write a C program that calculates the product of numbers from 1 to 5 using a while loop.
*/

#include <stdio.h>

int main()
{
    
    int i = 1, num = 5, product = 1;
    
    while(i <= num){
        product = product * i;
        printf("Current number: %d, Current product: %d\n", i, product);
        i++;
    }
    
    
    return 0;
}

/*

Current number: 1, Current product: 1
Current number: 2, Current product: 2
Current number: 3, Current product: 6
Current number: 4, Current product: 24
Current number: 5, Current product: 120


*/
