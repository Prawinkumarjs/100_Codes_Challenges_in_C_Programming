/*
2. Even or Odd Check

Write a C program to check whether a given number is even or odd.
Test Data : 15
Expected Output :
15 is an odd integer
*/

#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter Num: ");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        printf("%d is an even integer", num);
    }
    else{
        printf("%d is an odd integer", num);
    }
    
    

    return 0;
}
