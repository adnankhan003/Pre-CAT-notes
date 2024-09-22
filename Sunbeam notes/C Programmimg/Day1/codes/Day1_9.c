#include<stdio.h> 

int main( )
{
    //sizeof() => operator 
    int num; 
    char ch; 
    double d; 
    float f; 
    printf("%d ",sizeof(num)); //4 bytes  
    printf("%d ",sizeof(ch)); // 1 byte 
    printf("%d ",sizeof(d)); // 8 bytes 
    printf("%d ",sizeof(f)); // 4 bytes 
    return 0; 
}