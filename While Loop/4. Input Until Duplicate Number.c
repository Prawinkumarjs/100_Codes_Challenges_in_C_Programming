/*
4. Input Until Duplicate Number

Write a C program that prompts the user to input a series of numbers until they input a 
duplicate number. Use a while loop to check for duplicates.

*/
#include <stdio.h>

int main() {
    int numbers[1000];   // store inputs (max 1000 numbers)
    int count = 0;
    int input, i;
    int duplicate = 0;

    printf("Enter numbers (program stops when a duplicate is entered):\n");

    while (1) {
        scanf("%d", &input);

        // Check if input is already entered
        duplicate = 0;
        for (i = 0; i < count; i++) {
            if (numbers[i] == input) {
                duplicate = 1;
                break;
            }
        }

        if (duplicate) {
            printf("Duplicate number %d found. Program terminated.\n", input);
            break;
        } else {
            numbers[count] = input;
            count++;
        }
    }

    return 0;
}
