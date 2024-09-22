#include<stdio.h> 
int main()
{
    int *ptr;
    char *cptr; 
    float *fptr; 
    double *dptr; 

    //scale factor 
    printf("%d",sizeof(*ptr)); // 4 byte 
    printf("%d",sizeof(*cptr)); // 1 byte
    printf("%d",sizeof(*fptr)); // 4 byte
    printf("%d",sizeof(*dptr)); // 8 byte    
    return 0;
}
//sizeof(cptr); =>4  // size of pointer 
//sizeof(*cptr);=>1 // size of datatype of the pointer ( scale factor ) 