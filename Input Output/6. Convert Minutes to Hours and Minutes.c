/*
6. Convert Minutes to Hours and Minutes

Write a program in C that takes minutes as input, and display the total number of hours and minutes.
Expected Output :
Input minutes: 546
9 Hours, 6 Minutes
*/

#include <stdio.h>

int main()
{
    int hours, minutes, Hours, Minutes;
    
    printf("Input  minutes: ");
    scanf("%d", &minutes);
    
    
    Hours = (minutes / 60);
    Minutes = (minutes % 60);
    
    printf( "%d Hours, %d Minutes", Hours, Minutes);

    return 0;
}
