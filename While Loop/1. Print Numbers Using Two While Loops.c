/*
1. Print Numbers Using Two While Loops

Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops.

*/

#include <stdio.h>

int main()
{
    int n, i;
    
    i = 0;
    printf("Numbers from 0 to 10:\n");
    
    while(i <= 10){
        printf("%d \n", i);
        i++;
    }
    
    n = 10;
    printf("Numbers from 10 to 0:\n");
    
    while(n >= 0){
        printf("%d \n", n);
        n--;
    }
    

    return 0;
}

/*

Numbers from 0 to 10:
0 
1 
2 
3 
4 
5 
6 
7 
8 
9 
10 
Numbers from 10 to 0:
10 
9 
8 
7 
6 
5 
4 
3 
2 
1 
0 

*/
