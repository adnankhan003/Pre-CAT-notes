#include<stdio.h> 

void fun( int *p)
{
    p = p + 10; 
}
void fun1( int *p)
{
    *p = *p + 10; 
}
int main( )
{
    int num = 10; 
    fun(&num); 
    printf("\n num = %d",num); //10 
    fun1( &num ); 
    printf("\n num = %d",num); //20   
    return 0; 
}