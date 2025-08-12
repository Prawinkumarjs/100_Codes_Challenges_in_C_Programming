/*
1. Array Store & Print

Write a program in C to store elements in an array and print them.
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......
Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9
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
    
    
    
    return 0;
}
