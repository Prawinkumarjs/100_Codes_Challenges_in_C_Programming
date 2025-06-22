#include <stdio.h>

int main()
{
    int n, flag = 0;
    printf("Enter N: ");
    scanf(" %d", &n);
    
    for(int i = 2; i < n; i++){
        
        if(n % i != 0){
            continue;
        }
        else{
            flag = 1;
            printf("The Number %d is not a Prime Number \n", n);
            break;
        }
    }
    
    if(flag == 0){
        printf("The Number %d is a Prime Number\n",n);
    }

    return 0;
}


--------------------------------------------------------------------------


#include <stdio.h>

int main()
{
    int n, flag = 0;
    printf("Enter N: ");
    scanf("%d", &n);  // Removed extra space before %d (optional fix)
    
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {  // Fixed condition: check divisibility
            flag = 1;
            printf("The Number %d is not a Prime Number\n", n);
            break;
        }
    }
    
    if(flag == 0 && n > 1) {  // Added check for n > 1 (edge case)
        printf("The Number %d is a Prime Number\n", n);
    }
    else if (flag == 0) {
        printf("The Number %d is not a Prime Number\n", n);  // Handles n <= 1
    }

    return 0;
}
