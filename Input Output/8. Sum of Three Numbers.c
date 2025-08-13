/*
8. Sum of Three Numbers

Write a program in C to calculate the sum of three numbers with input on one line separated by a comma.
Expected Output :
Input three numbers separated by comma : 5,10,15
The sum of three numbers : 30
*/

//-------------- method 1  ----------------

#include <stdio.h>     // Include the standard input/output header file.

int num1, num2, num3;   /* declaration of three variables */  
int sum;                /* variable to store the sum of numbers */
char line_text[50];     /* line of input from keyboard */ 

int main() 
{  
printf("Input three numbers separated by comma : ");   // Prompt the user to input three numbers separated by comma.
fgets(line_text, sizeof(line_text), stdin);   // Read a line of input from the user and store it in 'line_text'.
sscanf(line_text, "%d, %d, %d", &num1, &num2, &num3);   // Convert the input to integers and store them in 'num1', 'num2', 'num3'.
sum = num1 + num2 + num3;   // Calculate the sum of the three numbers.
printf("The sum of three numbers : %d\n", sum);   // Print the sum of the three numbers.  
return(0);   // Return 0 to indicate successful execution of the program.  
}  


//-----------------  method 2  ----------------

#include <stdio.h>

int main()
{
    int a[3], i, sum = 0;
    
    
    printf("Input three numbers separated by comma: ");
    scanf("%d,%d,%d", &a[0], &a[1], &a[2]);

    
    for(i = 0 ; i < 3; i++){
        sum = sum + a[i];
        
    }
    
    printf("The sum of three numbers: %d", sum);
    

    return 0;
}


// -------------------  method 3  ------------------

#include <stdio.h>

int main()
{
    int a[3], i, sum = 0;
    
    
    printf("Input three numbers separated by comma: ");
    for(i = 0; i < 3; i++){
        if (i < 2)  // for first two numbers, expect a comma after the number
            scanf("%d,", &a[i]);
        else        // last number, no comma expected
            scanf("%d", &a[i]);
    }
    
    for(i = 0 ; i < 3; i++){
        sum = sum + a[i];
        
    }
    
    printf("The sum of three numbers: %d", sum);
    

    return 0;
}
