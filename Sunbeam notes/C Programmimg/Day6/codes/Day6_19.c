#include<stdio.h> 

int main( )
{
    int num = 10; 
    const int *ptr = &num; 

    printf("%d ",num); //10 
    //num = 20; // NOT OK 
    //*ptr = 20; // NOT OK 
    printf("%d ",num); //20  
    return 0; 
}

// int main( )
// {
//     const int num = 10; 
//     int *ptr = &num; 

//     printf("%d ",num); //10 
//     //num = 20; // NOT OK 
//     *ptr = 20; 
//     printf("%d ",num); //20  
//     return 0; 
// }
