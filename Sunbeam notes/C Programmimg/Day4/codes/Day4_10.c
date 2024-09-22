#include<stdio.h> 
void sumpro( int a, int b ); 
int main( )
{
       int a = 10 , b = 3;  
       sumpro(a,b); // function call 
       //printf("\nsum = %d prod = %d",ps,pp);
       //main cannot access local variable from another functiom 
       //scope of ps and pp is limited to sumpro only 
       return 0; 
}
//              10      3 
void sumpro( int a, int b )
{
    int ps,pp; 
    ps = a + b;// 10 + 3 => 13 
    pp = a * b;// 10 * 3 => 30    
   
    
}