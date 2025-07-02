#include <stdio.h>

int main()
{
    int n, i, j, flag =0;
    
    printf("Enter the Num: ");
    scanf("%d", &n);
    
    for(j = 1; j <= n; j++){
        
        flag = 0;
        
        for(i = 2; i < j; i++){
            if(j % i == 0){
                flag = 1;
                // printf("%d is not a prime \n", j);
                break;
            }
            
        }
        
        if(flag == 0 && j > 1){
            printf("%d is prime \n", j);
        }
        else {
            printf("%d is not prime \n", j);
        }
    }
    
    return 0;
}
