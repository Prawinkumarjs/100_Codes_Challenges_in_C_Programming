/*
3. Rectangle Perimeter Calculation

Write a C program that prints the perimeter of a rectangle using its height and width as inputs.
Expected Output :
Input the height of the Rectangle : 5
Input the width of the Rectangle : 7
Perimeter of the Rectangle is : 24.000000
*/



#include <stdio.h>

int main()
{
    float width;
    float perimeter;
    float height;
    
    printf("Input the height of the Rectangle: ");
    scanf("%f", &height);
    
    
    printf("Input the width of the Rectangle: ");
    scanf("%f", &width);
    
    perimeter = 2 * (height + width);
    
    printf( "Perimeter of the Rectangle %f", perimeter);

    return 0;
}
