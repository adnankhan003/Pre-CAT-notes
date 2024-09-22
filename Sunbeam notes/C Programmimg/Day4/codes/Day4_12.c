#include<stdio.h> 
void sumpro( int a, int b ); 
extern int ps,pp; // declaration 
int main( )
{
       int a = 10 , b = 3;  
       sumpro(a,b); // function call 
       printf("\nsum = %d prod = %d",ps,pp);
       return 0; 
}
int ps,pp; // global variable ( defination ) 
//              10      3 
void sumpro( int a, int b )
{
    
    ps = a + b;// 10 + 3 => 13 
    pp = a * b;// 10 * 3 => 30    
   
    
}
