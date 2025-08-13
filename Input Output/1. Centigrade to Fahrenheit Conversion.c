/*
1. Centigrade to Fahrenheit Conversion

Write a program that converts Centigrade to Fahrenheit.
Expected Output :
Input a temperature (in Centigrade): 45
113.000000 degrees Fahrenheit.
*/

#include <stdio.h>

int main()
{
    float centi;
    float faht;
    
    printf("Input a temperature(in Centigrade): ");
    scanf("%f", &centi);
    
    //faht = ((9.0 / 5.0) * centi) + 32.0;
    
    faht = (centi * 9/5) + 32;
    
    printf("%f degrees Fahrenheit", faht);

    return 0;
}
