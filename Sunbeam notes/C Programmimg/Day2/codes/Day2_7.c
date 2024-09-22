#include<stdio.h> 
int main()
{
    //sizeof is a operator 
    //sizeof operates at compile time 
    int num; 
    char ch; 
    double d1; 
    short int s1; 
    //printf("%d ",sizeof(1+2)); // int => 4 bytes 
    //printf("%d ",sizeof(num+ch)); // 4 bytes 
    //printf("%d ",sizeof(10.33+'A')); // 8  bytes 
    //printf("%d ",sizeof(10.33f+'A')); // 4  bytes 
    //printf("%d ",sizeof(s1 + ch)); // 4  bytes 
    
    //char ch2 = 'A'; 
    //printf("%d",sizeof('A')); // sizeof(65)=> 4 bytes 
    //char const => int  
    //printf("%d",sizeof(ch)); // 1 bytes 
    // ch => variable => char => 1 byte 
    
    int x = 1; 
    printf("%d ",sizeof(x++)); // 4 bytes // x = x + 1 
    printf("%d ",x); // 1   
    return 0;
}
