#include<stdio.h> 
int main()
{
    int num = 10; 
    int *ptr = &num;  // pointer declare + init 
    //ptr is a pointer to a int 
    //ptr is a pointer storing the address of int 
    //referencing operation 
    //printf("num = %d",num); //10    
    
    //printf("%u ",&num); //100 
    //printf("%u ",ptr); //100 
    
    printf("%u ",*ptr); //10 //Dereference operator - *
    // dereferecing 
    /*
            *ptr
            valueat(ptr)
            valueat(100)
            10 

    */
    return 0;
}
//It is not compatible with unsigned int.
// int *ptr = 100; // NOT OK 