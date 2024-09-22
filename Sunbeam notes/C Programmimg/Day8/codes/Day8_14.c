#include<stdio.h> 
int add(int a , int b); 
int main( )
{
    //function pointer 
    //int (*ptr)(int); 
 //ptr is a pointer to a function that accepts the int and returns the int    
    
    int (*ptr1)(int,int) = add;

    int (*ptr2)(int,int) = &add;

    //dereferencing => calling the function  
    
    (*ptr1)(10,2); //call 
      ptr2(2,3); // call
      /*
            array of function pointer 
            // int (*arr[4])(int,int); 
      */ 
    return 0; 
}
int add(int a , int b)
{
    printf("%d ",a+b); 
}

/*

        type qualifiers 
        const , volatile 

        volatile int version = 1; 
        while(version == 1)
        {
            //CODE 
        }

        while(1)
        {
            //CODE
        }

*/