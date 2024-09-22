#include<stdio.h> 

int main( )
{
    int a = 1; 
    // comma operator 
    //a = 1,2,3,4,5,6; 
    //a  = (1,2,3); //3 
      a  = ( (1,2) , 3 ); 
      //   (    2  ,3  )
      //         3    
    printf("%d",a); //3  
    return 0; 
}