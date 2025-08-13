/*
10. Triangle Third Angle Calculation

Write a C program to find the third angle of a triangle if two angles are given.
Expected Output :
Input two angles of triangle separated by comma : 50,70
Third angle of the triangle : 60
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int angle1, angle2, angle3;
    
    
    printf("Input three numbers separated by comma: ");
    scanf("%d,%d", &angle1, &angle2);

    angle3 = 180 - (angle1 + angle2);
    
    printf("Third angle of the triangle: %d", angle3);
    

    return 0;
}
