#include<stdio.h> 

int main( )
{
    int num = 10; // non-const 
    int num2 = 20; // non const 
     int * const ptr = &num; 
    //int * ptr const = &num; // NOT OK  
//ptr is a constant pointer pointing to non-constant integer variable     

    printf("%d ",num); // 10 
    printf("%d ",*ptr); //10
    *ptr = 20;  
    printf("\n");     
    printf("%d ",num); // 20 
    printf("%d ",*ptr); //20

    //ptr = &num2; // NOT OK 
    return 0; 
}
