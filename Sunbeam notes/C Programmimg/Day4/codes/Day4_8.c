#include<stdio.h> 
int fun( void  ); 
int main( )
{
    int x; 
    x = fun( ); 
    printf("%d",x); 
    return 0; 
}
int fun( void  )
{
      return (12,11); // 11   
    //return 11,12; // 12     
    //return 11; 
    //return 12; 
}