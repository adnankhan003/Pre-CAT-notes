#include<stdio.h> 

int main( )
{
    int a;
    typedef int INT;
    int b; // OK 
    INT c; // OK  

    enum color 
    {
        RED,BLUE,GREEN 
    };
    enum color c1; 
    typedef enum color e_c;   
    e_c c2,c3,c4; 
    size_t x;    
    return 0; 
}
