#include<stdio.h> 

int main( )
{
    //int a = 1 , b = 2; 
    //printf("%d %d",a,b); // 1 2 
    
    
    int a = 10; 
    int *ptr = &a; 
    printf("%d %d",a,++*ptr); 
    //             11  11 

    //calling convention 
    //CDECL 
    return 0; 
}
// printf("%d %d %d %d",i,i++,++i,i++); // compiler dependent quest 
// i++ + i++ + ++i;  
// a = a++;  
