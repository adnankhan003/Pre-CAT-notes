#include<stdio.h>
int main()
{
    
    /*  
        type modifier 
          signed
          unsigned 
          short 
          long   
    */
    //signed int num = 2147483647; 
    //int num = -10; // size => 4 bytes ( 32 bits )
    // by default it is considered as signed 
    /*
            int => 4 bytes ( signed )( 32 bits )
            ( 2 to power 32 - 1 ) - 1
            ( 2 to power 31 ) - 1    
            2147483647   => max range 
            -2147483648  => min range     
    */
    //printf("%d ",num); 
    
    unsigned int num2 = 4294967295;// 4 bytes  
    /*
            int => 4 bytes ( unsigned )( 32 bits )
            ( 2 to power 32 ) - 1

            max range = > 4294967295
            min range => 0                      
            
    */
   // unsigned => %u 
    printf("%u ",num2); 
    
    return 0;
}
