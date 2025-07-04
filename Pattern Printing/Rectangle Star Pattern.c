#include <stdio.h>

int main()
{
    int i,j,n,m;
    
    printf("Enter the n / row: ");
    scanf("%d",&n);
    
    printf("Enter the n / column: ");
    scanf("%d",&m);
    
    for(i = 0; i < n; i++){         // iterate based on row
        
        for(j = 0; j < m; j++){      // iterate based on column
            
            printf("*");
            
        }
        printf("\n");
    }

    return 0;
}
