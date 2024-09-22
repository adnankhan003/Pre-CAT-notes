#include<stdio.h> 

int main( )
{
    const int num = 10; 
    const int num2 = 20; 
     const int * const ptr = &num; 
    //const int const * const ptr = &num; // OK   
//ptr is a const pointer pointing to constant integer variable     
    
    //printf("%d ",num); //10 
    //printf("%d ",*ptr); //10
    //num = 20;  // NO 
    //*ptr = 20; // NO
    //ptr = &num2; // NO 
    return 0; 
}