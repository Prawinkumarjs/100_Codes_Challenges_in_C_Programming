/*
7. Username Validation Using a While Loop

Write a C program that prompts the user to input a username. 
Use a while loop to keep asking for a username until a valid one is entered 
(e.g., at least 8 characters long)

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char username[50];

    
    printf("Enter The username (atleast 8 characters long): ");
    
    while(1){
        scanf("%s", username);
        
        if(strlen(username) >= 8){
            printf("Valid username!!! \n");
            break;
        }
        else{
            printf("Invalid username! Must be at least 8 characters \n");
            printf("Enter again: ");
        }
        
    }
    

    return 0;
}


/*

Enter The username (atleast 8 characters long): e
Invalid username! Must be at least 8 characters 
Enter again: edfdsdfr
Valid username!!! 

*/
