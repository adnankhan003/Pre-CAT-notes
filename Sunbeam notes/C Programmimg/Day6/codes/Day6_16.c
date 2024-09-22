#include<stdio.h> 

int main( )
{
    const int num = 10; 
    const int num2 = 30; 

     const int *ptr = &num;
    //int const *ptr = &num;  
    //const int const *ptr = &num;
// ptr is a non-constant pointer pointing to contant integer variable     
    
    printf("%d ",num); // OK =>10 
    printf("%d ",*ptr); //OK =>10

     //num = 20; // NOT OK 
     //*ptr = 20; // NOT OK 

    ptr = &num2; // OK 
    printf("%d ",*ptr); //OK =>30 
    return 0; 
}
