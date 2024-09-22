#include<stdio.h> 
int main()
{
    //Size of pointer variable is always same, 
    //irrespective of its data type (as it stores 
    //only the address).

    int *ptr; 
    char *cptr; 
    float *fptr; 
    double *dptr;
    /*
            32 bit compiler ( 4 bytes )
            64 bit compiler ( 8 bytes )
    */
    printf("%d ",sizeof(ptr)); //4
    printf("%d ",sizeof(cptr));//4
    printf("%d ",sizeof(fptr));//4
    printf("%d ",sizeof(dptr));//4 
    return 0;
}
