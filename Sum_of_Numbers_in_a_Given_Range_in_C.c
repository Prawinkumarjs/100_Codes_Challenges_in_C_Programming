#include <stdio.h>
// Find the Sum of Numbers in a Given Range in C

int main()
{
    int num1, num2, sum;
    sum = 0;
    printf("Enter the num1: ");
    scanf("%d",&num1);
    
    printf("Enter the num2: ");
    scanf("%d",&num2);
    
    for(int i = num1; i <= num2; i++){
        sum = sum + i;
    }
    printf("SUM : %d", sum);

    return 0;
}
