// factorial using while loop
#include <stdio.h>

int main()
{
    int i=1, n, fact=1;
    printf("Enter the Num : ");
    scanf("%d", &n);
    
   while(i<=n){
       fact = fact*i ;
       i++;
   }
   printf("%d",fact);
   return 0;
}

// factorial using for loop
#include <stdio.h>

int main()
{
    int i=1, n, fact=1;
    printf("Enter the Num : ");
    scanf("%d", &n);
    
   while(i<=n){
       fact = fact*i ;
       i++;
   }
   printf("%d",fact);
   return 0;
}

// factorial using do while loop

#include <stdio.h>

int main()
{
    int i=1, fact=1, num;
    printf("Enter the num: ");
    scanf("%d", &num);
    
    do{
        fact = fact*i;
        i++;
    }while(i<=num);
    
    printf("%d\n",fact);
    
    printf("%d",i);

    return 0;
}
