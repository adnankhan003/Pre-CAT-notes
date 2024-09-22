#include<stdio.h> 
void sumpro( int a, int b ); 
int ps,pp; // global variable 
/*
    variable declared inside the function => local variable
    variable declared outside the function => global variable 
*/
int main( )
{
       int a = 10 , b = 3;  
       sumpro(a,b); // function call 
       printf("\nsum = %d prod = %d",ps,pp);
       return 0; 
}
/*
        ps and pp are => global variables 
        life => throughout the program 

     global variable => can be accessed in whole program 
                //created when program is started 
                        //even before main( ) is called 
                //created in data-section => default value => 0  
        destroyed when program is terminated 
                => after completion of main     

*/

//              10      3 
void sumpro( int a, int b )
{
    
    ps = a + b;// 10 + 3 => 13 
    pp = a * b;// 10 * 3 => 30    
   
    
}