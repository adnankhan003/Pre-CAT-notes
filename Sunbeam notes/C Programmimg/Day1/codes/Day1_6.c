#include<stdio.h> 
int main()
{
    int number = 50; // variable decln + init 
    int x;// variable declaration ( garbage )
    //int x; // NO ( compile time error )( variable declaration is done only once )
    x = 10; //assignment    
    printf("x = %d",x); // 10 
    x = 20; 
    printf("x = %d",x); // 20 
    x = -100; 
    x = 300; 
    printf("x = %d",x); // 300   
    //Assignment can be done multiple number of times 
    return 0;
}
/*
        //NOT OK 
        // Initialization can be done only once 
        int y = 10; 
        int y = 20; 

        // OK 
        int x =11; 
        x = 12; //Assignment ( OK )
*/