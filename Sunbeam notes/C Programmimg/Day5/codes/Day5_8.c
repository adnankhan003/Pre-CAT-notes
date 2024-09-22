#include<stdio.h> 

int main( )
{
    int a =  10; 
    int *p = &a; 
    int *q; 
    q = p; 
    printf("%d %d %d",a,*p,*q); //10 10 10 
    return 0; 
}