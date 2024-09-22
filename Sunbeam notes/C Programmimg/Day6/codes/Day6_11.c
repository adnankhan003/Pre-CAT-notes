#include<stdio.h> 

void fun( int *p )
{
    printf("inside the function %d \n",*p++);//10 
    printf("inside the function %u ",*p); // Garbage  
}
int main( )
{
    int a = 10; 
    fun( &a); 
    printf("\n"); 
    printf("%d ",a); //10 
    return 0; 
}
// void fun( int *p )
// {
//         *p++; 
// }
// int main( )
// {
//     int a = 10; 
//     fun( &a); 
//     printf("%d ",a); //10 
//     return 0; 
// }
// void fun( int *p )
// {
//         ++*p; 
// }
// int main( )
// {
//     int a = 10; 
//     fun( &a); 
//     printf("%d ",a); //11 
//     return 0; 
// }