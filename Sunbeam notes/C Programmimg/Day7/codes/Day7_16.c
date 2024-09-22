#include<stdio.h> 
#define ADD(a,b) (a+b)
#define MULTIPLY(a,b) (a*b) 
#define SQR(x)  ( (x) * (x) ) 

int main( )
{
    printf("%d ",ADD(2,3));// 5   
    //printf("%d ",(2+3)); 

    printf("%d ",MULTIPLY(2,3));//6 
    //printf("%d ",(2*3)); 

    printf("%d ",MULTIPLY(2+1,3+1));//6 
    //printf("%d ",(2+1*3+1));
    
    printf("%d ",SQR(2+3)); // 25 
    //printf("%d ",( (2+3) * (2+3 )  );  
    return 0; 
}