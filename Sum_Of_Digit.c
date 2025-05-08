#include <stdio.h>

int main()
{
    int sum = 0, num, rem;
    
    printf("Enter the num: ");
    scanf("%d",&num);
    
    while(num!=0){
        sum = sum += num % 10;
        num = num /10;
    }
    
    printf("The sum Num is %d", sum);

    return 0;
}
