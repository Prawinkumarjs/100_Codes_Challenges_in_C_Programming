#include <stdio.h>

int main()
{
    int i, j, n,m;
    
    printf("Enter the n: ");
    scanf("%d", &n);
    
    printf("Enter the m: ");
    scanf("%d", &m);
    
    
    
    for(i = 0; i <= n; i++){   // loop for the row
        
        for(j = n; j >= i; j--){      // loop for the space
            printf(" ");
        }
        
        for(j = 0; j <= m; j++){     // loop for print star
            printf("*");
        }
        printf("\n");
        
    }

    return 0;
}
