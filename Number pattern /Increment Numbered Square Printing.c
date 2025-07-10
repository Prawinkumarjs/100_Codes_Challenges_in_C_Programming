#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter row: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        
        for(j = 1; j <= n; j++){
            
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}


/*

Enter row: 5
11111
22222
33333
44444
55555

*/
