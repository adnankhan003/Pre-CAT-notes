#include<stdio.h> 

int main( )
{
    char ch = 'A'; 
    char *cptr = &ch; 
    char **cpptr = &cptr; 

    //printf("%d ",sizeof(ch)); // 1 
    //printf("%d ",sizeof(cptr)); // 4 ( pointer size 32 bit )
    //printf("%d ",sizeof(*cptr)); // 1 ( scale factor) 

    // printf("%d ",sizeof(cpptr)); // 4 bytes 
    // printf("%d ",sizeof(**cpptr)); // 1 bytes
    // printf("%d ",sizeof(*cpptr)); // 4 bytes  
    

    return 0; 
}