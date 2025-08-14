/*
3.  Signum Function Implementation

Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
Test Data : -5
Expected Output :
The value of n = -1
*/

#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter Num: ");
    scanf("%d", &num);
    
    if(num < 0){
        printf("The value of n = -1");
    }
    else if(num == 0){
        printf("The value of n = 0");
    }
    else{
        printf("The value of n = 1");
    }

    return 0;
}
