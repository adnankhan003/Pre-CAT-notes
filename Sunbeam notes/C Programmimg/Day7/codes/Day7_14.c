#include<stdio.h> 
#include<stdlib.h> 

int main( )
{
    // void* realloc(void *ptr , size_t size); 
    int *ptr,i; 
    ptr = (int*)calloc(3 , sizeof(int)); // 12 bytes 
    for(i = 0 ; i<=2 ; i++)
        ptr[i] = 10 * (i + 1); 
    //ptr[3]; //illegal     
    ptr = (int*)realloc(ptr, 5 * sizeof(int)); //20 bytes 
    ptr[3] = 23; 
    ptr[4] = 55; 
     for(i = 0 ; i<=4 ; i++)
        printf("%d ",ptr[i]);   
    free(ptr); // to avoid memory leakage 
    ptr = NULL;// to avoid dangling pointer      
    return 0; 
}