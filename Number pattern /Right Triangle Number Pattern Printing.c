
#include <stdio.h>

int main()
{
    int i,j,n,count = 0;
    printf("Enter row: ");
    scanf("%d", &n);
    
    for(i = 1; i < n; i++){
        
        for(j = 1; j <= i; j++){
            
            count++;
            printf("%d ", count);
        }
        printf("\n");
    }

    return 0;
}

/*
Enter row: 5
1 
2 3 
4 5 6 
7 8 9 10
*/
