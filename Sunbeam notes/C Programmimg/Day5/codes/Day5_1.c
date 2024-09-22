#include<stdio.h> 



void fun( )
{   
    static int num = 1;// data section 
    //static int num; 
    //num = 1; 
    num++;  
    printf("%d ",num); 
}
int main()
{
    //printf("%d",num); // NOT OK  
    fun( ); // 2
    fun( ); // 3 
    fun( ); // 4 
    return 0;
}





// int num = 1;// Global variable => data section ( only once )
// void fun( )
// {   
    
//     num++;  
//     printf("%d ",num); 
// }
// int main()
// {
//     //printf("%d",num); // 1 
//     fun( ); // 2
//     fun( ); // 3 
//     fun( ); // 4 
//     return 0;
// }



// void fun( )
// {
//     int num = 1;// local variable  
//     num++;  
//     printf("%d ",num); 
// }
// int main()
// {
//     //printf("%d",num); // ERROR 

//     fun( ); 
//     fun( ); 
//     fun( ); 
//     return 0;
// }
