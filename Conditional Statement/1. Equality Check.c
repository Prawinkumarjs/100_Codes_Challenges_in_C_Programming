/*
1. Equality Check

Write a C program to accept two integers and check whether they are equal or not.
Test Data : 15 15
Expected Output :
Number1 and Number2 are equal
*/

#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Enter Num1: ");
    scanf("%d", &num1);
    
    printf("Enter Num2: ");
    scanf("%d", &num2);
    
    printf("Test Data: %d %d \n", num1, num2);
    
    if(num1 == num2){
        printf("Number1 and Number2 are equal");
    }
    
    else{
        printf("Number1 and Number2 are not equal");
    }
    
    

    return 0;
}
