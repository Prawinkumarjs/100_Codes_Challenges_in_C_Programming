/*
Write a program in C to read n number of values in an array and display them in reverse order.
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2
*/ 

#include <stdio.h>

int main()
{
    int n[100], i, digits;
    
    printf("Enter the number of digits: ");
    scanf("%d", &digits);
    
    for(i = 0; i < digits; i++){
        scanf("%d", &n[i]);
    }
    
    
    for(i = 0; i < digits; i++){
        printf("%d ", n[i]);
    }
    
    printf("\n");
    
    for(i = digits -1 ; i >= 0; i--){
        printf("%d ", n[i]);
    }
    
    printf("\n");
    
    return 0;
}
