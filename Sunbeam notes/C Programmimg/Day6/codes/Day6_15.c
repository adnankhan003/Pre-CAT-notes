#include<stdio.h> 

int main( )
{
    // type qualifier 
    // const and volatile 
    const int value = 10;
    printf("%d ",value); //10 
    //value = 20; // NOT OK 
    //value = value + 10; // NOT OK   
    return 0; 
}