#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter row: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        
        for(j = 1; j <= n; j++){
            
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

/*
Enter row: 4
1234
1234
1234
1234

*/
