#include<stdio.h> 

int main( )
{
    int num = 10; 
    int *ptr = &num; 
    int **pptr = &ptr; // pointer to pointer 
 //pptr is pointer which is storing the address of int pointer 
 //pptr is a pointer which is pointing to a integer pointer      
    
    //printf("%u ",&ptr);// 500 
    //printf("%u ",pptr);// 500  
    
    printf("%u ",**pptr); 
    /*
            **pptr 
            valueat(valueat(pptr))
            valueat(valueat(500))
            valueat(100)
            10 
    */
    **pptr = 75;  
    printf("\n %u ",num); // 75 
    printf("%u ",**pptr); // 75  
    return 0; 
}
/*
        int num = 1; 
        int *p = &num; 
        int **pp = &p; 
        int ***ppp = &pp; 
*/