/*
5. Total Minutes Calculation

Write a C program that takes hours and minutes as input, and calculates the total number of minutes.
Expected Output :
Input hours: 5
Input minutes: 37
Total: 337 minutes.
*/

#include <stdio.h>

int main()
{
    int hours, minutes, mins;
    
    printf("Input  hours: ");
    scanf("%d", &hours);
    
    
    printf("Input  minutes: ");
    scanf("%d", &minutes);
    
    mins = (hours * 60) + minutes;
    
    printf( "Total: %d minutes", mins);

    return 0;
}
