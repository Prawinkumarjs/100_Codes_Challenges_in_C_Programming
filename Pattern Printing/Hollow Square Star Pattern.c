#include <stdio.h>

int main()
{
    int i,j,n;
    
    printf("Enter the n: ");
    scanf("%d",&n);
    
    for(i = 0; i < n; i++){
        
        for(j = 0; j < n; j++){
            
            if(i == 0 || i == n-1 || j == 0 || j == n-1){  // this is the main logic for the hollow rectangle / square pattern
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
