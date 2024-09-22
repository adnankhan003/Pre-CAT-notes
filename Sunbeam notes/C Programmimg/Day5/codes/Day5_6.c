#include<stdio.h> 
int main()
{
    int num = 10; 
    int *ptr = &num;  // pointer declare + init 
    
    num = 20; 
    printf("num = %d",num); // 20 
    printf("*ptr = %d",*ptr); // 20 
    /*
                *ptr 
                valueat(ptr)
                valueat(100)
                20 
    */
    printf("\n After updating with pointer \n"); 

    *ptr = 50; 
    /*      
            valueat(ptr)
            valueat(100)
                    ==> 50 
    */
    printf("num = %d ",num); //50
    printf("*ptr = %d ",*ptr); // 50 
    /*
            *ptr 
            valueat(ptr)
            valueat(100)
            50 
    */
    *ptr = 200; 
    printf("\n num = %d ",num); //200  

    *ptr = *ptr + 1; 
    //     200  + 1 
    //*ptr => &num  
    /*
            *ptr
            valueat(ptr)
            valueat(100)
                    => 201 
    */
    printf("\n num = %d ",num); //201
    printf("*ptr = %d ",*ptr); //201  

    int num2 = 75; 
    ptr = &num2;   // pointer is updated 
    printf("\n %d ",*ptr); //75 
    /*
            *ptr 
            valueat(ptr)
            valueat(900)
            75 
    */
    return 0;
}
