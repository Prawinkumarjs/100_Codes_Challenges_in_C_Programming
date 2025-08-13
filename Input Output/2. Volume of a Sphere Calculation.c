/*
2. Volume of a Sphere Calculation

Write a C program that calculates the volume of a sphere.
Expected Output :
Input the radius of the sphere : 2.56
The volume of sphere is 70.276237.
*/

#include <stdio.h>

int main()
{
    float radius;
    float volume;
    const float PI = 3.14159265358979323846264338327950288419716939937510;
    
    printf("Input the radius of the sphere: ");
    scanf("%f", &radius);
    
    volume = (4.0 / 3.0) * PI * (radius * radius * radius);
    
    printf("The volume of sphere %f", volume);

    return 0;
}
