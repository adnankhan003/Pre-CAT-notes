#include<stdio.h> 
void fun( int **p ); 
int main( )
{
    int num = 10; 
    int *ptr = &num; 
    printf("inside the main function :: %d",*ptr); //10
    fun( &ptr ); // pointer address   
    printf("\n after calling function in main :: %d",num); //12  
    return 0; 
}
void fun( int **p )
{
    printf("\n %d ",**p); // 10 
    **p = **p + 2; 
}

// #include<stdio.h> 
// void fun( int *ptr ); 
// int main( )
// {
//     int num = 10; 
//     printf("inside the main function :: %d",num); //10
//     fun( &num );  
//     printf("\n after calling function in main :: %d",num); //20  
//     return 0; 
// }
// void fun( int *ptr )
// {
//     //printf("\n inside the function %d",*ptr); // 10 
//      *ptr = *ptr + 10; 
// }