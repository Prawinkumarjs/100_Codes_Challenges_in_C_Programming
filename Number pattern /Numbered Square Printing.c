#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter row: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        
        for(j = 1; j <= n; j++){
            
            printf("1");
        }
        printf("\n");
    }

    return 0;
}
