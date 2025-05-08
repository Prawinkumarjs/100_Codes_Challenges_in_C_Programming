#include <stdio.h>

int main()
{
    int reverse = 0, num, rem;
    
    printf("Enter the num: ");
    scanf("%d",&num);
    
    while(num!=0){
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num/10;
    }
    
    printf("The reverse Num is %d", reverse);

    return 0;
}
