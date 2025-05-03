// Simple_Calculator
#include <stdio.h>

int main() {
    int num1, num2;
    char operation;
    printf("enter the num1 : ");
    scanf("%d", &num1);
    printf("enter the num2 : ");
    scanf("%d", &num2);
    printf("Enter the operation to perform : ");
    scanf("%c", &operation);
    
    if(operation == '+'){
        printf("The Answer is : %d", num1+num2);
    }
    else if (operation == '-'){
        printf("The Answer is : %d", num1-num2);
    }

    else if (operation == '*'){
        printf("The Answer is : %d", num1*num2);
    }
    
    else if (operation == '/'){
        printf("The Answer is : %d", num1/num2);
    }
    

    return 0;
}
