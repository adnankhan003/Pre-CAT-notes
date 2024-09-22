#include<stdio.h> 

int main( )
{
    // init list 
    char str1[5]={'A','B','C','D','E'};
    //char array => 5 bytes 

    // \0 => null character => 0 
    char str2[5] = {'a','b','c','d','\0'}; 
    // 5 char array terminated with \0 => string 
    
    char str3[5] = {'I','N','F','O'}; // partial init 
    //  rest ele are init to 0 
    // it is a string 

    char str4[] = {'s','u','n','b','e','a','m'}; 
    // char array 

    int i;
    for(i=0 ; i<7 ; i++)
        putchar(str4[i]);  
 
    // for(i=0 ; i<5 ; i++)
    //     putchar(str1[i]);  

    // for(i=0 ; str2[i]!='\0' ; i++)
    //     putchar(str2[i]);  

    // for(i=0 ; str3[i]!='\0' ; i++)
    //     putchar(str3[i]);  
     
    return 0; 
}