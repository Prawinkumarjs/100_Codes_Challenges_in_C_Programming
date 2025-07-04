
#include <stdio.h>

int main()
{
    int i,j,n,m;
    
    printf("Enter the n / row: ");
    scanf("%d",&n);
    
    printf("Enter the n / column: ");
    scanf("%d",&m);
    
    for(i = 0; i < n; i++){
        
        for(j = 0; j < m; j++){
            
           if(i == 0 || i == n-1 || j == 0 || j == m-1){
                printf("*");
           }
           else{
               printf(" ");
           }
            
        }
        printf("\n");
    }

    return 0;
}
