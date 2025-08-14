/*
4. Height Categorization

Write a C program to accept the height of a person in centimeters and categorize the person according to their height.
Test Data : 135
Expected Output :
The person is Dwarf.
*/

#include <stdio.h>

int main()
{
    int height;
    
    printf("Enter height: ");
    scanf("%d", &height);
    
    if(height < 135){
        printf("The Person is  Dwarf");
    }
    else if (height >= 135 && height < 170){
        printf("The Person is in Average height");
    }
    else if (height >= 170 && height <= 195){
        printf("The Person is Tall");
    }
    else{
        printf("The height is abnormal");
    }
    
    
    

    return 0;
}
