#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next;
    
    printf("Enter the number of term: ");
    scanf("%d", &n);
    
    for(int i = 0; i <= n; i++){
        
        if(i <= 1){              // First two terms are 0 and 1
            next = i;
        }
        
        else{
            next = first + second;      // Add last two numbers
            first = second;             // Shift for next iteration
            second = next;
        }
        
        
    printf("%d ", next);

    }
    
    return 0;
}
