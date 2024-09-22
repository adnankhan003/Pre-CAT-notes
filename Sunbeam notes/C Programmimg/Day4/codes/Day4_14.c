#include<stdio.h> 
void fun( ); 
int num5 = 60; // program scope 
static int num4 = 50; // file scope 
int main( )
{
    // block scope 
    static int num = 10; //data section ( before main is called only once   ) 
    int num2; // local variable => stack ( FAR of main )
    printf("%d",num); //10 
    return 0; 
}
void fun( )
{
     //printf("%d",num); 
}

/*
    int y; (program scope)
    static int x(file scope ) 
    main.c                          f1.c        f2.c 

    gcc main.c f1.c f2.c 
    a.exe 

*/