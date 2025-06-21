#include <stdio.h>
#include <math.h>

int main()
{
    int sum = 0, num , copy,count;
    scanf("%d", &num);
    
   
    
    while(copy > 0){
        copy = copy/10;
        count++;
    }
    
     num = copy;
   
    while(copy > 0){
        sum = sum + pow((copy%10),count);
        copy = copy/10;
    }
    
    if(num == sum){
        printf("It is armstrong!!!");
        
    }
    else printf("It's not armstrong");
    return 0;
}
