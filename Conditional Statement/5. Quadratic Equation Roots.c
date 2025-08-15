/*
5. Quadratic Equation Roots

Write a C program to calculate the root of a quadratic equation.
Test Data : 1 5 7
Expected Output :
Root are imaginary;
No solution.
*/


#include <stdio.h>
#include <math.h>


int main()
{
    int a,b,c,d;
    float x1, x2;
    
    
    printf("Input the value of a, b & c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    d = b*b - 4*a*c;
    
    if(d == 0){
        printf("Both roots are equal.\n");
        x1 = -b;
        x2 = x1;
        printf("First Root Root1 = %f\n", x1);
        printf("Second Root Root2 = %f\n", x2);
        
    }
    else if(d > 0){
        printf("Both roots are different.\n");
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        
        printf("First Root Root1 = %f\n", x1);
        printf("Second Root Root2 = %f\n", x2);
        
    }
    
    else{
        printf("Roots are Imaginary;\n No solution.");
    }
    
    return 0;
}



/*
output:

Input the value of a, b & c: 1 9 20
Both roots are different.
First Root Root1 = -4.000000
Second Root Root2 = -5.000000


Input the value of a, b & c: 1 10 25
Both roots are equal.
First Root Root1 = -10.000000
Second Root Root2 = -10.000000

*/
