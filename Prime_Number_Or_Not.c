Method 1: Simple iterative solution

#include <stdio.h>

int main()
{
    int count = 0;
    int num ;
    printf("Enter the Num: ");
    scanf("%d", &num);
    
    // checking number of divisors b/w 1 & num
    
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            count++;
        }
        
    }
    // 0 & 1 are not prime number
    
     if(num == 0 || num == 1){
        printf("%d is the not prime", num);
        }
    //if number of divisors are > 2 then not prime else prime 
    
    else if(count > 2 ){
        printf("%d is the not prime", num);
        }
    else{
        printf("%d is the  prime", num);
        }

    return 0;
}
