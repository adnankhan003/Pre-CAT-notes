#include<stdio.h> 

int main( )
{
    int num = 10; 
    int *ptr = &num; // referencing 

    printf("%d",ptr);//100  
    
    ptr = ptr + 1; 
    /*
            ptr + n =>  
            ptr + n * scale factor of ptr

            ptr + 1 
            ptr + 1 * scale factor of ptr 
            100 + 1 * 4 
            100 + 4 
            104 

    */
    printf("\n %d",ptr);//104  
    ptr--; // ptr = ptr - 1 
    /*
      ptr + n =>  
            ptr + n * scale factor of ptr

            ptr + 1 
            ptr + 1 * scale factor of ptr 
            104 - 1 * 4 
            104 - 4 
            100  
   */          
    //ptr = ptr % 1;  // NOT OK 
    //ptr = ptr / 1;  // NOT OK 
    //ptr = ptr * 1;  // NOT OK 
    printf("\n %d",ptr);//100  
    return 0; 
}
/*
        int *ptr 
        ptr + 20;
        ptr + 20 * 4 
        ptr + 80 

        char *cptr; 
        cptr + 10; 
        cptr + 10 * 1 
        cptr + 10; 

        float *fptr;; 
        fptr + 5; 
        fptr + 5 * 4;  
        fptr + 20; 

        double *dptr; 
        dptr + 2; 
        dptr + 2 * 8 
        dptr + 16   
*/