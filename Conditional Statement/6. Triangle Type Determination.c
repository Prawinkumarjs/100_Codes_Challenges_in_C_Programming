/*
6. Triangle Type Determination

Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
Test Data :
50 50 60
Expected Output :
This is an isosceles triangle.
*/

#include <stdio.h>

int main()
{
    int a,b,c;
    
    printf("Input the value of a, b & c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a == b && b == c){
        printf("This is an equilateral triangle.");
    }
    
    else if(a == b || b == c || a == c){
        printf("This is an isosceles triangle.");
    }
    
    else{
        printf("This is a scalene triangle.");
    }
    
    return 0;
}
