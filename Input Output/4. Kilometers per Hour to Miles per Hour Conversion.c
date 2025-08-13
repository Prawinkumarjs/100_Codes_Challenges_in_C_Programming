/*
4. Kilometers per Hour to Miles per Hour Conversion

Write a C program that converts kilometers per hour to miles per hour.
Expected Output :
Input kilometers per hour: 15
9.320568 miles per hour
*/

#include <stdio.h>

int main()
{
    float kilometer, miles;
    
    printf("Input kilometer per hour: ");
    scanf("%f", &kilometer);
    
    miles = kilometer * 0.6213712;
    
    printf( "%f miles per hour", miles);

    return 0;
}
