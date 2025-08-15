/*
7. Character Type Classification

Write a C program to check whether a character is an alphabet, digit or special character.
Test Data :
@
Expected Output :
This is a special character.
*/

#include <stdio.h>

int main()
{
    char caar;
    
    printf("Enter the single character: ");
    scanf("%c", &caar);
    
    if((caar >= 'a' && caar <= 'z') || (caar >= 'A' && caar <= 'Z')){
        printf("This is an alphabet.");
    } 
    
    else if(caar >= '0' && caar <= '9'){
        printf("This is a digit.");
    }
    else printf("This is a special character.");
    
    
    return 0;
}
