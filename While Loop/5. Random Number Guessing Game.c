/*
5. Random Number Guessing Game

Write a C program that generates a random number between 1 and 20 and asks the user to guess it. 
Use a while loop to give the user multiple chances until they guess the correct number.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , i;
    int randomNumber = (rand() % 20) + 1 ;
    
    printf("Enter the num(from 1 to 20) \n");
    
    
    while(1){
        
        printf("Enter the num: ");
        scanf("%d", &num);
        
        if(randomNumber == num){
            printf("The Num is correct \n");
            break;
        }
        else{
            printf("Guess the correct number!!! \n");
        }
    }

    return 0;
}


/*

Enter the num(from 1 to 20) 
Enter the num: 5
guess the correct number!!! 
Enter the num: 5
guess the correct number!!! 
Enter the num: 6
guess the correct number!!! 
Enter the num: 4
The Num is correct 

*/
